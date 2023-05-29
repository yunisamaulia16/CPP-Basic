#include <iostream>

using namespace std;

int main() {
	double A, B, setengah = 0.5, phi = 3.14, jariJari, LuasPersegiPanjang, LuasSetengahLingkaran, LuasArsir;
	cout << "Nama	:Yunisa Maulia Astuty" <<endl;
	cout << "NIM	:312210606" <<endl;
	cout << "Kelas	:TI.22.C7" <<endl;
	cout << endl;
	
	cout << "-------------------------------------------------------" <<endl;
	cout << "Menghitung Luas Persegi Panjang dan Setengah Lingkaran " <<endl;
	cout << "-------------------------------------------------------" <<endl;
	cout << "Masukkan nilai A : "; cin >> A;
	cout << "Masukkan nilai B : "; cin >> B;
	
	jariJari = B / 2;
	LuasPersegiPanjang = A * B;
	LuasSetengahLingkaran = setengah * phi * jariJari * jariJari;
	LuasArsir = LuasPersegiPanjang + LuasSetengahLingkaran;
	cout << "Luas Persegi Panjang    : " << LuasPersegiPanjang << endl;
	cout << "Luas Setengah Lingkaran : " << LuasSetengahLingkaran << endl;
	cout << "Total Luas              : " << LuasArsir << endl;
	
	return 0;
}
