#pragma once
//#include "Form1.h"
//������� �� ����� ��������
#include <fstream>
#include <iostream>
#include <string>

namespace projectTest {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static int counter = 2;
	static int RBT = 0;
	static int counterForNumberTestForm2 = 0;
	static bool proverkaNaVikluhenieRBT = false;
	/// <summary>
	/// ������ ��� Form2
	/// </summary>
	
	
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	public:
		String^ path;

	private: System::Windows::Forms::TextBox^ poleVoprosa;
	public:

	private: System::Windows::Forms::TextBox^ otvBox1;
	private: System::Windows::Forms::TextBox^ otvBox2;
	private: System::Windows::Forms::TextBox^ otvBox3;
	private: System::Windows::Forms::TextBox^ otvBox4;
	private: System::Windows::Forms::RadioButton^ RDBotvBox1;
	private: System::Windows::Forms::RadioButton^ RDBotvBox2;
	private: System::Windows::Forms::RadioButton^ RDBotvBox3;
	private: System::Windows::Forms::RadioButton^ RDBotvBox4;
	private: System::Windows::Forms::Button^ nextTestBTM;
	private: System::Windows::Forms::Button^ finishTestBTM;
	private: System::Windows::Forms::Button^ backTestBTM;
	private: System::Windows::Forms::Label^ savePathTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1NumberV;


	private: System::Windows::Forms::Label^ lableSavePath;


	public:
	public:
	
		
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->poleVoprosa = (gcnew System::Windows::Forms::TextBox());
			this->otvBox1 = (gcnew System::Windows::Forms::TextBox());
			this->otvBox2 = (gcnew System::Windows::Forms::TextBox());
			this->otvBox3 = (gcnew System::Windows::Forms::TextBox());
			this->otvBox4 = (gcnew System::Windows::Forms::TextBox());
			this->RDBotvBox1 = (gcnew System::Windows::Forms::RadioButton());
			this->RDBotvBox2 = (gcnew System::Windows::Forms::RadioButton());
			this->RDBotvBox3 = (gcnew System::Windows::Forms::RadioButton());
			this->RDBotvBox4 = (gcnew System::Windows::Forms::RadioButton());
			this->nextTestBTM = (gcnew System::Windows::Forms::Button());
			this->finishTestBTM = (gcnew System::Windows::Forms::Button());
			this->backTestBTM = (gcnew System::Windows::Forms::Button());
			this->lableSavePath = (gcnew System::Windows::Forms::Label());
			this->savePathTextBox2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1NumberV = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// poleVoprosa
			// 
			this->poleVoprosa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->poleVoprosa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->poleVoprosa->ForeColor = System::Drawing::Color::Black;
			this->poleVoprosa->Location = System::Drawing::Point(17, 38);
			this->poleVoprosa->Margin = System::Windows::Forms::Padding(4);
			this->poleVoprosa->Multiline = true;
			this->poleVoprosa->Name = L"poleVoprosa";
			this->poleVoprosa->Size = System::Drawing::Size(680, 89);
			this->poleVoprosa->TabIndex = 0;
			this->poleVoprosa->TextChanged += gcnew System::EventHandler(this, &Form2::poleVoprosa_TextChanged);
			// 
			// otvBox1
			// 
			this->otvBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->otvBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->otvBox1->ForeColor = System::Drawing::Color::Black;
			this->otvBox1->Location = System::Drawing::Point(44, 139);
			this->otvBox1->Margin = System::Windows::Forms::Padding(4);
			this->otvBox1->Multiline = true;
			this->otvBox1->Name = L"otvBox1";
			this->otvBox1->Size = System::Drawing::Size(650, 80);
			this->otvBox1->TabIndex = 1;
			this->otvBox1->TextChanged += gcnew System::EventHandler(this, &Form2::otvBox1_TextChanged);
			// 
			// otvBox2
			// 
			this->otvBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->otvBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->otvBox2->ForeColor = System::Drawing::Color::Black;
			this->otvBox2->Location = System::Drawing::Point(44, 227);
			this->otvBox2->Margin = System::Windows::Forms::Padding(4);
			this->otvBox2->Multiline = true;
			this->otvBox2->Name = L"otvBox2";
			this->otvBox2->Size = System::Drawing::Size(650, 80);
			this->otvBox2->TabIndex = 2;
			this->otvBox2->TextChanged += gcnew System::EventHandler(this, &Form2::otvBox2_TextChanged);
			// 
			// otvBox3
			// 
			this->otvBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->otvBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->otvBox3->ForeColor = System::Drawing::Color::Black;
			this->otvBox3->Location = System::Drawing::Point(44, 315);
			this->otvBox3->Margin = System::Windows::Forms::Padding(4);
			this->otvBox3->Multiline = true;
			this->otvBox3->Name = L"otvBox3";
			this->otvBox3->Size = System::Drawing::Size(650, 80);
			this->otvBox3->TabIndex = 3;
			this->otvBox3->TextChanged += gcnew System::EventHandler(this, &Form2::otvBox3_TextChanged);
			// 
			// otvBox4
			// 
			this->otvBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->otvBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->otvBox4->ForeColor = System::Drawing::Color::Black;
			this->otvBox4->Location = System::Drawing::Point(44, 403);
			this->otvBox4->Margin = System::Windows::Forms::Padding(4);
			this->otvBox4->Multiline = true;
			this->otvBox4->Name = L"otvBox4";
			this->otvBox4->Size = System::Drawing::Size(650, 80);
			this->otvBox4->TabIndex = 4;
			this->otvBox4->TextChanged += gcnew System::EventHandler(this, &Form2::otvBox4_TextChanged);
			// 
			// RDBotvBox1
			// 
			this->RDBotvBox1->AutoSize = true;
			this->RDBotvBox1->Location = System::Drawing::Point(17, 173);
			this->RDBotvBox1->Margin = System::Windows::Forms::Padding(4);
			this->RDBotvBox1->Name = L"RDBotvBox1";
			this->RDBotvBox1->Size = System::Drawing::Size(17, 16);
			this->RDBotvBox1->TabIndex = 5;
			this->RDBotvBox1->TabStop = true;
			this->RDBotvBox1->UseVisualStyleBackColor = true;
			this->RDBotvBox1->CheckedChanged += gcnew System::EventHandler(this, &Form2::RDBotvBox1_CheckedChanged);
			// 
			// RDBotvBox2
			// 
			this->RDBotvBox2->AutoSize = true;
			this->RDBotvBox2->Location = System::Drawing::Point(17, 265);
			this->RDBotvBox2->Margin = System::Windows::Forms::Padding(4);
			this->RDBotvBox2->Name = L"RDBotvBox2";
			this->RDBotvBox2->Size = System::Drawing::Size(17, 16);
			this->RDBotvBox2->TabIndex = 6;
			this->RDBotvBox2->TabStop = true;
			this->RDBotvBox2->UseVisualStyleBackColor = true;
			this->RDBotvBox2->CheckedChanged += gcnew System::EventHandler(this, &Form2::RDBotvBox2_CheckedChanged);
			// 
			// RDBotvBox3
			// 
			this->RDBotvBox3->AutoSize = true;
			this->RDBotvBox3->Location = System::Drawing::Point(17, 350);
			this->RDBotvBox3->Margin = System::Windows::Forms::Padding(4);
			this->RDBotvBox3->Name = L"RDBotvBox3";
			this->RDBotvBox3->Size = System::Drawing::Size(17, 16);
			this->RDBotvBox3->TabIndex = 7;
			this->RDBotvBox3->TabStop = true;
			this->RDBotvBox3->UseVisualStyleBackColor = true;
			this->RDBotvBox3->CheckedChanged += gcnew System::EventHandler(this, &Form2::RDBotvBox3_CheckedChanged);
			// 
			// RDBotvBox4
			// 
			this->RDBotvBox4->AutoSize = true;
			this->RDBotvBox4->Location = System::Drawing::Point(17, 435);
			this->RDBotvBox4->Margin = System::Windows::Forms::Padding(4);
			this->RDBotvBox4->Name = L"RDBotvBox4";
			this->RDBotvBox4->Size = System::Drawing::Size(17, 16);
			this->RDBotvBox4->TabIndex = 8;
			this->RDBotvBox4->TabStop = true;
			this->RDBotvBox4->UseVisualStyleBackColor = true;
			this->RDBotvBox4->CheckedChanged += gcnew System::EventHandler(this, &Form2::RDBotvBox4_CheckedChanged);
			// 
			// nextTestBTM
			// 
			this->nextTestBTM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->nextTestBTM->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nextTestBTM->Location = System::Drawing::Point(517, 506);
			this->nextTestBTM->Margin = System::Windows::Forms::Padding(4);
			this->nextTestBTM->Name = L"nextTestBTM";
			this->nextTestBTM->Size = System::Drawing::Size(180, 55);
			this->nextTestBTM->TabIndex = 9;
			this->nextTestBTM->Text = L"����� ->";
			this->nextTestBTM->UseVisualStyleBackColor = false;
			this->nextTestBTM->Click += gcnew System::EventHandler(this, &Form2::nextTestBTM_Click);
			// 
			// finishTestBTM
			// 
			this->finishTestBTM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->finishTestBTM->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->finishTestBTM->Location = System::Drawing::Point(219, 506);
			this->finishTestBTM->Margin = System::Windows::Forms::Padding(4);
			this->finishTestBTM->Name = L"finishTestBTM";
			this->finishTestBTM->Size = System::Drawing::Size(274, 55);
			this->finishTestBTM->TabIndex = 10;
			this->finishTestBTM->Text = L"���������";
			this->finishTestBTM->UseVisualStyleBackColor = false;
			this->finishTestBTM->Click += gcnew System::EventHandler(this, &Form2::finishTestBTM_Click);
			// 
			// backTestBTM
			// 
			this->backTestBTM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->backTestBTM->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->backTestBTM->Location = System::Drawing::Point(13, 506);
			this->backTestBTM->Margin = System::Windows::Forms::Padding(4);
			this->backTestBTM->Name = L"backTestBTM";
			this->backTestBTM->Size = System::Drawing::Size(180, 55);
			this->backTestBTM->TabIndex = 11;
			this->backTestBTM->Text = L"<- �����";
			this->backTestBTM->UseVisualStyleBackColor = false;
			this->backTestBTM->Click += gcnew System::EventHandler(this, &Form2::backTestBTM_Click);
			// 
			// lableSavePath
			// 
			this->lableSavePath->Location = System::Drawing::Point(12, 382);
			this->lableSavePath->Name = L"lableSavePath";
			this->lableSavePath->Size = System::Drawing::Size(5, 5);
			this->lableSavePath->TabIndex = 12;
			this->lableSavePath->Text = L"label1";
			// 
			// savePathTextBox2
			// 
			this->savePathTextBox2->Location = System::Drawing::Point(15, 382);
			this->savePathTextBox2->Name = L"savePathTextBox2";
			this->savePathTextBox2->Size = System::Drawing::Size(2, 2);
			this->savePathTextBox2->TabIndex = 13;
			this->savePathTextBox2->Text = L"label1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(619, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 30);
			this->button1->TabIndex = 14;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// textBox1NumberV
			// 
			this->textBox1NumberV->BackColor = System::Drawing::Color::Thistle;
			this->textBox1NumberV->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1NumberV->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1NumberV->Location = System::Drawing::Point(18, 9);
			this->textBox1NumberV->Multiline = true;
			this->textBox1NumberV->Name = L"textBox1NumberV";
			this->textBox1NumberV->Size = System::Drawing::Size(209, 27);
			this->textBox1NumberV->TabIndex = 15;
			this->textBox1NumberV->Text = L"������ �1";
			this->textBox1NumberV->TextChanged += gcnew System::EventHandler(this, &Form2::textBox1NumberV_TextChanged);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(710, 567);
			this->Controls->Add(this->textBox1NumberV);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->savePathTextBox2);
			this->Controls->Add(this->lableSavePath);
			this->Controls->Add(this->backTestBTM);
			this->Controls->Add(this->finishTestBTM);
			this->Controls->Add(this->nextTestBTM);
			this->Controls->Add(this->RDBotvBox4);
			this->Controls->Add(this->RDBotvBox3);
			this->Controls->Add(this->RDBotvBox2);
			this->Controls->Add(this->RDBotvBox1);
			this->Controls->Add(this->otvBox4);
			this->Controls->Add(this->otvBox3);
			this->Controls->Add(this->otvBox2);
			this->Controls->Add(this->otvBox1);
			this->Controls->Add(this->poleVoprosa);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������ � 1";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



public: System::Void nextTestBTM_Click(System::Object^ sender, System::EventArgs^ e) {

	//
	//����������� if ��� �������� �� ��, ��� �� ��� ������ ������� ������.
	//
	if (RDBotvBox1->Checked || RDBotvBox2->Checked || RDBotvBox3->Checked || RDBotvBox4->Checked)
	{
		//������� ��� �������� ����� ������

		this->Text = counterForNumberTestForm2.ToString();
		counterForNumberTestForm2++;

		StreamWriter^ fileTxt = gcnew StreamWriter("C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!" + counterForNumberTestForm2 + ".txt", true);
		fileTxt->WriteLine(poleVoprosa->Text + "\n" + otvBox1->Text + "\n" + otvBox2->Text + "\n" + otvBox3->Text + "\n" + otvBox4->Text + "\n");
		fileTxt->Close();
		MessageBox::Show(this, "������ ��������", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);

		//������ ����� �� ������ ������ ��� �������� �����
		poleVoprosa->Clear();
		otvBox1->Clear();
		otvBox2->Clear();
		otvBox3->Clear();
		otvBox4->Clear();

		//
		//������� ������� ������
		//

		textBox1NumberV->Text = "������ �" + counter.ToString();
		counter++;

		//
		//���� ����� ������
		//

		fileTxt->Close();
		RBT.ToString();
		RBT++;
		String^ fileName = "C://Users//Msi//source//repos//projectTest//otvKtest//test" + RBT + ".txt";
		StreamWriter^ sw = File::AppendText(fileName);
		if (RDBotvBox1->Checked)
		{
			sw->WriteLine("1" + "\n" + "0" + "\n" + "0" + "\n" + "0" + "\n");
			sw->Close();
			RDBotvBox1->Checked = false;
			proverkaNaVikluhenieRBT = true;
		}

		if (RDBotvBox2->Checked)
		{
			sw->WriteLine("0" + "\n" + "2" + "\n" + "0" + "\n" + "0" + "\n");
			sw->Close();
			RDBotvBox2->Checked = false;
			proverkaNaVikluhenieRBT = true;
		}

		if (RDBotvBox3->Checked)
		{
			sw->WriteLine("0" + "\n" + "0" + "\n" + "3" + "\n" + "0" + "\n");
			sw->Close();
			RDBotvBox3->Checked = false;
			proverkaNaVikluhenieRBT = true;
		}

		if (RDBotvBox4->Checked)
		{
			sw->WriteLine("0" + "\n" + "0" + "\n" + "0" + "\n" + "4" + "\n");
			sw->Close();
			RDBotvBox4->Checked = false;
			proverkaNaVikluhenieRBT = true;
		}
	}
	else
	{
		MessageBox::Show(this, "� ��� �� ������ ���������� ������ ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	}

private: System::Void poleVoprosa_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otvBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otvBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otvBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otvBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


	   //
	   //���� ����� ������
	   //1
private: System::Void RDBotvBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
	   //2
private: System::Void RDBotvBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
	   //3
private: System::Void RDBotvBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
	   //4
private: System::Void RDBotvBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
}
	   
	   //
	   //������ ���������� �����
	   //
public: System::Void finishTestBTM_Click(System::Object^ sender, System::EventArgs^ e) {

	//
	//����������� if ��� �������� �� ��, ��� �� ��� ������ ������� ������.
	//
	if (RDBotvBox1->Checked || RDBotvBox2->Checked || RDBotvBox3->Checked || RDBotvBox4->Checked)
	{
		RBT++;
		counterForNumberTestForm2++;
		//���������� �������� �������� � �������� �����
		StreamWriter^ fileTxt = gcnew StreamWriter("C://Users//Msi//source//repos//projectTest//VoprosiKtest//!!TEST!!" + counterForNumberTestForm2 + ".txt", true);
		fileTxt->WriteLine(poleVoprosa->Text + "\n" + otvBox1->Text + "\n" + otvBox2->Text + "\n" + otvBox3->Text + "\n" + otvBox4->Text + "\n");
		fileTxt->Close();
		
		MessageBox::Show(this, "��� ������� ���������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);


		poleVoprosa->Clear();
		otvBox1->Clear();
		otvBox2->Clear();
		otvBox3->Clear();
		otvBox4->Clear();

		this->Close();
		//
		//���� ����� ������
		//
		fileTxt->Close();
		String^ fileName = "C://Users//Msi//source//repos//projectTest//otvKtest//test" + RBT + ".txt";
		StreamWriter^ sw = File::AppendText(fileName);
		if (RDBotvBox1->Checked)
		{
			sw->WriteLine("1" + "\n" + "0" + "\n" + "0" + "\n" + "0" + "\n");
			sw->Close();
			RDBotvBox1->Checked = false;
			proverkaNaVikluhenieRBT = true;
		}

		if (RDBotvBox2->Checked)
		{
			sw->WriteLine("0" + "\n" + "2" + "\n" + "0" + "\n" + "0" + "\n");
			sw->Close();
			RDBotvBox2->Checked = false;
			proverkaNaVikluhenieRBT = true;
		}

		if (RDBotvBox3->Checked)
		{
			sw->WriteLine("0" + "\n" + "0" + "\n" + "3" + "\n" + "0" + "\n");
			sw->Close();
			RDBotvBox3->Checked = false;
			proverkaNaVikluhenieRBT = true;
		}

		if (RDBotvBox4->Checked)
		{
			sw->WriteLine("0" + "\n" + "0" + "\n" + "0" + "\n" + "4" + "\n");
			sw->Close();
			RDBotvBox4->Checked = false;
			proverkaNaVikluhenieRBT = true;
		}
		sw->Close();
		Environment::Exit(0);
	}
	else
	{
		MessageBox::Show(this, "��� ��������� �������� �����, ����� ������� ���������� �����", "������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
}
private: System::Void backTestBTM_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1NumberV_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
};
}
