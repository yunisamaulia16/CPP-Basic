#include <iostream>

using namespace std;

int main()
{
cout << "## Program C++ Menentukan Nama Hari ##" << endl;
cout << "========================================" << endl;
cout << endl;

int n;

cout << "Input angka hari (1-7): ";
cin >> n;

if ( n == 1) {
cout << "Senin";
}
else if ( n == 2) {
cout << "Selasa";
}
else if ( n == 3) {
cout << "Rabu";
}
else if ( n == 4) {
cout << "Kamis";

}
else if ( n == 5) {
cout << "Jumat";
}
else if ( n == 6) {
cout << "Sabtu";
}
else if ( n == 7) {
cout << "Minggu";
}
else {
cout << "Pilihan tidak tersedia";
}

cout << endl;

return main ();
}
