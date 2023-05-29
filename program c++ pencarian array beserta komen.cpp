#include <iostream> //declare compiler input output 

using namespace std; //class std 

int main () //main program tipe integer
{
	cout << "## PROGRAM C++ PENCARIAN ARRAY ##" << endl; // cetak kata	program C++ pencarian array
	cout << "==================================" << endl;  // cetak == sebagai garis bawah kata di atasnya
	cout << endl; // cetak break untuk membuat jarak pada tampilan (turun satu spasi)
	
	int input [100], arr_count, i, num; // input nilai [100], integer arr_count, i dan num.
	
	cout << "input jumlah element array: "; // input jumlah element array 
	cout << endl; // cetak break untuk membuat jarak pada tampilan (turun satu spasi)
	// simpan setiap angka yang diinput ke dalam array
	for(i=0; i < arr_count; i++){ 
		cin >> input[i];// for i = membaca i dengan variabel 0
						// i <= memanggil integer arr_count 
						// i++ melakukan pengulangan sejumlah variabe yang ditentukan 
						// cin cetak inpiut integer i		
	}
	cout << endl; // cetak break untuk membuat jarak pada tampilan (turun satu spasi)
	
	cout << "input angka yang akan dicari: "; // cetak input angka yang akan dicari.
	cin >> num; // masuka nilai num 
	
	// proses pencarian array
	for(i=0; i < arr_count; i++){
		if(input[i] == num){
			cout << "angka ditempatkan pada index ke-" << i;
			break;
						//for i = membaca integer i dengan variabel 0
						//i <= memanggil integer arr_count 
						//i++ melakukan pengulangan sejumlah variabe yang ditentukan 
						//if input variabe i == num bernilai true 
		}
	}
	if(i == arr_count){ //if i == arr_count jika perulangan tidak ada yang cocok variabel i akan sama dengan jumlah element array
		cout << "angka tidak ditemukan"; // cetak angka tidak ditemukan 
	}
	
	cout << endl; //break untuk untuk membuat jarak pada tampilan ( turun satu spasi)
	return 0; // SELESAI
}
