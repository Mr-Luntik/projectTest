#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>

namespace projectTest {

	using namespace System;
	using namespace msclr::interop;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для FormStartTest
	/// </summary>
	public ref class FormStartTest : public System::Windows::Forms::Form
	{
	public:
		FormStartTest(void)
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
		~FormStartTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelForVopr;
	protected:

	protected:

	private: System::Windows::Forms::Label^ labelforOTV1;
	private: System::Windows::Forms::Label^ labelforOTV2;
	private: System::Windows::Forms::Label^ labelforOTV3;
	private: System::Windows::Forms::Label^ labelforOTV4;
	private: System::Windows::Forms::RadioButton^ RDBotv1;
	private: System::Windows::Forms::RadioButton^ RDBotv2;
	private: System::Windows::Forms::RadioButton^ RDBotv3;
	private: System::Windows::Forms::RadioButton^ RDBotv4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




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
			this->labelForVopr = (gcnew System::Windows::Forms::Label());
			this->labelforOTV1 = (gcnew System::Windows::Forms::Label());
			this->labelforOTV2 = (gcnew System::Windows::Forms::Label());
			this->labelforOTV3 = (gcnew System::Windows::Forms::Label());
			this->labelforOTV4 = (gcnew System::Windows::Forms::Label());
			this->RDBotv1 = (gcnew System::Windows::Forms::RadioButton());
			this->RDBotv2 = (gcnew System::Windows::Forms::RadioButton());
			this->RDBotv3 = (gcnew System::Windows::Forms::RadioButton());
			this->RDBotv4 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelForVopr
			// 
			this->labelForVopr->BackColor = System::Drawing::Color::Bisque;
			this->labelForVopr->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelForVopr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelForVopr->Location = System::Drawing::Point(13, 13);
			this->labelForVopr->Name = L"labelForVopr";
			this->labelForVopr->Size = System::Drawing::Size(391, 77);
			this->labelForVopr->TabIndex = 0;
			this->labelForVopr->Click += gcnew System::EventHandler(this, &FormStartTest::labelForVopr_Click);
			// 
			// labelforOTV1
			// 
			this->labelforOTV1->BackColor = System::Drawing::Color::MistyRose;
			this->labelforOTV1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelforOTV1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelforOTV1->Location = System::Drawing::Point(36, 106);
			this->labelforOTV1->Name = L"labelforOTV1";
			this->labelforOTV1->Size = System::Drawing::Size(368, 59);
			this->labelforOTV1->TabIndex = 1;
			this->labelforOTV1->Click += gcnew System::EventHandler(this, &FormStartTest::labelforOTV1_Click);
			// 
			// labelforOTV2
			// 
			this->labelforOTV2->BackColor = System::Drawing::Color::MistyRose;
			this->labelforOTV2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelforOTV2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelforOTV2->Location = System::Drawing::Point(36, 174);
			this->labelforOTV2->Name = L"labelforOTV2";
			this->labelforOTV2->Size = System::Drawing::Size(368, 59);
			this->labelforOTV2->TabIndex = 2;
			this->labelforOTV2->Click += gcnew System::EventHandler(this, &FormStartTest::labelforOTV2_Click);
			// 
			// labelforOTV3
			// 
			this->labelforOTV3->BackColor = System::Drawing::Color::MistyRose;
			this->labelforOTV3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelforOTV3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelforOTV3->Location = System::Drawing::Point(36, 242);
			this->labelforOTV3->Name = L"labelforOTV3";
			this->labelforOTV3->Size = System::Drawing::Size(368, 59);
			this->labelforOTV3->TabIndex = 3;
			this->labelforOTV3->Click += gcnew System::EventHandler(this, &FormStartTest::labelforOTV3_Click);
			// 
			// labelforOTV4
			// 
			this->labelforOTV4->BackColor = System::Drawing::Color::MistyRose;
			this->labelforOTV4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelforOTV4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelforOTV4->Location = System::Drawing::Point(36, 310);
			this->labelforOTV4->Name = L"labelforOTV4";
			this->labelforOTV4->Size = System::Drawing::Size(368, 57);
			this->labelforOTV4->TabIndex = 4;
			this->labelforOTV4->Click += gcnew System::EventHandler(this, &FormStartTest::labelforOTV4_Click);
			// 
			// RDBotv1
			// 
			this->RDBotv1->AutoSize = true;
			this->RDBotv1->Location = System::Drawing::Point(13, 126);
			this->RDBotv1->Name = L"RDBotv1";
			this->RDBotv1->Size = System::Drawing::Size(17, 16);
			this->RDBotv1->TabIndex = 5;
			this->RDBotv1->TabStop = true;
			this->RDBotv1->UseVisualStyleBackColor = true;
			this->RDBotv1->CheckedChanged += gcnew System::EventHandler(this, &FormStartTest::RDBotv1_CheckedChanged);
			// 
			// RDBotv2
			// 
			this->RDBotv2->AutoSize = true;
			this->RDBotv2->Location = System::Drawing::Point(13, 194);
			this->RDBotv2->Name = L"RDBotv2";
			this->RDBotv2->Size = System::Drawing::Size(17, 16);
			this->RDBotv2->TabIndex = 6;
			this->RDBotv2->TabStop = true;
			this->RDBotv2->UseVisualStyleBackColor = true;
			this->RDBotv2->CheckedChanged += gcnew System::EventHandler(this, &FormStartTest::RDBotv2_CheckedChanged);
			// 
			// RDBotv3
			// 
			this->RDBotv3->AutoSize = true;
			this->RDBotv3->Location = System::Drawing::Point(13, 261);
			this->RDBotv3->Name = L"RDBotv3";
			this->RDBotv3->Size = System::Drawing::Size(17, 16);
			this->RDBotv3->TabIndex = 7;
			this->RDBotv3->TabStop = true;
			this->RDBotv3->UseVisualStyleBackColor = true;
			this->RDBotv3->CheckedChanged += gcnew System::EventHandler(this, &FormStartTest::RDBotv3_CheckedChanged);
			// 
			// RDBotv4
			// 
			this->RDBotv4->AutoSize = true;
			this->RDBotv4->Location = System::Drawing::Point(13, 327);
			this->RDBotv4->Name = L"RDBotv4";
			this->RDBotv4->Size = System::Drawing::Size(17, 16);
			this->RDBotv4->TabIndex = 8;
			this->RDBotv4->TabStop = true;
			this->RDBotv4->UseVisualStyleBackColor = true;
			this->RDBotv4->CheckedChanged += gcnew System::EventHandler(this, &FormStartTest::RDBotv4_CheckedChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(284, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 40);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormStartTest::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(3, 378);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 40);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Предыдущий вопрос";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(145, 378);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 40);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Завершить тест";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// FormStartTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(416, 423);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->RDBotv4);
			this->Controls->Add(this->RDBotv3);
			this->Controls->Add(this->RDBotv2);
			this->Controls->Add(this->RDBotv1);
			this->Controls->Add(this->labelforOTV4);
			this->Controls->Add(this->labelforOTV3);
			this->Controls->Add(this->labelforOTV2);
			this->Controls->Add(this->labelforOTV1);
			this->Controls->Add(this->labelForVopr);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"FormStartTest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Прохождение теста";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//
		//Лейбл для вопроса
		//

	private: System::Void labelForVopr_Click(System::Object^ sender, System::EventArgs^ e) {
		
		static int counterForNumberTest = 0;
		this->Text = counterForNumberTest.ToString();
		counterForNumberTest++;

		String^ filePath = "C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!" + counterForNumberTest + ".txt";

		// Создание объекта класса StreamReader для чтения файла
		StreamReader^ reader = gcnew StreamReader(filePath);

		// Считывание и пропуск пяти строк
		for (int i = 1; i < 1; i++) {
			reader->ReadLine();
		}

		// Считывание шестой строки
		String^ sixthLine = reader->ReadLine();

		// Закрытие объекта класса StreamReader
		reader->Close();

		// Запись шестой строки в labelForVopr
		labelForVopr->Text = sixthLine;
		labelForVopr->Refresh();
		
	}

		   //
		   //Лейблы под ответы
		   //1

		   private: System::Void labelforOTV1_Click(System::Object ^ sender, System::EventArgs ^ e) {

			   static int counterForNumberTest = 0;
			   this->Text = counterForNumberTest.ToString();
			   counterForNumberTest++;

			   String^ filePath = "C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!" + counterForNumberTest + ".txt";

			   // Создание объекта класса StreamReader для чтения файла
			   StreamReader^ reader = gcnew StreamReader(filePath);

			   // Считывание и пропуск пяти строк
			   for (int i = 1; i < 2; i++) {
				   reader->ReadLine();
			   }

			   // Считывание шестой строки
			   String^ sixthLine = reader->ReadLine();

			   // Закрытие объекта класса StreamReader
			   reader->Close();

			   // Запись шестой строки в labelForVopr
			   labelforOTV1->Text = sixthLine;
			   labelforOTV1->Refresh();
		   }
				  //2
		   private: System::Void labelforOTV2_Click(System::Object ^ sender, System::EventArgs ^ e) {

			   static int counterForNumberTest = 0;
			   this->Text = counterForNumberTest.ToString();
			   counterForNumberTest++;

			   String^ filePath = "C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!" + counterForNumberTest + ".txt";

			   // Создание объекта класса StreamReader для чтения файла
			   StreamReader^ reader = gcnew StreamReader(filePath);

			   // Считывание и пропуск пяти строк
			   for (int i = 1; i < 3; i++) {
				   reader->ReadLine();
			   }

			   // Считывание шестой строки
			   String^ sixthLine = reader->ReadLine();

			   // Закрытие объекта класса StreamReader
			   reader->Close();

			   // Запись шестой строки в labelForVopr
			   labelforOTV2->Text = sixthLine;
			   labelforOTV2->Refresh();
		   }
				  //3
		   private: System::Void labelforOTV3_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   
			   static int counterForNumberTest = 0;
			   this->Text = counterForNumberTest.ToString();
			   counterForNumberTest++;

			   String^ filePath = "C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!" + counterForNumberTest + ".txt";

			   // Создание объекта класса StreamReader для чтения файла
			   StreamReader^ reader = gcnew StreamReader(filePath);

			   // Считывание и пропуск пяти строк
			   for (int i = 1; i < 4; i++) {
				   reader->ReadLine();
			   }

			   // Считывание шестой строки
			   String^ sixthLine = reader->ReadLine();

			   // Закрытие объекта класса StreamReader
			   reader->Close();

			   // Запись шестой строки в labelForVopr
			   labelforOTV3->Text = sixthLine;
			   labelforOTV3->Refresh();
		   }
				  //4
		   private: System::Void labelforOTV4_Click(System::Object ^ sender, System::EventArgs ^ e) {

			   static int counterForNumberTest = 0;
			   this->Text = counterForNumberTest.ToString();
			   counterForNumberTest++;

			   String^ filePath = "C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!" + counterForNumberTest + ".txt";

			   // Создание объекта класса StreamReader для чтения файла
			   StreamReader^ reader = gcnew StreamReader(filePath);

			   // Считывание и пропуск пяти строк
			   for (int i = 1; i < 5; i++) {
				   reader->ReadLine();
			   }

			   // Считывание шестой строки
			   String^ sixthLine = reader->ReadLine();

			   // Закрытие объекта класса StreamReader
			   reader->Close();

			   // Запись шестой строки в labelForVopr
			   labelforOTV4->Text = sixthLine;
			   for (int i = 0; i < 1; i++)
			   {
				   labelforOTV4->Refresh();
			   }
		   }

		   //
		   //Кнопки выбора ответа
		   //1
	private: System::Void RDBotv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		
		RDBotv1->Checked = false;
	}
		   //2
	private: System::Void RDBotv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
		
		RDBotv2->Checked = false;
	}
		   //3
	private: System::Void RDBotv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
		
		RDBotv3->Checked = false;
	}
		   //4
	private: System::Void RDBotv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
		
		RDBotv4->Checked = false;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//Чистка полей от старых вопрос и ответов
		labelForVopr->Text = "";
		labelforOTV1->Text = "";
		labelforOTV2->Text = "";
		labelforOTV3->Text = "";
		labelforOTV4->Text = "";
		
		//
		//По идеи тут запись следующего вопроса
		//Запись вопроса №2
		//

		// Чтение данных из файла
		
			std::ifstream file("C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!");
			if (file.is_open())
			{
				std::string line;

				// Пропустить нужное количество строк
				for (int i = 0; i < 1; i++)
				{
					std::getline(file, line);
				}

				// Считать вопрос
				std::getline(file, line);
				labelForVopr->Text = gcnew System::String(line.c_str());

				// Считать и вывести ответы
				for (int i = 0; i < 4; i++)
				{
					std::getline(file, line);
					switch (i)
					{
					case 0:
						labelforOTV1->Text = gcnew System::String(line.c_str());
						break;
					case 1:
						labelforOTV2->Text = gcnew System::String(line.c_str());
						break;
					case 2:
						labelforOTV3->Text = gcnew System::String(line.c_str());
						break;
					case 3:
						labelforOTV1->Text = gcnew System::String(line.c_str());
						break;
					}
				}

				file.close();
			}
	}
};
}
