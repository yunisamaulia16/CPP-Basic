#include <iostream>

using namespace std;

int main(){
 int pilihan,totalPaket,banyak,hasil=0;
 char pilihanPaket,yesNo;
 int diskon = 5;
 int x=0;
 int totalSeluruhPesanan[x];
 
 cout<<"List Menu & Paket : "<<endl;
 cout<<"1. Ayam Goreng"<<endl;
 cout<<"2. Nasi Goreng"<<endl;
 cout<<"3. Masakan Ikan"<<endl;
 
 do{
  cout<<"Masukan Menu Yang Di Pilih : ";
  cin>>pilihan;
  
  switch(pilihan){
   case 1:
   	cout<<"List Paket Ayam Goreng"<<endl;
   	cout<<"A. Ayam Goreng Sambal Bawang : Rp.13.000,00"<<endl;
   	cout<<"B. Ayam Goreng Kremes        : Rp.15.000,00"<<endl;
   	cout<<"C. Ayam Goreng Ekstra        : Rp.20.000,00"<<endl;
   	
   	cout<<"Masukan Pilihan Paket : ";
   	cin>>pilihanPaket;
   	
   	if(pilihanPaket == 'A' || pilihanPaket == 'a'){
	 totalPaket=13000;
	} else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
	 totalPaket=15000;
	} else if(pilihanPaket == 'C' || pilihanPaket == 'C'){
	 totalPaket=20000;
	} else {
	 cout<<"Paket Tidak Tersedia"<<endl;
	}
	
	cout<<"Berapa Banyak Pesanan? ";
	cin>>banyak;
	
	totalSeluruhPesanan[x]=totalPaket*banyak;
	
	cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
	cin>>yesNo;
	
	break;
	
	case 2:
	 cout<<"List Paket Nasi Goreng"<<endl;
	 cout<<"A. Nasi Goreng Spesial : Rp.15.000,00"<<endl;
	 cout<<"B. Nasi Goreng Bakso   : Rp.13.000,00"<<endl;
	 cout<<"C. Nasi Goreng Jumbo   : Rp.17.000,00"<<endl;
	 
	 cout<<"Masukan Pilihan Paket : ";
	 cin>>pilihanPaket;
	 
	 if(pilihanPaket == 'A' || pilihanPaket == 'a'){
	 totalPaket=15000;
	} else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
	 totalPaket=13000;
	} else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
	 totalPaket=17000;
	} else { 
	 cout<<"Paket Tidak Tersedia"<<endl;
	}
	
	cout<<"Berapa Banyak Pesanan? ";
	cin>>banyak;
	
	totalSeluruhPesanan[x]=totalPaket*banyak;
	
	cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
	cin>>yesNo;
	
	break;
	
	case 3:
	 cout<<"List Paket Masakan Ikan"<<endl;
	 cout<<"A. Ikan Bakar Madu Pedas : Rp.17.000,00"<<endl;
	 cout<<"B. Ikan Bakar Spesial    : Rp.18.000,00"<<endl;
	 cout<<"C. Ikan Bakar Pedas      : Rp.15.000,00"<<endl;
	 
	 cout<<"Masukan Pilihan Paket : ";
	 cin>>pilihanPaket;;
	 
	 if(pilihanPaket == 'A' || pilihanPaket == 'a'){
	 totalPaket=17000;
	} else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
	 totalPaket=18000;
	} else if(pilihanPaket == 'C' || pilihanPaket == 'C'){
	 totalPaket=15000;
	} else { 
	 cout<<"Paket Tidak Tersedia"<<endl;
	} 
	
	cout<<"Berapa Banyak Pesanan? ";
	cin>>banyak;
	
	totalSeluruhPesanan[x]=totalPaket*banyak;
	
	cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
	cin>>yesNo;
	
	break;
	
	}
	x++;
  } while(yesNo == 'Y' || yesNo == 'y');
  
  cout<<"Pembayaran : "<<endl;
  
  for(int i=0;i<x;i++){
		hasil=hasil+totalSeluruhPesanan[i];
  }
  
  cout<<"Total Pesanan : "<<hasil<<endl;
  cout<<"Diskon 10% : "<<hasil*diskon/100<<endl;
  cout<<"Total Bayar : "<<hasil - (hasil*diskon/100)<<endl;
}
 
