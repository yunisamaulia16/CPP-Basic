#include <iostream>

using namespace std;

int main (){
	float phi=3.14, jariJari, Luas, Volume;
	cout << " Muhamad Rafly"<<endl;
	cout << " 312210599"<<endl;
	
	cout << "-----------------------------------"<<endl;
	cout << "# Menghitung Volume dan Luas Bola #"<<endl;
	cout << "-----------------------------------"<<endl;
	cout << "Masukan Jari-Jari = "; cin>>jariJari;
	cout << endl;
	
	Volume=4/3*phi*jariJari*jariJari*jariJari;
	Luas=4*phi*jariJari*jariJari;
	
	cout << "Volume nya adalah	= "<<Volume<<endl;
	cout << "Luas nya adalah	= "<<Luas<<endl;
	
	return 0;
	
}
