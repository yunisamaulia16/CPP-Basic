#include <iostream>

using namespace std;


int main() { 
	string nama, nim, alamat;
	
	cout << "Program menampilkan Identitas" <<endl;
	cout << "=============================" <<endl;
	cout << "Nama	:Yunisa Maulia Astuty" <<endl;
	cout << "Nim	:312210606"<<endl;
	cout << "Kelas	:TI.22.C7" <<endl;
	cout <<endl;
	
	cout << "Data Praktikan" <<endl;
	cout << "==============" <<endl;
	cout <<endl;
	
	cout << "Nama	: "; getline(cin,nama);
	cout << "NIM	: "; getline(cin,nim);
	cout << "Alamat	: "; getline(cin,alamat);
	cout << endl;
	
	return 0;
}

