//MyForm.cpp
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Realisation::MyForm monFormulaire;//ATTENTION : ici Realisation est le nom du projet. Vous devez l’adapter au nom de votre projet
	Application::Run(% monFormulaire);
}