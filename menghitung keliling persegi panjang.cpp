#include <iostream>
using namespace std;
int main()
{
    double panjang,lebar;
	
	//input
	cout<<"Masukkan panjang :  ";cin>>panjang;
	cout<<"Masukkan lebar :  ";cin>>lebar;
	
	//proses
	double keliling;
	keliling=2*(panjang+lebar);
	
	//output
	cout<<"\nKeliling Persegi Panjang = : "<<keliling<<endl;
	return 0;
	}
	
