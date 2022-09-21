#include <iostream>
#include <windows.h>
#include <conio.h>
#include <dos.h>
using namespace std;

int main()
{
	char h = '\3';

	
	Sleep(500);
	Beep(523, 500);
	cout << endl << endl << "\t\t\t\t  i i i i i i i i" << endl;
	Sleep(500);
	Beep(523, 500);
	cout << "\t\t\t\t  i i i i i i i i" << endl;
	Sleep(500);
	Beep(523, 500);
	cout << "\t\t\t\t  i i i i i i i i" << endl;
	Sleep(500);
	Beep(523, 500);
	cout << "\t\t\t\t__i_i_i_i_i_i_i_i__";
	Sleep(500);
	Beep(523, 500);
	cout << endl << "\t\t\t       |" << h << "\t\t  " << h << "|";
	Sleep(500);
	Beep(523, 500);
	cout << endl << "\t\t\t     __| " << h << "  6 JUNE 2020  " << h << " |__";
	Sleep(500);
	Beep(523, 500);
	cout << endl << "\t\t\t    | " << h << "      " << h << "       " << h << "      " << h << " |";
	Sleep(500);
	Beep(523, 500);
	cout << endl << "\t\t\t  __|" << h << "     HAPPY     " << h << "       " << h << "|__";
	Sleep(500);
	Beep(523, 500);
	cout << endl << "\t\t\t | " << h << "       " << h << "     BIRTHDAY      " << h << " |";
	Sleep(500);
	Beep(523, 500);
	cout << endl << "\t\t\t |" << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "|";
	Sleep(500);
	Beep(523, 500);
	cout << endl << "\t\t\t | " << h << "    " << h << "  Virkant Saini  " << h << "    " << h << " |";
	Sleep(500);
	Beep(523, 500);
	cout << endl << "\t\t\t |";
	for (int i = 0; i < 31; i++) {
		cout << "_";
	}
	cout << "|" << endl<<endl<<endl;

}