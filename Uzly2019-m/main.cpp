#include <iostream>
#include <Windows.h>
#include "uzly.h"
#include "ravn_uzly.h"
using namespace std;

void print(uzly& uz)
{
	int n = uz.get_n();
	for (int i = 0; i<n; i++)
	{
		cout << uz[i] << " ";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ravn_uzly ru(-1, 2, 7);
	print (ru);
	system("pause");
}