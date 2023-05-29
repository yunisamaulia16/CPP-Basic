
#include <iostream>

using namespace std;

int main()
{
	cout << "===========================" << endl;
	cout << "## POST TEST PRAKTIKUM 5 ##" << endl;
	cout << "===========================" << endl;
	cout << "Nama  : Jidan Restu Kurniawan" << endl;
	cout << "NIM   : 312210614" << endl;
	cout << "Kelas : TI.22.C.7" << endl;
	cout << "===========================" << endl;
	cout << endl;
	
	string nama[6] = {"Muhammad", "Nugraha ", "Bapak   ", "Fahmi   ", "Musa    ", "Ibrahim"};
	
	cout << "| No |   Nama   |" << endl;
	cout << "-----------------" << endl;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "|  " << i + 1 << " | " << nama[i] << " | " << nama[i + 1] << endl;
	}
	
	return 0;
}

