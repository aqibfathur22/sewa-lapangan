#include <iostream>
#include "struct.h"
#include "pelanggan.h"
#include "menu.h"

using namespace std;

void DaftarPelanggan()
{
	char input;

	cout << " Apakah ingin balik ke menu awal ? (Y)\n";
	cout << " ";
	cin >> input;

	if (input == char(89), char(121))
	{
		system("cls");
		Menu();
	}
}