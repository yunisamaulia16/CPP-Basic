#include <iostream>

using namespace std;

int main()
{
	string nama[6] = {"Muhammad", "Nugraha ", "Bapak   ", "Fahmi   ", "Musa    ", "Ibrahim"};
	
	cout << "Nama  : Yunisa Maulia Astuty" << endl;
	cout << "NIM   : 312210606" << endl;
	cout << "Kelas : TI.22.C7" << endl;
	cout << endl;
	
	cout << "-------------------------------" << endl;
	cout << "# Program Tabel Data #" << endl;
	cout << "-------------------------------" << endl;
	
	cout << "| No |   Nama   |" << endl;
	cout << "-----------------" << endl;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "|  " << i + 1 << " | " << nama[i] << " | " << nama[i + 1] << endl;
	}
	
	return 0;
}

