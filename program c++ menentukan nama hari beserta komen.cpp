#include <iostream> //declare compiler input output 

using namespace std;//class std 

int main()//main program tipe integer
{
 cout << "## Program C++ Menentukan Nama Hari ##" << endl; // cetak kata program c++ menentukan nama hari 
 cout << "======================================" << endl; // cetak == sebagai garis bawah kata diatasnya
 cout << endl;// cetak break untuk membuat jarak pada tampilan (turun satu spasi)

 int n; // integer n

 cout << "Input angka hari (1-7): ";// cetak input angka hari (1-7) :
 cin >> n; // memasukan int n 

 if ( n == 1) {// if n == 1 maka bernilai true 
 cout << "Senin";//cetak senin 
 }
 else if ( n == 2) {// else if n == 2 maka bernilai ture, jika lain dari n == 1
 cout << "Selasa";// cetak selasa 
 }
 else if ( n == 3) {// else if n == 3 maka bernilai true, jika lain dari n == 2
 cout << "Rabu";// cetak rabu 
 }
 else if ( n == 4) {// else if n == 4 maka bernilai true, jika lain dari n == 3
 cout << "Kamis";// cetak kamis
 }
 else if ( n == 5) {// else if n == 5 maka bernilai true, jika lain dari n == 4
 cout << "Jumat";// cetak jumat
 }
 else if ( n == 6) {// else if n == 6 maka bernilai true, jika lain dari n == 5
 cout << "Sabtu";// cetak sabtu 
 }
 else if ( n == 7) {// else if n == 7 maka bernilai true, jika lain dari n == 6
 cout << "Minggu";// cetak minggu 
 }
 else { // else jika bukan dari n == 7 maka bernilai false 
 cout << "Pilihan tidak tersedia";// cetak Pilihan tidak tersedia 
 }

 cout << endl; // cetak break untuk membuat jarak pada tampilan (turun satu spasi)

 return 0;// selesai 
} 

