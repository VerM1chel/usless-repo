#include "MyForm.h"
#include <Windows.h>


using namespace Kursach;

[STAThread] //������ ������� ����� ��� ����� ��� ����� ������������� ���������� (STA), ����� ������ OLE ����� ��������
//��� ����� ����� ������ � �������� (������� ��������� ��� �������������� � comboBox)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
}