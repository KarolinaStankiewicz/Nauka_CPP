#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "Badaczu, ile tu jest grzybow?";
	int ile;          //liczba grzybów
	cin >> ile;

	int i;             //liczba obiegów pętli
	for (i = 1; i <= ile; i = i + 1)
	{
		cout << "Grzyb nr " << i << " to Borowik !\n";

	}
	cout << "Skoro wszyscy juz zwiedzili, to wracamy.";
	_getch();
}