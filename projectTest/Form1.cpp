//������ �� ��������
#include "Form1.h"
#include "Form2.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    projectTest::Form1 form; //WinFormsTest - ��� ������ �������
    Application::Run(% form);
}
