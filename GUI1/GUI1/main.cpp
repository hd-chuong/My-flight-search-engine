#include "stdafx.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUI1::LoginForm^ loginForm = gcnew GUI1::LoginForm();
	Application::Run(loginForm);
	return 0;
}
