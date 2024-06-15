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
	using namespace std;
	
	static int counterForNumberTest = 0;
	static int CounterShef = 0;
	static int counterShef = 0;
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
			int value = 1;
			funtionEnterElementForm(value);
			/*polyaForRBT();*/

			
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
	private: System::Windows::Forms::Button^ button2BackVopros;


	private: System::Windows::Forms::Button^ exitButtomX;
	private: System::Windows::Forms::Label^ label1;

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
			this->button2BackVopros = (gcnew System::Windows::Forms::Button());
			this->exitButtomX = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelForVopr
			// 
			this->labelForVopr->BackColor = System::Drawing::Color::Bisque;
			this->labelForVopr->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelForVopr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelForVopr->ForeColor = System::Drawing::Color::Black;
			this->labelForVopr->Location = System::Drawing::Point(13, 35);
			this->labelForVopr->Name = L"labelForVopr";
			this->labelForVopr->Size = System::Drawing::Size(680, 89);
			this->labelForVopr->TabIndex = 0;
			this->labelForVopr->Click += gcnew System::EventHandler(this, &FormStartTest::labelForVopr_Click);
			// 
			// labelforOTV1
			// 
			this->labelforOTV1->BackColor = System::Drawing::Color::MistyRose;
			this->labelforOTV1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelforOTV1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelforOTV1->ForeColor = System::Drawing::Color::Black;
			this->labelforOTV1->Location = System::Drawing::Point(44, 139);
			this->labelforOTV1->Name = L"labelforOTV1";
			this->labelforOTV1->Size = System::Drawing::Size(650, 80);
			this->labelforOTV1->TabIndex = 1;
			this->labelforOTV1->Click += gcnew System::EventHandler(this, &FormStartTest::labelforOTV1_Click);
			// 
			// labelforOTV2
			// 
			this->labelforOTV2->BackColor = System::Drawing::Color::MistyRose;
			this->labelforOTV2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelforOTV2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelforOTV2->ForeColor = System::Drawing::Color::Black;
			this->labelforOTV2->Location = System::Drawing::Point(44, 227);
			this->labelforOTV2->Name = L"labelforOTV2";
			this->labelforOTV2->Size = System::Drawing::Size(650, 80);
			this->labelforOTV2->TabIndex = 2;
			this->labelforOTV2->Click += gcnew System::EventHandler(this, &FormStartTest::labelforOTV2_Click);
			// 
			// labelforOTV3
			// 
			this->labelforOTV3->BackColor = System::Drawing::Color::MistyRose;
			this->labelforOTV3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelforOTV3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelforOTV3->ForeColor = System::Drawing::Color::Black;
			this->labelforOTV3->Location = System::Drawing::Point(44, 315);
			this->labelforOTV3->Name = L"labelforOTV3";
			this->labelforOTV3->Size = System::Drawing::Size(650, 80);
			this->labelforOTV3->TabIndex = 3;
			this->labelforOTV3->Click += gcnew System::EventHandler(this, &FormStartTest::labelforOTV3_Click);
			// 
			// labelforOTV4
			// 
			this->labelforOTV4->BackColor = System::Drawing::Color::MistyRose;
			this->labelforOTV4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelforOTV4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelforOTV4->ForeColor = System::Drawing::Color::Black;
			this->labelforOTV4->Location = System::Drawing::Point(44, 403);
			this->labelforOTV4->Name = L"labelforOTV4";
			this->labelforOTV4->Size = System::Drawing::Size(650, 80);
			this->labelforOTV4->TabIndex = 4;
			this->labelforOTV4->Click += gcnew System::EventHandler(this, &FormStartTest::labelforOTV4_Click);
			// 
			// RDBotv1
			// 
			this->RDBotv1->AutoSize = true;
			this->RDBotv1->Location = System::Drawing::Point(12, 164);
			this->RDBotv1->Name = L"RDBotv1";
			this->RDBotv1->Size = System::Drawing::Size(17, 16);
			this->RDBotv1->TabIndex = 5;
			this->RDBotv1->UseVisualStyleBackColor = true;
			this->RDBotv1->CheckedChanged += gcnew System::EventHandler(this, &FormStartTest::RDBotv1_CheckedChanged);
			// 
			// RDBotv2
			// 
			this->RDBotv2->AutoSize = true;
			this->RDBotv2->Location = System::Drawing::Point(12, 248);
			this->RDBotv2->Name = L"RDBotv2";
			this->RDBotv2->Size = System::Drawing::Size(17, 16);
			this->RDBotv2->TabIndex = 6;
			this->RDBotv2->UseVisualStyleBackColor = true;
			this->RDBotv2->CheckedChanged += gcnew System::EventHandler(this, &FormStartTest::RDBotv2_CheckedChanged);
			// 
			// RDBotv3
			// 
			this->RDBotv3->AutoSize = true;
			this->RDBotv3->Location = System::Drawing::Point(13, 333);
			this->RDBotv3->Name = L"RDBotv3";
			this->RDBotv3->Size = System::Drawing::Size(17, 16);
			this->RDBotv3->TabIndex = 7;
			this->RDBotv3->UseVisualStyleBackColor = true;
			this->RDBotv3->CheckedChanged += gcnew System::EventHandler(this, &FormStartTest::RDBotv3_CheckedChanged);
			// 
			// RDBotv4
			// 
			this->RDBotv4->AutoSize = true;
			this->RDBotv4->Location = System::Drawing::Point(13, 419);
			this->RDBotv4->Name = L"RDBotv4";
			this->RDBotv4->Size = System::Drawing::Size(17, 16);
			this->RDBotv4->TabIndex = 8;
			this->RDBotv4->UseVisualStyleBackColor = true;
			this->RDBotv4->CheckedChanged += gcnew System::EventHandler(this, &FormStartTest::RDBotv4_CheckedChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(450, 499);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 66);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormStartTest::button1_Click);
			// 
			// button2BackVopros
			// 
			this->button2BackVopros->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2BackVopros->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2BackVopros->ForeColor = System::Drawing::Color::Black;
			this->button2BackVopros->Location = System::Drawing::Point(44, 499);
			this->button2BackVopros->Name = L"button2BackVopros";
			this->button2BackVopros->Size = System::Drawing::Size(244, 66);
			this->button2BackVopros->TabIndex = 10;
			this->button2BackVopros->Text = L"Предыдущий вопрос";
			this->button2BackVopros->UseVisualStyleBackColor = true;
			this->button2BackVopros->Click += gcnew System::EventHandler(this, &FormStartTest::button2_Click);
			// 
			// exitButtomX
			// 
			this->exitButtomX->BackColor = System::Drawing::Color::WhiteSmoke;
			this->exitButtomX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitButtomX->ForeColor = System::Drawing::Color::Red;
			this->exitButtomX->Location = System::Drawing::Point(616, 2);
			this->exitButtomX->Name = L"exitButtomX";
			this->exitButtomX->Size = System::Drawing::Size(78, 30);
			this->exitButtomX->TabIndex = 12;
			this->exitButtomX->Text = L"X";
			this->exitButtomX->UseVisualStyleBackColor = false;
			this->exitButtomX->Click += gcnew System::EventHandler(this, &FormStartTest::exitButtomX_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 23);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Прохождение теста";
			// 
			// FormStartTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(710, 573);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exitButtomX);
			this->Controls->Add(this->button2BackVopros);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormStartTest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Прохождение теста";
			this->Load += gcnew System::EventHandler(this, &FormStartTest::FormStartTest_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Тут функция для вывода вопроса и ответов на данный вопрос
		//
		//Функция для заполнения полей вопроса и вариантов ответов
		//
		
		void funtionEnterElementForm(int& value)
		{
			//
			//Код для считывания вопроса в textBox для вопроса из файла
			//
			if (value == 0)
			{
				counterForNumberTest--;
			}
			else
			{
				counterForNumberTest++;
			}

			this->Text = counterForNumberTest.ToString();
			
			
			String^ filePath = "C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!" + counterForNumberTest + ".txt";

			string filename = "C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!1.txt";
			if (FILE* file = fopen(filename.c_str(), "r"))
			{
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
					polyaForRBT();

				}
				catch (System::IO::FileNotFoundException^ ex)
				{
					MessageBox::Show("Тест завершен, вы переноситесь к результатам.", "Итог", MessageBoxButtons::OK, MessageBoxIcon::Error);
					FormResultTestov^ startItog = gcnew FormResultTestov();

					/*StreamWriter^ fileTxt = gcnew StreamWriter("C://Users//Msi//source//repos//projectTest//Result//Result.txt", true);
					fileTxt->WriteLine(CounterShef.ToString());
					fileTxt->Close();*/

					startItog->counterShef = CounterShef;
					startItog->Owner = this;
					startItog->Show();
					this->Hide();
				}
			}
			else
			{
				MessageBox::Show("Файл для теста не найден", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Environment::Exit(0);
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
	public: void polyaForRBT()
	{
		try
		{
			String^ RDB1 = "1";
			String^ filePath = "C://Users//Msi//source//repos//projectTest//otvKtest//test" + counterForNumberTest + ".txt";
			// Создание объекта класса StreamReader для чтения файла
			StreamReader^ readerRDB0 = gcnew StreamReader(filePath);
			// Считывание первой строки и ответа на вопрос
			for (int i = 1; i < 1; i++) {
				readerRDB0->ReadLine();
			}
			// Считывание первой строки
			String^ nullRDBLine = readerRDB0->ReadLine();

			StreamWriter^ fileTxt1 = gcnew StreamWriter("C://Users//Msi//source//repos//projectTest//Result//Result1.txt", true);
				fileTxt1->WriteLine(CounterShef.ToString());
				fileTxt1->Close();

			if (RDB1 == nullRDBLine)
			{
				CounterShef++;
			}
			// Закрытие объекта класса StreamReader
			readerRDB0->Close();

			//
			//
			//

			String^ RBT2 = "2";
			// Создание объекта класса StreamReader для чтения файла
			StreamReader^ readerRDB1 = gcnew StreamReader(filePath);
			// Считывание второй строки и ответа на вопрос 
			for (int i = 1; i < 2; i++) {
				readerRDB1->ReadLine();
			}
			// Считывание первой строки
			String^ oneRDBLine = readerRDB1->ReadLine();

			StreamWriter^ fileTxt2 = gcnew StreamWriter("C://Users//Msi//source//repos//projectTest//Result//Result2.txt", true);
				fileTxt2->WriteLine(CounterShef.ToString());
				fileTxt2->Close();

			if (RBT2 == oneRDBLine)
			{
				CounterShef++;
			}
			// Закрытие объекта класса StreamReader
			readerRDB1->Close();

			//
			//
			//

			String^ RBT3 = "3";
			// Создание объекта класса StreamReader для чтения файла
			StreamReader^ readerRDB2 = gcnew StreamReader(filePath);
			// Считывание третьей строки и ответа на вопрос
			for (int i = 1; i < 3; i++) {
				readerRDB2->ReadLine();
			}
			// Считывание первой строки
			String^ twoRDBLine = readerRDB2->ReadLine();

			StreamWriter^ fileTxt3 = gcnew StreamWriter("C://Users//Msi//source//repos//projectTest//Result//Result3.txt", true);
				fileTxt3->WriteLine(CounterShef.ToString());
				fileTxt3->Close();

			if (RBT3 == twoRDBLine)
			{
				CounterShef++;
			}
			// Закрытие объекта класса StreamReader
			readerRDB2->Close();

			//
			//
			//

			String^ RBT4 = "4";
			// Создание объекта класса StreamReader для чтения файла
			StreamReader^ readerRDB3 = gcnew StreamReader(filePath);
			// Считывание четвертой строки и ответа на вопрос
			for (int i = 1; i < 4; i++) {
				readerRDB3->ReadLine();
			}
			// Считывание первой строки
			String^ threeRDBLine = readerRDB3->ReadLine();

			StreamWriter^ fileTxt4 = gcnew StreamWriter("C://Users//Msi//source//repos//projectTest//Result//Result4.txt", true);
				fileTxt4->WriteLine(CounterShef.ToString());
				fileTxt4->Close();

			if (RBT4 == threeRDBLine)
			{
				CounterShef++;
			}
			// Закрытие объекта класса StreamReader
			readerRDB3->Close();
		}
		catch (const std::exception&)
		{
			
		}
	}

	private: System::Void RDBotv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
		   //2
	private: System::Void RDBotv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //3
	private: System::Void RDBotv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //4
	private: System::Void RDBotv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
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
		int value = 1;
		/*value.ToString();*/
		funtionEnterElementForm(value);
		functoinClearForRDT();
	}
		   
		   //
		   //Предыдущий вопрос
		   //

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (counterForNumberTest >= 2)
		{
			int value = 0;
			funtionEnterElementForm(value);
			functoinClearForRDT();
		}
		else
		{
			MessageBox::Show("Это самый первый вопрос.", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
private: System::Void exitButtomX_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void FormStartTest_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
