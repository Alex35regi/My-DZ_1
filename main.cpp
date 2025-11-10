#include<clocale>
#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	std::cout << "Александр\n";
	std::cout << 32 << "\n";

	return EXIT_SUCCESS;
}
