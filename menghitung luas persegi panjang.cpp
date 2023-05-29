#include <iostream>

using namespace std;

int hitungluas (int p, int l){
    int luas;   //variable Lokal
	luas = p*l;  //melakukan perhitungan
	return luas;
	
}

main (){
    int pj,lb;
	int luasUtama;
	
	cout<<"================================================"<<endl;
	cout<<"|                                              |"<<endl;
	cout<<"|         MENCARI LUAS PERSEGI PANJANG         |"<<endl;
	cout<<"|                                              |"<<endl;
	cout<<"================================================"<<endl;
	cout<<"Masukkan Panjang : ";cin>>pj;
	cout<<"Masukkan Lebar   : ";cin>>lb;
	
	luasUtama=hitungluas(pj, lb);
	
	//Menampilkan Hasil Perhitungan
	cout<<"================================================"<<endl;
	cout<<"| Jadi, Luas Persegi Panjang Adalah : "<<luasUtama<<endl;
	cout<<"================================================"<<endl;
	
	return 0;
	}
	
