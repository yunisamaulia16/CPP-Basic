#include <iostream>


using namespace std;
int hitungluas(int p, int l){

	int luas; //variabel lokal
	luas = p*l; //melakukan perhitungan
	return luas;
	
}

main(){
	int pj,lb,;
	int luasUtama;
	string ulang;
	do
	{
		system("cls");
		cout<<"----------------------------------"<<endl;
		cout<<"|                                |"<<endl;
		cout<<"|  MENCARI LUAS PERSEGI PANJANG  |"<<endl;
		cout<<"|                                |"<<endl;
		cout<<"----------------------------------"<<endl;
		cout<<"masukan panjang  : ";cin>>pj;
		cout<<"masukan lebar    : ";cin>>lb;
		cout<<"ulang program (y/n)";cin>>ulang;
	
		luasUtama=hitungluas (pj, lb);
	 
	
	
	 //Menampilkan hasil perhitungan
	 
		cout<<"-----------------------------------"<<endl;
		cout<<"jadi, Luas Persegi Panjang adalah  " << luasUtama <<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"hasil perhitungan luasUtama"<<endl;
	} while (ulang =="y");
	cout<<"program selesai"<<endl;
	
	return (0);
}
