#include "Interface.h"

#include <Windows.h>

using namespace Project2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Interface);
	Model md;
	return 0;
}
