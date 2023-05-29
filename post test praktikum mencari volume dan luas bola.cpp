#include <iostream>

using namespace std;

int main (){
	float phi=3.14, a, Luas, Volume;
	cout << " Nama	: Yunisa Maulia Astuty"<<endl;
	cout << " NIM	: 312210606"<<endl;
	cout << " Kelas	: TI.22.C7"<<endl;
	cout << endl;
	
	cout << "-----------------------------------"<<endl;
	cout << "# Menghitung Volume dan Luas Bola #"<<endl;
	cout << "-----------------------------------"<<endl;
	cout << "Masukan Jari-Jari = "; cin>>a;
	cout << endl;
	
	Volume=4/3*phi*a*a*a;
	Luas=4*phi*a*a;
	
	cout << "Volume nya adalah	= "<<Volume<<endl;
	cout << "Luas nya adalah		= "<<Luas<<endl;
	
	return 0;
	
}
