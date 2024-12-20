#pragma once
#include "gameboard.h"

namespace wordlemainmenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ wordle
	/// </summary>
	public ref class wordle : public System::Windows::Forms::Form
	{
	public:
		wordle(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~wordle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnMainMenu;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(wordle::typeid));
			this->btnMainMenu = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnMainMenu
			// 
			this->btnMainMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMainMenu->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnMainMenu->Location = System::Drawing::Point(119, 282);
			this->btnMainMenu->Name = L"btnMainMenu";
			this->btnMainMenu->Size = System::Drawing::Size(213, 98);
			this->btnMainMenu->TabIndex = 0;
			this->btnMainMenu->Text = L"»√–ј“№!";
			this->btnMainMenu->UseVisualStyleBackColor = true;
			this->btnMainMenu->Click += gcnew System::EventHandler(this, &wordle::btnMainMenu_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 66.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(104, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(255, 89);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Wordle";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 452);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"–азработчики:#####";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(415, 452);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"v.0.1";
			// 
			// wordle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 477);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMainMenu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"wordle";
			this->Text = L"wordle-main-menu";
			this->Click += gcnew System::EventHandler(this, &wordle::btnMainMenu_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnMainMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide();
		Gameboard^ gb = gcnew Gameboard;
		gb->Show();
	}
};
}
