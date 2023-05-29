#include <iostream>

using namespace std;

struct mhs{
	string nama;
	string nim;
	string Ip;
};

int main()
{
	int jumlah, i;
	mhs mahasiswa[5];
	
	mahasiswa[i].nama = "Yunisa";
	mahasiswa[i].nim = "312210606";
	mahasiswa[i].Ip = "80";
	
	cout<< " DATA MAHASISWA "<<endl;
	cout<< " Nama		: "<<mahasiswa[i].nama<<endl;
	cout<< " Nim		: "<<mahasiswa[i].nim<<endl;
	cout<< " Nilai Ip	: "<<mahasiswa[i].Ip<<endl;
	
	cout<<"\n\t\tDaftar Data mahasiswa"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"No\tNama\tNim\t\tNilai Ip\t"<<endl;
	cout<<"==========================================="<<endl;
	for(i=0; i<=jumlah, i++){
		cout<<i<<"\t"<<nama[i]<<"\t"<<nim[i]<<"\t"<<Ip[i]<<""<<endl;
	}
	cout<<"=============================================="<<endl;
	
	return 0;
}
