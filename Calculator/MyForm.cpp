#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(cli::array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(true);
	Application::EnableVisualStyles();

	Calculator::MyForm form;

	Application::Run(% form);
}