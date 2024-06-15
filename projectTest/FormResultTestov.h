#pragma once

namespace projectTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormResultTestov
	/// </summary>
	public ref class FormResultTestov : public System::Windows::Forms::Form
	{
	public: int^ counterShef;
	public:
		FormResultTestov()
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
		~FormResultTestov()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ItogZaTest;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ button1;


	protected:


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
			this->ItogZaTest = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ItogZaTest
			// 
			this->ItogZaTest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ItogZaTest->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ItogZaTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ItogZaTest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ItogZaTest->Location = System::Drawing::Point(13, 35);
			this->ItogZaTest->Name = L"ItogZaTest";
			this->ItogZaTest->Size = System::Drawing::Size(391, 154);
			this->ItogZaTest->TabIndex = 0;
			this->ItogZaTest->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ItogZaTest->TextChanged += gcnew System::EventHandler(this, &FormResultTestov::ItogZaTest_Click);
			this->ItogZaTest->Click += gcnew System::EventHandler(this, &FormResultTestov::ItogZaTest_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Plum;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->Location = System::Drawing::Point(72, 328);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(268, 64);
			this->Exit->TabIndex = 1;
			this->Exit->Text = L"Завершить тест";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &FormResultTestov::Exit_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(326, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormResultTestov::button1_Click);
			// 
			// FormResultTestov
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(416, 423);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->ItogZaTest);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormResultTestov";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Результат за тест";
			this->ResumeLayout(false);

		}
#pragma endregion


	public: System::Void ItogZaTest_Click(System::Object^ sender, System::EventArgs^ e) {
		
		ItogZaTest->Text = counterShef->ToString();
	}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
};
}
