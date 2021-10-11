#pragma once

#include <inttypes.h>

namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox10;


	protected:





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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 56);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"a = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(38, 53);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(180, 20);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"17";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(38, 79);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(180, 20);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"11";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(7, 82);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"b = ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(38, 105);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(180, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"256";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(7, 108);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(25, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"c = ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(38, 131);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(180, 20);
			this->textBox7->TabIndex = 7;
			this->textBox7->Text = L"172";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(7, 134);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(28, 13);
			this->label15->TabIndex = 6;
			this->label15->Text = L"t0 = ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(7, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(26, 13);
			this->label16->TabIndex = 9;
			this->label16->Text = L"P = ";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(38, 27);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(180, 20);
			this->textBox8->TabIndex = 10;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(47, 4);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(140, 18);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Входные данные";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(70, 154);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 18);
			this->label18->TabIndex = 12;
			this->label18->Text = L"Результат";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(10, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(206, 22);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Вычислить контрольную сумму";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(10, 239);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(206, 20);
			this->textBox9->TabIndex = 14;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(47, 223);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(123, 13);
			this->label19->TabIndex = 15;
			this->label19->Text = L"Хеш с гаммированием";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(49, 178);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(127, 13);
			this->label20->TabIndex = 17;
			this->label20->Text = L"Хеш без гаммирования";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(12, 194);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(206, 20);
			this->textBox10->TabIndex = 16;
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(230, 295);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label12);
			this->Name = L"MyForm";
			this->Text = L"Контрольная сумма";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int Ksumm, K, a, b, c;
		uint8_t t;

		String^ P = textBox8->Text;

		Regex^ numberPattern = gcnew Regex("^[0-9]+$");
		if (!numberPattern->Match(textBox4->Text)->Success | !numberPattern->Match(textBox5->Text)->Success |
			!numberPattern->Match(textBox6->Text)->Success | !numberPattern->Match(textBox7->Text)->Success) {
			MessageBox::Show("a, b, c и t0 больше 0", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		a = Convert::ToInt32(textBox4->Text);
		b = Convert::ToInt32(textBox5->Text);
		c = Convert::ToInt32(textBox6->Text);
		t = Convert::ToByte(textBox7->Text);

		K = 0;
		for (int i = 0; i < P->Length; i++) {
			K += (char) P[i] ^ t;
			t = (a * t + b) % c;
		}

		Ksumm = K % c;

		textBox9->Text = Ksumm.ToString();

		K = 0;
		for (int i = 0; i < P->Length; i++)
			K += P[i];

		Ksumm = K % c;

		textBox10->Text = Ksumm.ToString();

	}

};
}
