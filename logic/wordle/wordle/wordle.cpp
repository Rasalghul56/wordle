#include <iostream>
#include "Windows.h"
#include "string"
#include <fstream>
#include <random>
#include <cstdlib>
#include <codecvt>
#include <io.h>
#include <fcntl.h>
using namespace std;


void setColor(int color){ //������� �� ����� ����� �������
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}
wstring get_random_word() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	wifstream ReadFile("words.txt");
	ReadFile.imbue(locale(locale(), new codecvt_utf8<wchar_t>()));//������ �������

	int minr = 0;//������������
	int maxr = 27083;
	int random;
	wstring word;

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(minr, maxr);
	random = dist(gen);
	/*srand(unsigned(time(NULL)));
	random = rand() % maxr;*///����� ��������
	/*cout << random;*/

	if (!ReadFile) {//�������� �� ������� �����
		cout << "error!";
		return 0;
	}

	getline(ReadFile, word);//��������� ���������� �����
	for (int i = 1; i <= random; i++) {
		getline(ReadFile, word);
	}

	ReadFile.close();
	return word;
}
void console_output_wordle(int color) {
	char sq = char(219);
	setColor(color);
	setlocale(LC_ALL, "C");
	SetConsoleCP(437);
	SetConsoleOutputCP(437);
	cout << sq;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}
bool check_word_in_dict(wstring word) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	wifstream ReadFile("words.txt");
	ReadFile.imbue(locale(locale(), new codecvt_utf8<wchar_t>()));//������ �������

	bool indict = false;
	wstring dict;
	while (getline(ReadFile, dict)) {
		if (word == dict) {
			indict = true;
			break;
		}
	}
	ReadFile.close();
	return indict;
}
int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool guess;
	bool check;
	bool first = false, second = false, third = false, fourth = false, fifth = false;
	int lifes = 5;
	wstring word = get_random_word();
	wstring temp;
	cout << "����� ���������� � ���� wordle!\n��� ���������� ��������� �������� ����� �� 5 ����, ���� ����� � ��������� ����� ���� � ����������, �� ��� ������������ ������, ���� ����� ����� ��������� ����� ����� � ������, �� �������, ����� - �����";
	cout << "\n������� ����� �� 5 ����(�������� - �����)\n";
	while (lifes > 0) {
		setlocale(LC_ALL, "Russian");
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		do {
			start:
			temp = L"";
			wcin >> temp;
			if (!temp[0] || !temp[1] || !temp[2] || !temp[3] || !temp[4] || temp[5] != '\0') {
				cout << "������� �� ������������� �����!\n��������� �������\n";
				goto start;
			}
			check = check_word_in_dict(temp);
			if (!check) {
				cout << "������ ����� ��� � �������\n���������� ��� ���\n";
			}
		} while (!check);
		cout << '\n';
		for (int i = 0; i < 5; i++) {
			guess = false;
			for (int j = 0; j < 5; j++) {
				if (word[j] == temp[i]) {
					if (i == j || word[i] == temp[i]) {
						console_output_wordle(10);
						switch (i) {
						case 0: {
							first = true;
							break;
						}
						case 1: {
							second = true;
							break;
						}
						case 2: {
							third = true;
							break;
						}
						case 3: {
							fourth = true;
							break;
						}
						case 4: {
							fifth = true;
							break;
						}
						}
					}
					else {
						console_output_wordle(6);
					}
					guess = true;
					break;
				}
			}
			if (!guess) {
				console_output_wordle(8);
			}
		}
		setColor(7);
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		setlocale(LC_ALL, "Russian");
		if (first && second && third && fourth && fifth) {
			cout << "\n�� �������!";
			exit(0);
		}
		else {
			lifes--;
			cout << "\n������ ��������: " << lifes << '\n';
			if (lifes != 0) {
				cout << "���������� ��� ���\n";
			}
		}
	}
	cout << "�� ��������, ����� ����: ";
	wcout << word;
	return 0;
}