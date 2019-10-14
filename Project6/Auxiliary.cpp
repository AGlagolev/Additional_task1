#include "Auxiliary.h"

void W_line()
{
	std::cout << std::endl;
	for (int zz = 1; zz <= 120; zz++)
	{
		setlocale(LC_ALL, "C");
		std::cout << char(220);
		setlocale(LC_ALL, "");
	}
	std::cout << std::endl;
}

void End()
{
	system("cls");
	std::cout << "\t\t\t\t";
	for (int zz = 1; zz <= 25; zz++)
	{
		setlocale(LC_ALL, "C");
		std::cout << char(220);
	}
	std::cout << "\n\t\t\t";
	for (int zz = 1; zz <= 8; zz++)
	{
		setlocale(LC_ALL, "C");
		std::cout << char(220);
	}
	std::cout << char(219);
	setlocale(LC_ALL, "");
	std::cout << "  CÏÀÑÈÁÎ ÇÀ ÂÍÈÌÀÍÈÅ  ";
	setlocale(LC_ALL, "C");
	std::cout << char(219);
	for (int zz = 1; zz <= 8; zz++)
	{
		setlocale(LC_ALL, "C");
		std::cout << char(220);
	}
	std::cout << "\n\t\t\t\t";
	std::cout << char(219);
	for (int zz = 1; zz <= 23; zz++)
	{
		setlocale(LC_ALL, "C");
		std::cout << char(220);
	}
	std::cout << char(219);
}

void Blink()
{
	std::cout << std::endl;
	for (int zz = 1; zz <= 10; zz++)
	{

		system("color 0C");
		Sleep(1000);
		system("color 0E");
		Sleep(1000);
		system("color 0A");
		Sleep(1000);
	}
	std::cout << std::endl;
}