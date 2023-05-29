#include <iostream> //declare compiler input dan output

using namespace std;//class std

int main(){ //main program tipe integer
	int pilihan,hargaobat,banyak,hasil=0;//memasukan jenis input
	char pilihanobat,yesNo; //menyimpan karakter variabel
	int x=0; //memasukan jenis input
	int totalSeluruhObat[x]; //memasukan jenis input
	
	cout<<"DAFTAR OBAT APOTEK PEDULI LINDUNGI :"<<endl;//cetak kaliumat "DAFATR OBAT APOTEK PEDULI LINDUNGI"
	cout<<"1.OBAT BATUK "<<endl; //cetak kalimat OBAT BATUK
	cout<<"2.OBAT NYERI OTOT "<<endl; //cetak kalimat OBAT NYERI OTOT
	cout<<"3.OBAT DEMAM"<<endl; //cetak kalimat OBAT DEMAM
	cout<<"4.OBAT DIARE"<<endl; //cetak kalimat OBAT DIARE
	cout<<"5.OBAT PANAS DALAM"<<endl; //cetak kalimat OBATPANAS
	cout<<"6.OBAT MAGH"<<endl;//cetak kalimat OBAT MAGH
	
	do{//melakukan perulangan atau looping
		cout<<"MASUKAN PILLIHAN OBAT YANG AKAN DIBELI : ";//cetak kalimat "MASUKAN PILIHAN OBAT YANG AKAN DIBELI"
		cin>>pilihan;//masukan nilai sebagai variabel pilihan
		
		switch(pilihan){ // Mengecek milai pilihan
			case 1: // jika pilihan bernilai 1
				cout<<"List Obat Batuk"<<endl;// cetak kalimat "list Obat Batuk
				cout<<"A. Siladex        : Rp.13.000,00"<<endl;//cetak kalimat "A. Siladex        : Rp.13.000,00" 
				cout<<"B. Konidin        : Rp.15.000,00"<<endl;//cetak kalimat "B. Konidin        : Rp.15.000,00"
				cout<<"C. Woods          : Rp.20.000,00"<<endl;//cetak kalimat "C. Woods          : Rp.20.000,00"
				cout<<"D. OBH Combi      : Rp.25.000,00"<<endl;//cetak kalimat "D. OBH Combi      : Rp.25.000,00"
				cout<<"E. Komix          : Rp.30.000,00"<<endl;//cetak kalimat "E. Komix          : Rp.30.000,00"
				cout<<"F. Viks           : Rp.35.000,00"<<endl;//cetak kalimat  F. Viks           : Rp.35.000,00"
				
				cout<<"Masukan Pilihan Obat : "; //cetak kalimat "Masukan Pilihan Obat : "
				cin>>pilihanobat;//masukan pilihan obat
				
	if (pilihanobat == 'A'  || pilihanobat =='a'){ //jika pilihan obat adalah a atau A 
		hargaobat=13000; //maka harga obat 13.0000
	}else if (pilihanobat == 'B'   || pilihanobat == 'b'){//jika pilihan obat adalah b atau B 
		hargaobat=15000;//maka harga obat 15000
	}else if (pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihan obat adalah c atau C
		hargaobat=20000;//maka harga obat 20000
	}else if (pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat adalah d atau D 
        hargaobat=25000;//maka harga obat 25000
	}else if (pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat adalah e atau E 
		hargaobat=30000;//maka harga obat adalah 30000
	}else if (pilihanobat == 'F' || pilihanobat == 'f'){//jika pilihan obat adalah f atau F
		hargaobat=35000;//maka harga obat adalah 35000
	}else{//jika pilihan obat tidak tersedia 
		cout<<"OBAT TIDAK TERSEDIA"<<endl;//cetak kalimat "OBAT TIDAK TERSEDIA"
	}
	
	cout<<"Berapa Banyak Obat Yang Akan Dibeli? ";//"cetak kalimat "Berapa Banyak Obat Yang Akan Dibeli? "
	cin>>banyak;//masukan banyak obat
	
	totalSeluruhObat[x]=hargaobat*banyak;//total seluruh obat
	
	cout<<"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?";//"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?"
	cin>>yesNo;//masukan pilihan y/n
	
	break;//keluar dari pengkondisian 1
	
	case 2://jika pilihan yang di inginkan nomor 2
		cout<<"List obat Nyeri Otot"<<endl;//cetak List obat Nyeri Otot"
		cout<<"A. Panadol Extend              : Rp.15.000,00"<<endl;//cetak kalimat "A. Panadol Extend              : Rp.15.000,00"
		cout<<"B. Oskadon SP                  : Rp.13.000,00"<<endl;//cetak kalimat  "B. Oskadon SP                  : Rp.13.000,00"
		cout<<"C. Sido Muncul Jamu Pegel Linu : Rp.17.000,00"<<endl;//cetak kalimat "C. Sido Muncul Jamu Pegel Linu : Rp.17.000,00"
		cout<<"D. Counterpain                 : Rp.20.000,00"<<endl;//cetak kalimat "D. Counterpain                 : Rp.20.000,00"
		cout<<"E. Neu Reumachyl               : Rp.22.000,00"<<endl;//cetak kalimat "E. Neu Reumachyl               : Rp.22.000,00"
		cout<<"F. Salonpas                    : Rp.25.000,00"<<endl;//cetak kalimat "F. Salonpas                    : Rp.25.000,00"
		
      cout<<"Masukan Pilihan Obat : ";//cetak kalimat "Masukan Pilihan Obat : "
      cin>>pilihanobat;//masukan nilai sebagai variabel pilihan obat
      
      if(pilihanobat == 'A'  || pilihanobat == 'a'){//jika pilihan obat adalah a atau A
      	hargaobat=15000;//maka harga obat adalah 15000
	  }else if(pilihanobat =='B' || pilihanobat == 'b'){//jika pilihan obat adalah b atau B
	  	hargaobat=13000;//maka harga obat 13000
	  }else if(pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihan obat adalah c atau C 
	  	hargaobat=17000;//maka harga obat adalah 17000
	  }else if(pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat adalah d atau D
	  	hargaobat=20000;//maka harga obat adalah 20000
	  }else if(pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat adalah e atau E
	  	hargaobat=22000;//maka harga obat adalah 22000
	  }else if (pilihanobat == 'F'  || pilihanobat == 'f'){//jika pilihan obat adalah f atau F
	  	hargaobat=25000;//maka harga obat adalah 25000
	  }else{//jika pilihan obat tidak tersedia 
	  	cout<<"Obat Tidak Tersedia"<<endl;//cetak kalimat "Obat Tidak Tersedia"
	  }
	  
	  cout<<"Berapa Banyak Obat Yang akan Dibeli? ";//cetak kalimat "Berapa Banyak Obat Yang akan Dibeli? "
	  cin>>banyak;//masukan nilai variabel sebagai variabel pilihan obat
	  
	  totalSeluruhObat[x]=hargaobat*banyak;//total seluruh obat 
	  
	  cout<<"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N?)";//cetak kalimat "Apakah Ada Obat Lain Yang Akan Dibeli (Y/N?)"
	  cin>>yesNo;//masukan pilihan y/n
	  
	  break;//keluar dari pengkondisian 2
	  
	  case 3:
	  	cout<<"List Obat Demam"<<endl;//cetak kalimat "List Obat Demam"
	  	cout<<"A. Panadol                  : Rp.17.000,00"<<endl;//cetak kalimat "A. Panadol                  : Rp.17.000,00"
	  	cout<<"B. Bodrex                   : Rp.18.000,00"<<endl;//cetak kalimat "B. Bodrex                   : Rp.18.000,00"
	  	cout<<"C. Paracetamol pim 500 mg   : Rp.15.000,00"<<endl;//cetak kalimat "C. Paracetamol pim 500 mg   : Rp.15.000,00"
	  	cout<<"D. Sanmol Paracetamol       : Rp.20.000,00"<<endl;//cetak kalimat "D. Sanmol Paracetamol       : Rp.20.000,00"
	  	cout<<"E. Dumin                    : Rp.25.000,00"<<endl;//cetak kalimat "E. Dumin                    : Rp.25.000,00"
	  	cout<<"F. Hansaplast Cooling Fever : Rp.30.000,00"<<endl;//cetak kalimat "F. Hansaplast Cooling Fever : Rp.30.000,00"
	  	
	cout<<"Masukan Pilihan Obat : ";//cetak "Masukan Pilihan Obat"
	cin>>pilihanobat;//masukan pilihan obat

if(pilihanobat == 'A' || pilihanobat == 'a'){//jika pilihan obat a atau A 
	hargaobat=17000;//maka harga obat adalah 17000
}else if(pilihanobat == 'B' || pilihanobat == 'b'){//jika pilihan obat b atau B
	hargaobat=18000;//maka harga obat adalah 18000
}else if(pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihan obat c atau C 
	hargaobat=15000;//maka harga obat adalah 15000
}else if(pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat d atau D
	hargaobat=20000;//maka harga obat adalah 20000
}else if(pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat e atau E 
	hargaobat=25000;//maka harga obat adalah 25000
}else if(pilihanobat == 'F' || pilihanobat == 'f'){//jika harga obat f atau F
	hargaobat=30000;//maka harga obat 30000
}else{//jika pilihan obat tidak tersedia
	cout<<"Obat Tidak Tersedia"<<endl;//cetak kalimat "Obat Tidak Tersedia"
}

cout<<"Berapa Banyak Obat Yang Akna Dibeli? ";//cetak kalimat "Berapa Banyak Obat Yang Akna Dibeli? " 
cin>>banyak;//masukan jumlah obat yang di inginkan

totalSeluruhObat[x]=hargaobat*banyak;//total seluruh harga obat

cout<<"Apakah ada Obat Lain Yang Akan Dibeli (Y/N?);";//cetak kalimat "Apakah ada Obat Lain Yang Akan Dibeli (Y/N?);"
cin>>yesNo;//masukan pilihan y/n

break;//keluar dari pengkondisian 3

case 4://pengkondisiian 4
		cout<<"List Obat Diare"<<endl;//cetak kalimat "List Obat Diare"
	  	cout<<"A. Neo Entrostop :Rp.10.000,00"<<endl;//cetak kalimat A. "Neo Entrostop :Rp.10.000,00"
	  	cout<<"B. Diapet        :Rp.12.000,00"<<endl;//ctak kalimat "B. Diapet        :Rp.12.000,00"
	  	cout<<"C. Oralit        :Rp.14.000,00"<<endl;//cetak kalimat "C. Oralit        :Rp.14.000,00"
	  	cout<<"D. Imodium Tab   :Rp.16.000,00"<<endl;//cetak kalimat "D. Imodium Tab   :Rp.16.000,00"
	  	cout<<"E. Norit Tube    :Rp.18.000,00"<<endl;//cetak kalimat "E. Norit Tube    :Rp.18.000,00"
	  	cout<<"F. Nao Kaolana   :Rp.20.000,00"<<endl;//cetak kalimat "F. Nao Kaolana   :Rp.20.000,00"
	  	
	  	
	cout<<"Masukan Pilihan Obat : ";//cetak kalimat "Masukan Pilihan Obat : "
	cin>>pilihanobat;;//masukan pilihan obat

if(pilihanobat == 'A' || pilihanobat == 'a'){//jika pilihan obat adalah a atau A
	hargaobat=10000;//maka harga obat adalah 10000
}else if(pilihanobat == 'B' || pilihanobat == 'b'){//jika pilihan obat dalah b atau B
	hargaobat=12000;//maka harga obat adalah 12000
}else if(pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihan obat adalah c atau C
	hargaobat=14000;//maka harga obat adalah 14000
}else if(pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat adalah d atau D 
	hargaobat=16000;//maka harga obat adalah 16000
}else if (pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat adalah e atau E
	hargaobat=18000;//maka harga obat adalah 18000
}else if (pilihanobat == 'F'  || pilihanobat == 'f'){//jika pilihan obat adalah f atau F
	hargaobat=20000;//maka harga obat adalah 20000
}else{//jika pilihan obat tidak tersedia 
	cout<<"Obat Tidak Tersedia"<<endl;//cetak kalimat "Obat Tidak Tersedia"
}

cout<<"Obat Tidak Tersedia";//cetak kalimat "Obat Tidak Tersedia"
cin>>banyak;//masukan nilai variabel sebagai variabel pilihan obat

totalSeluruhObat[x]=hargaobat*banyak;//total seluruh obat

cout<<"Apakah ada Obat Lain Yang Akan Dibeli (Y/N?);";//cetak kalimat "Apakah ada Obat Lain Yang Akan Dibeli (Y/N?);"
cin>>yesNo;//masukan pilihan y/n

break;//keluar dari pengkondisian 4
case 5://pengkondisian 5
	cout<<"List Obat Panas Dalam"<<endl;//cetak kalimat "List Obat Panas Dalam"
	  	cout<<"A. Lartan Cap Badak    : Rp.10.000,00 "<<endl;//cetak kalimat "A. Lartan Cap Badak    : Rp.10.000,00 "
	  	cout<<"B. Adem Sari           : Rp.15.000,00"<<endl;//cetak kalimat "B. Adem Sari           : Rp.15.000,00"
	  	cout<<"C. Alang Sari          : Rp.20.000,00"<<endl;//cetak kalimat "C. Alang Sari          : Rp.20.000,00"<
	  	cout<<"D. Kuldon              : Rp.25.000,00"<<endl;//cetak kalimat "D. Kuldon              : Rp.25.000,00"
	  	cout<<"E. Jascool             : Rp.30.000,00"<<endl;//cetak kalimat "E. Jascool             : Rp.30.000,00"
	  	cout<<"F. Madu TJ Panas Dalam : Rp.35.000,00"<<endl;//cetak kalimat "F. Madu TJ Panas Dalam : Rp.35.000,00"
	  	
	cout<<"Masukan Pilihan Obat : ";//cetak kalimat "Masukan Pilihan Obat : "
	cin>>pilihanobat;//masukan pilihan obat

if(pilihanobat == 'A' || pilihanobat == 'a'){//jika pilihan obat adalah a atau A
	hargaobat=10000;//maka harga obat adalah 10000
}else if(pilihanobat == 'B' || pilihanobat == 'b'){//jika pilihan obat adalah b atau B
	hargaobat=15000;//maka harga obat adalah 15000
}else if(pilihanobat == 'C' || pilihanobat == 'c'){//jika harga obat adalah c atau C
	hargaobat=20000;//maka harga obat adalah 20000
}else if (pilihanobat == 'D' || pilihanobat == 'd'){//jika harga obat adalah d atau D
	hargaobat=25000;//maka harga obat adalah 25000
}else if (pilihanobat == 'E' || pilihanobat == 'e'){//jika harga obat adalah e atau E 
	hargaobat=30000;//maka harga obat adalah 30000
}else if (pilihanobat == 'F' || pilihanobat == 'f'){//jika harga obat adalah f atau F
	hargaobat=35000;//maka harga obat adalah 35000
}else{//jika pilihan obat tidak tersedia
	cout<<"Obat Tidak Tersedia"<<endl;//cetak kalimat "Obat Tidak Tersedia"
}

cout<<"Berapa Banyak Obat Yang Akna Dibeli? ";//"Berapa Banyak Obat Yang Akan Dibeli? "
cin>>banyak;//masukan nilai variabel sebagai variabel pilihan obat

totalSeluruhObat[x]=hargaobat*banyak;//total obat

cout<<"Apakah ada Obat Lain Yang Akan Dibeli (Y/N?);";//cetak kalimat "Apakah ada Obat Lain Yang Akan Dibeli (Y/N?);"
cin>>yesNo;//masukan pilihan y/n

break;//keluar dari pengkondisian 5
case 6://pengkondisian 6
		cout<<"List Obat Magh"<<endl;//cetak "List Obat Magh"
	  	cout<<"A. Promag                  : Rp.20.000,00"<<endl;//cetak kalimat "A. Promag		: Rp.20.000,00"
	  	cout<<"B. Polysilane              : Rp.30.000,00"<<endl;//cetak kalimat "B. Polysilane	: Rp.30.000,00"
	  	cout<<"C. Mylanta                 : Rp.40.000,00"<<endl;//cetak kalimat "C. Mylanta		: Rp.40.000,00"
	  	cout<<"D. Gaviscon Extra Strength : Rp.50.000,00"<<endl;//cetak kalimat "D. Gavinson Extra Strength	: Rp.50.000,00"
	  	cout<<"E. Polycrol                : Rp.60.000,00"<<endl;//cetak kalimat "E. Polycrol	: Rp.60.000,00"
	  	cout<<"F. Lambucid                : Rp.70.000,00"<<endl;//cetak kalimat "F. Lambucid	: Rp.70.000,00"
	  	
	cout<<"Masukan Pilihan Obat : ";//cetak "Masukan Pilihan Obat"
	cin>>pilihanobat; //masukan pilihan obat

if(pilihanobat == 'A' || pilihanobat == 'a'){//jika pilihan obat adalah a atau A 
	hargaobat=20000;//maka harga obat adalah 20000
}else if(pilihanobat == 'B' || pilihanobat == 'b'){//jika pilihan obat adalah b atau B
	hargaobat=30000;//maka harga obat adalah 30000
}else if(pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihanobat adalah c atau C
	hargaobat=40000;//harga obat adalah 40000
}else if(pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat adalah d atau D
	hargaobat=50000;//maka harga obat
}else if (pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat adalah e atau E
	hargaobat=60000;//maka harga obat adalah 600000
}else if(pilihanobat == 'F' || pilihanobat == 'f'){//jika pilihan obat adalah f atau F 
	hargaobat=70000;//maka harga obat adalah 70000
}else{//jika pilihan obat tidak tersedia
	cout<<"Obat Tidak Tersedia"<<endl; // cetak " Obat Tidak Tersedia"
}

cout<<"Berapa Banyak Obat Yang Akan Dibeli? "; // cetak "Berapa Banyak Obat yang Akan Dibeli"
cin>>banyak;//masukan nilai variabel sebagai variabel pilihan obat

totalSeluruhObat[x]=hargaobat*banyak;//total obat

cout<<"Apakah ada Obat Lain Yang Akan Dibeli (Y/N?):"; //cetak "Apakah ada Obat Lain Yang Akan Dibeli"
cin>>yesNo;//masukan pilihan y/n

break; //keluar dari pengkondisian 6
	}
	x++;//ulangi variabel x
	} while(yesNo == 'Y' || yesNo == 'y');//
	
	cout<<"Pembayaran : "<<endl;//cetak kalimat "Pembayaran"
	
	for(int i=0;i<x;i++){//untuk nilai integer i=0, nilai i<x ulangi integer variabel i
		hasil=hasil+totalSeluruhObat[i];//
	}
	cout<<"Total Pesanan : "<<hasil<<endl;//cetak Total Pesanan
	
	cout<<"Total Bayar : "<<hasil<<endl;//cetak Hasil Bayar
		
		}
	

