#include "MyForm.h"
#include "MyForm_size.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(true);
	Application::EnableVisualStyles();

	Calculator::MyForm form;

	Application::Run(% form);
}