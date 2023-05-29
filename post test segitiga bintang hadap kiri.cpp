#include <iostream>

using namespace std;

int main()
{
	float tinggi_segitiga, i, j, k;
	cout << "Nama	:Yunisa Maulia Astuty" <<endl;
	cout << "NIM	:312210606" <<endl;
	cout << "Kelas	:TI.22.C7" <<endl;
	cout << endl;

	cout << "---------------------------------------" <<endl;
	cout << "# Program Segitiga Bintang Hadap Kiri #" <<endl;
	cout << "---------------------------------------" <<endl;
	cout <<endl;
	
	cout << "Input Tinggi Segitiga : " <<endl;
	cin >> tinggi_segitiga;
	
	for(i=1; i <= tinggi_segitiga; i++){
		for(j=tinggi_segitiga; j >= i; j--){
			cout << " ";
		}
		for(k=1; k <= i; k++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
