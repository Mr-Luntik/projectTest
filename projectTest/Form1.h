#pragma once
#include "Form2.h"
#include "FormStartTest.h"

namespace projectTest {
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ butCreatTest;
	private: System::Windows::Forms::Button^ butStartTest;
	private: System::Windows::Forms::Button^ butSettingTest;
	private: System::Windows::Forms::TextBox^ savePathTextBox;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->butCreatTest = (gcnew System::Windows::Forms::Button());
			this->butStartTest = (gcnew System::Windows::Forms::Button());
			this->butSettingTest = (gcnew System::Windows::Forms::Button());
			this->savePathTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Bisque;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(353, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����������� ������";
			// 
			// butCreatTest
			// 
			this->butCreatTest->BackColor = System::Drawing::Color::SpringGreen;
			this->butCreatTest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butCreatTest->Location = System::Drawing::Point(35, 111);
			this->butCreatTest->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->butCreatTest->Name = L"butCreatTest";
			this->butCreatTest->Size = System::Drawing::Size(345, 90);
			this->butCreatTest->TabIndex = 1;
			this->butCreatTest->Text = L"������� ����";
			this->butCreatTest->UseVisualStyleBackColor = false;
			this->butCreatTest->Click += gcnew System::EventHandler(this, &Form1::butCreatTest_Click);
			// 
			// butStartTest
			// 
			this->butStartTest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->butStartTest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butStartTest->Location = System::Drawing::Point(35, 207);
			this->butStartTest->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->butStartTest->Name = L"butStartTest";
			this->butStartTest->Size = System::Drawing::Size(345, 90);
			this->butStartTest->TabIndex = 2;
			this->butStartTest->Text = L"������ ����";
			this->butStartTest->UseVisualStyleBackColor = false;
			this->butStartTest->Click += gcnew System::EventHandler(this, &Form1::butStartTest_Click);
			
			// 
			// butSettingTest
			// 
			this->butSettingTest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->butSettingTest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butSettingTest->Location = System::Drawing::Point(35, 303);
			this->butSettingTest->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->butSettingTest->Name = L"butSettingTest";
			this->butSettingTest->Size = System::Drawing::Size(345, 90);
			this->butSettingTest->TabIndex = 3;
			this->butSettingTest->Text = L"������������� ����";
			this->butSettingTest->UseVisualStyleBackColor = false;
			// 
			// savePathTextBox
			// 
			this->savePathTextBox->BackColor = System::Drawing::Color::Thistle;
			this->savePathTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->savePathTextBox->Location = System::Drawing::Point(12, 70);
			this->savePathTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->savePathTextBox->Name = L"savePathTextBox";
			this->savePathTextBox->Size = System::Drawing::Size(16, 15);
			this->savePathTextBox->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(416, 423);
			this->Controls->Add(this->savePathTextBox);
			this->Controls->Add(this->butSettingTest);
			this->Controls->Add(this->butStartTest);
			this->Controls->Add(this->butCreatTest);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void butCreatTest_Click(System::Object^ sender, System::EventArgs^ e) {
			Form2^ startForm2 = gcnew Form2();
			startForm2->Owner = this;
			startForm2->Show();
			this->Hide();
	}
	private: System::Void butStartTest_Click(System::Object^ sender, System::EventArgs^ e) {
		FormStartTest^ startForm2 = gcnew FormStartTest();
			startForm2->Owner = this;
			startForm2->Show();
			this->Hide();
	}	   
};
}

