#include<iostream>
using namespace std;
int main(){
    int nilai;
	cout<<"Masukkan nilai anda : "; cin >> nilai;
	if(nilai>=85){
	    cout<<"indeks nilai anda adalah "<<"A";
	}else if(nilai >= 70 || nilai < 85){
	    cout<<"indeks nilai anda adalah "<<"B";
	}else if(nilai >= 50 || nilai < 70){
	    cout<<"indeks nilai anda adalah "<<"C";
	}else if(nilai <50){
	    cout<<"indeks nilai anda adalah "<<"E";
	}
}

