#include <iostream>		//declare compiler input dan output
	using namespace std;	// class std
		int main()	//main program tipe integer
		{
			cout << " ## Program C++ Konversi Desimal ke Biner ## " << endl;	//kurang satu "<" di sebelah cout menjadikannya error (cetak kata program C++..)
			cout << "=============================================" << endl;	//kurang satu "<" sebelum kata endl menjadikannya error (cetak == sebagai garis bawah)
			cout << endl;	//break spasi 1 baris
			
			int a[10], n, i;	//memasukan jenis input
			
			cout << "Input angka desimal: "; // seharusnya cot berubah menjadi cout (cetak kata input angka desimal)
			cin >> n;	//memasukan nilai sebagai variabel nilai n
			
			for(i=0; n>0; i++){	//nilai n = 0, n lebih besar dari 0, ulang nilai i
				a[i] = n%2;  // kurang tanda ";" menjadikannya error (nilai a dikali dengan i = n % 2)
				n = n/2;	// nilai n sama dengan n dibagi 2
			}
			cout << "Angka binernya adalah: "; // kurang satu "<" di sebelah cout menjadikannya error (cetak kata Angka binernya adalah...)
			
			for(i=i-1; i>=0; i--){	//nilai i = i-1, nilai i lebih besar atau sama dengan 0, i tidak diulang)
				cout << a[i];	//nilai a dikali dengan i
			}
			cout << endl;  // kurang satu "<" di sebelah cout menjadikannya error (break spasi 1 baris)
			
			return 0;	// selesai
		} //kurang tanda "}" menjadikannya error
