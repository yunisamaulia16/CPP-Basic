#include <iostream>

using namespace std;

int main ()
{ 
   int pilihan;
   char ulang;
   do
   {
   	cout << "## Daftar Menu Kopi Ilkom ##" << endl;
   	cout << "============================" << endl;
   	cout << "1. Espresse" << endl;
   	cout << "2. Cappuccino" << endl;
   	cout << "3. Moccacino" << endl;
   	cout << endl;
	   
	cout << "Pilihan anda: ";
	cin >> pilihan;
	
	switch(pilihan){
	case 1:
		cout << "Anda memilih nomor Espresse" << endl;
		break;
	case 2:
		cout << "Anda memilih Cappucino" << endl;
		break;
	case 3:
		cout << "Anda memilih Moccacino" << endl;
		break;
	default:
		cout << "Menu tidak tersedia" << endl;
	}
	cout << endl;
	
	cout << "Ingin memilih menu yang lain (y/t)? ";
	cin >> ulang;
	cout << endl;	
   }
   while (ulang!= 't');
   
   cout << "terimakasih.....";
   
   cout << endl;
   return main ();
}
