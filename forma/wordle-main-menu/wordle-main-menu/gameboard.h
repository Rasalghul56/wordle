#pragma once

namespace wordlemainmenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для gameboard
	/// </summary>
	public ref class Gameboard : public System::Windows::Forms::Form
	{
	public:
		Gameboard(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Gameboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;


























	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gameboard::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 610);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Й";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(85, 610);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ц";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(133, 610);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(42, 41);
			this->button3->TabIndex = 2;
			this->button3->Text = L"У";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(181, 610);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(42, 41);
			this->button4->TabIndex = 3;
			this->button4->Text = L"К";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(229, 610);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(42, 41);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Е";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(277, 610);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(42, 41);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Н";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(325, 610);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(42, 41);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Г";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(373, 610);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(42, 41);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Ш";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(421, 610);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(42, 41);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Щ";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(469, 610);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(42, 41);
			this->button10->TabIndex = 9;
			this->button10->Text = L"З";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(517, 610);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(42, 41);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Х";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(565, 610);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(42, 41);
			this->button12->TabIndex = 11;
			this->button12->Text = L"Ъ";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(37, 657);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(42, 41);
			this->button13->TabIndex = 22;
			this->button13->Text = L"Ф";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(85, 657);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(42, 41);
			this->button14->TabIndex = 21;
			this->button14->Text = L"Ы";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(133, 657);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(42, 41);
			this->button15->TabIndex = 20;
			this->button15->Text = L"В";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(181, 657);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(42, 41);
			this->button16->TabIndex = 19;
			this->button16->Text = L"А";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(229, 657);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(42, 41);
			this->button17->TabIndex = 18;
			this->button17->Text = L"П";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(277, 657);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(42, 41);
			this->button18->TabIndex = 17;
			this->button18->Text = L"Р";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(325, 657);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(42, 41);
			this->button19->TabIndex = 16;
			this->button19->Text = L"О";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(373, 657);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(42, 41);
			this->button20->TabIndex = 15;
			this->button20->Text = L"Л";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(421, 657);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(42, 41);
			this->button21->TabIndex = 14;
			this->button21->Text = L"Д";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(469, 657);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(42, 41);
			this->button22->TabIndex = 13;
			this->button22->Text = L"Ж";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(517, 657);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(42, 41);
			this->button23->TabIndex = 12;
			this->button23->Text = L"Э";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(133, 704);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(42, 41);
			this->button24->TabIndex = 33;
			this->button24->Text = L"Я";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(181, 704);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(42, 41);
			this->button25->TabIndex = 32;
			this->button25->Text = L"Ч";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(229, 704);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(42, 41);
			this->button26->TabIndex = 31;
			this->button26->Text = L"С";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(277, 704);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(42, 41);
			this->button27->TabIndex = 30;
			this->button27->Text = L"М";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(325, 704);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(42, 41);
			this->button28->TabIndex = 29;
			this->button28->Text = L"И";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(373, 704);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(42, 41);
			this->button29->TabIndex = 28;
			this->button29->Text = L"Т";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(421, 704);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(42, 41);
			this->button30->TabIndex = 27;
			this->button30->Text = L"Ь";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(469, 704);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(42, 41);
			this->button31->TabIndex = 26;
			this->button31->Text = L"Б";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(517, 704);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(42, 41);
			this->button32->TabIndex = 25;
			this->button32->Text = L"Ю";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Gameboard::btnclik);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(37, 704);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(90, 41);
			this->button33->TabIndex = 24;
			this->button33->Text = L"УДАЛИТЬ";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(565, 657);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(53, 88);
			this->button34->TabIndex = 23;
			this->button34->Text = L"ВВОД";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(50, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 100);
			this->label1->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(156, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 100);
			this->label2->TabIndex = 35;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(261, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 100);
			this->label3->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(367, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 100);
			this->label4->TabIndex = 37;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(473, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 100);
			this->label5->TabIndex = 38;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(50, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 100);
			this->label6->TabIndex = 43;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(156, 149);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 100);
			this->label7->TabIndex = 42;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(261, 149);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 100);
			this->label8->TabIndex = 41;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(367, 149);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 100);
			this->label9->TabIndex = 40;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(473, 149);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 100);
			this->label10->TabIndex = 39;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(50, 258);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 100);
			this->label11->TabIndex = 48;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(156, 258);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 100);
			this->label12->TabIndex = 47;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(262, 258);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 100);
			this->label13->TabIndex = 46;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(367, 258);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 100);
			this->label14->TabIndex = 45;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(473, 258);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 100);
			this->label15->TabIndex = 44;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(50, 369);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 100);
			this->label16->TabIndex = 53;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(156, 369);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(100, 100);
			this->label17->TabIndex = 52;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(261, 369);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 100);
			this->label18->TabIndex = 51;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(367, 369);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(100, 100);
			this->label19->TabIndex = 50;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(473, 369);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 100);
			this->label20->TabIndex = 49;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(50, 479);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(100, 100);
			this->label21->TabIndex = 58;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(156, 479);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(100, 100);
			this->label22->TabIndex = 57;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(261, 479);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(100, 100);
			this->label23->TabIndex = 56;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(367, 479);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(100, 100);
			this->label24->TabIndex = 55;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(473, 479);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(100, 100);
			this->label25->TabIndex = 54;
			// 
			// Gameboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 776);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);


			/*for (int i = 0; i < 10; i++) {
				System::Windows::Forms::Label^ label = (gcnew System::Windows::Forms::Label());
				label->BackColor = System::Drawing::SystemColors::ActiveBorder;
				label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 63, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				label->Location = System::Drawing::Point(50 + i*120, 40);
				label->Name = L"label1";
				label->Size = System::Drawing::Size(100, 100);
				this->Controls->Add(label);
				
			}*/


			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Gameboard";
			this->Text = L"Wordle-gameboard";
			this->Load += gcnew System::EventHandler(this, &Gameboard::gameboard_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void gameboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnclik(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = safe_cast<Button^>(sender);
	this->label1->Text = button->Text;	
}
};
}
