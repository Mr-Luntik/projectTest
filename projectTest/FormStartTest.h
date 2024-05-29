#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "Form2.h"
#include "FormResultTestov.h"



namespace projectTest {

	using namespace System;
	using namespace msclr::interop;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	static int counterForNumberTest = 0;
	static int CounterShef = 0;
	static int counterNumberRBT = 0;
	
	/// <summary>
	/// Сводка для FormStartTest
	/// </summary>

	
	public ref class FormStartTest : public System::Windows::Forms::Form
	{
	public:
		FormStartTest(void)
		{
			InitializeComponent();
			funtionEnterElementForm();
			

			
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
			this->button2->Click += gcnew System::EventHandler(this, &FormStartTest::button2_Click);
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
			this->ClientSize = System::Drawing::Size(419, 423);
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

#pragma region Тут функция для вывода вопроса и ответов на данный вопрос
		//
		//Функция для заполнения полей вопроса и вариантов ответов
		//
		
		void funtionEnterElementForm(void)
		{
			//
			//Код для считывания вопроса в textBox для вопроса из файла
			//
			this->Text = counterForNumberTest.ToString();
			counterForNumberTest++;
			String^ filePath = "C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!" + counterForNumberTest + ".txt";

			
			// Создание объекта класса StreamReader для чтения файла
			try
			{
				StreamReader^ reader0 = gcnew StreamReader(filePath);
				// Считывание первой строки и вопроса который в нем содержится
				for (int i = 1; i < 1; i++) {
					reader0->ReadLine();
				}

				// Считывание шестой строки
				String^ nullLine = reader0->ReadLine();

				// Закрытие объекта класса StreamReader
				reader0->Close();

				// Запись шестой строки в labelForVopr
				labelForVopr->Text = nullLine;
				labelForVopr->Invalidate();
				//
				//Считывание первого вопроса в поле для вопроса 1
				//

				// Создание объекта класса StreamReader для чтения файла
				StreamReader^ reader1 = gcnew StreamReader(filePath);

				// Считывание и пропуск пяти строк
				for (int i = 1; i < 2; i++) {
					reader1->ReadLine();
				}

				// Считывание шестой строки
				String^ oneLine = reader1->ReadLine();

				// Закрытие объекта класса StreamReader
				reader1->Close();

				// Запись шестой строки в labelForVopr
				labelforOTV1->Text = oneLine;
				labelforOTV1->Invalidate();

				//
				// Считывание второго вопроса в поле для вопроса 2
				//

				// Создание объекта класса StreamReader для чтения файла
				StreamReader^ reader2 = gcnew StreamReader(filePath);

				// Считывание и пропуск пяти строк
				for (int i = 1; i < 3; i++) {
					reader2->ReadLine();
				}

				// Считывание шестой строки
				String^ twoLine = reader2->ReadLine();

				// Закрытие объекта класса StreamReader
				reader2->Close();

				// Запись шестой строки в labelForVopr
				labelforOTV2->Text = twoLine;
				labelforOTV2->Invalidate();

				//
				// Считывание третьего вопроса в поле для вопроса 3
				//

				// Создание объекта класса StreamReader для чтения файла
				StreamReader^ reader3 = gcnew StreamReader(filePath);

				// Считывание и пропуск пяти строк
				for (int i = 1; i < 4; i++) {
					reader3->ReadLine();
				}

				// Считывание шестой строки
				String^ threeLine = reader3->ReadLine();

				// Закрытие объекта класса StreamReader
				reader3->Close();

				// Запись шестой строки в labelForVopr
				labelforOTV3->Text = threeLine;
				labelforOTV3->Invalidate();

				//
				// Считывание четвертого вопроса в поле для вопроса 4
				//
				 // Создание объекта класса StreamReader для чтения файла
				StreamReader^ reader4 = gcnew StreamReader(filePath);

				// Считывание и пропуск пяти строк
				for (int i = 1; i < 5; i++) {
					reader4->ReadLine();
				}

				// Считывание шестой строки
				String^ fourLine = reader4->ReadLine();

				// Закрытие объекта класса StreamReader
				reader4->Close();

				// Запись шестой строки в labelForVopr
				labelforOTV4->Text = fourLine;
				labelforOTV4->Invalidate();
			}
			catch (System::IO::FileNotFoundException^ ex)
			{
				MessageBox::Show("Тест завершен, вы переноситесь к результатам.", "Итог", MessageBoxButtons::OK, MessageBoxIcon::Error);
				FormResultTestov^ startItog = gcnew FormResultTestov();
				startItog->Owner = this;
				startItog->Show();
				this->Hide();
			}
			
		}
#pragma endregion

		//
		//Лейбл для вопроса
		//
	private: System::Void labelForVopr_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
		//
		//Лейблы под ответы
		//1

	private: System::Void labelforOTV1_Click(System::Object ^ sender, System::EventArgs ^ e) {
		  
	}
		//2
	private: System::Void labelforOTV2_Click(System::Object ^ sender, System::EventArgs ^ e) {
		  
	}
		//3
	private: System::Void labelforOTV3_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   	  
	}
		//4
	private: System::Void labelforOTV4_Click(System::Object ^ sender, System::EventArgs ^ e) {
		  
	}

		   void functoinClearForRDT()
		   {
			   RDBotv1->Checked = false;
			   RDBotv2->Checked = false;
			   RDBotv3->Checked = false;
			   RDBotv4->Checked = false;
		   }
		   //
		   //Кнопки выбора ответа
		   //1
		   
#pragma region Блок Кнопок выбора ответа RDB
		
	private: System::Void RDBotv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//
		//RBT = "1" - это число данного ответа.
		//
		String^ RDB = "1";
		String^ filePath = "C://Users//Msi//source//repos//projectTest//otvKtest//test" + counterForNumberTest + ".txt";

		// Создание объекта класса StreamReader для чтения файла
		StreamReader^ readerRDB0 = gcnew StreamReader(filePath);

		// Считывание первой строки и вопроса который в нем содержится
		for (int i = 1; i < 1; i++) {
			readerRDB0->ReadLine();
		}

		// Считывание первой строки
		String^ nullRDBLine = readerRDB0->ReadLine();
		if (RDB == nullRDBLine)
		{
			CounterShef++;
		}

		// Закрытие объекта класса StreamReader
		readerRDB0->Close();
		
	}
	
		   //2
	private: System::Void RDBotv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
		String^ RBT = "2";

		String^ filePath = "C://Users//Msi//source//repos//projectTest//otvKtest//test" + counterForNumberTest + ".txt";

		// Создание объекта класса StreamReader для чтения файла
		StreamReader^ readerRDB1 = gcnew StreamReader(filePath);

		// Считывание первой строки и вопроса который в нем содержится
		for (int i = 1; i < 2; i++) {
			readerRDB1->ReadLine();
		}

		// Считывание первой строки
		String^ oneRDBLine = readerRDB1->ReadLine();
		if (RBT == oneRDBLine)
		{
			CounterShef++;
		}

		// Закрытие объекта класса StreamReader
		readerRDB1->Close();
		
	}
		   //3
	private: System::Void RDBotv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ RBT = "3";

		String^ filePath = "C://Users//Msi//source//repos//projectTest//otvKtest//test" + counterForNumberTest + ".txt";

		// Создание объекта класса StreamReader для чтения файла
		StreamReader^ readerRDB2 = gcnew StreamReader(filePath);

		// Считывание первой строки и вопроса который в нем содержится
		for (int i = 1; i < 3; i++) {
			readerRDB2->ReadLine();
		}

		// Считывание первой строки
		String^ twoRDBLine = readerRDB2->ReadLine();
		if (RBT == twoRDBLine)
		{
			CounterShef++;
		}

		// Закрытие объекта класса StreamReader
		readerRDB2->Close();
		
	}
		   //4
	private: System::Void RDBotv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ RBT = "4";

		String^ filePath = "C://Users//Msi//source//repos//projectTest//otvKtest//test" + counterForNumberTest + ".txt";

		// Создание объекта класса StreamReader для чтения файла
		StreamReader^ readerRDB0 = gcnew StreamReader(filePath);

		// Считывание первой строки и вопроса который в нем содержится
		for (int i = 1; i < 4; i++) {
			readerRDB0->ReadLine();
		}

		// Считывание первой строки
		String^ nullRDBLine = readerRDB0->ReadLine();
		if (RBT == nullRDBLine)
		{
			CounterShef++;
		}

		// Закрытие объекта класса StreamReader
		readerRDB0->Close();
		
	}
#pragma endregion

		   //
		   //Это кнопка для перехода к следующему вопросу
		   //
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//Чистка полей от старых вопрос и ответов

		labelForVopr->Text = "";
		labelforOTV1->Text = "";
		labelforOTV2->Text = "";
		labelforOTV3->Text = "";
		labelforOTV4->Text = "";

		funtionEnterElementForm();
		functoinClearForRDT();
	}
		   
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		/*funtionEnterElementForm();
		counterForNumberTest--;*/
	}
};
}
