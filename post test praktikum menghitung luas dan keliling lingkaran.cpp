#include <iostream>

using namespace std;

int main(){ 
	double phi = 3.14, JariJari, KelilingLingkaran, LuasLingkaran;
	cout << "Nama	:Yunisa Maulia Astuty"<<endl;
    cout << "NIM	:312210606"<<endl;
    cout << "Kelas	:TI.22.C7" <<endl;
    cout << endl;
	
	cout << "Program Menghitung Keliling dan Luas Lingkaran" <<endl;
	cout << "----------------------------------------------" <<endl;
	cout << "Masukkan Jari-jari	:"; cin >> JariJari;
	
	
	KelilingLingkaran = 2 * phi * JariJari;
	LuasLingkaran = phi* JariJari;
	
	cout << "Keliling Lingkaran	:" << KelilingLingkaran <<endl;
	cout << "Luas Lingkaran		:" << LuasLingkaran <<endl;
	
	return 0;
	} 

