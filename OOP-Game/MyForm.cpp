#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    OOPGame::MyForm form;
    Application::Run(% form);
	
    return 0;
}


