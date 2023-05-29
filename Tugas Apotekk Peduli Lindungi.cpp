#include <iostream>

using namespace std;

int main(){
	int pilihan,hargaobat,banyak,hasil=0;
	char pilihanobat,yesNo;
	int x=0;
	int totalSeluruhObat[x];
	
	cout<<"DAFTAR OBAT APOTEK PEDULI LINDUNGI : "<<endl;
	cout<<"1.OBAT BATUK"<<endl;
	cout<<"2.OBAT NYERI OTOT"<<endl;
	cout<<"3.OBAT DEMAM"<<endl;
	cout<<"4.OBAT DIARE"<<endl;
	cout<<"5.OBAT PANAS DALAM"<<endl;
	
	do{
		cout<<"MASUKAN PILIHAN OBAT YANG AKAN DIBELI"<<endl;
		cin>>pilihan;
		
		switch(pilihan){
			case 1:
				cout<<"List Obat Batuk"<<endl;
				cout<<"A. siladex       : Rp.13.000,00"<<endl;
				cout<<"B. Konidin       : Rp.15.000,00"<<endl;
				cout<<"C. Woods         : Rp.20.000,00"<<endl;
				cout<<"D. OBH Combi     : Rp.25.000,00"<<endl;
				cout<<"E. Komix         : Rp.30.000,00"<<endl;
				
				cout<<"MASUKAN PILIHAN OBAT : "<<endl;
				cin>>pilihanobat;
				
				if (pilihanobat == 'A' || pilihanobat =='a' ){
					hargaobat=13000;
				}else if (pilihanobat == 'B' || pilihanobat =='b'){
					hargaobat=15000;
				}else if (pilihanobat == 'C' || pilihanobat == 'c'){
					hargaobat=20000;
				}else if (pilihanobat == 'D' || pilihanobat == 'd'){
					hargaobat==25000;
				}else if (pilihanobat == 'E' || pilihanobat == 'e'){
					hargaobat=30000;
				}else{
					cout<<"Obat Tidak Tersedia"<<endl;
				}
				
				cout<<"Berapa banyak Obat Yang Akan Dibeli"<<endl;
				cin>>banyak;
				
				totalSeluruhObat[x]=hargaobat*banyak;
				cout<<"Apakah Ada Obat Lain Yang Akan Dibeli(Y/N)?"<<endl;
				cin>>yesNo;
				
				break;
				
				case 2:
					cout<<"List Obat Nyeri Otot"<<endl;
					cout<<"A. Panadol Extend              : Rp.15.000,00"<<endl;
					cout<<"B. Oskadon SP                  : Rp.13.000,00"<<endl;
					cout<<"C. Sido Muncul Jamu Pegel Linu : Rp.17.000,00"<<endl;
					cout<<"D. Counterpain                 : Rp.20.000,00"<<endl;
					cout<<"E. Neu Reumachyl               : Rp.22.000,00"<<endl;
					
					cout<<"Masukan Pilihan Obat : ";
					cin>>pilihanobat;
					
					if (pilihanobat == 'A' || pilihanobat == 'a'){
						hargaobat=15000;
					}else if (pilihanobat == 'B' || pilihanobat == 'b'){
						hargaobat=13000;
					}else if (pilihanobat == 'C' || pilihanobat == 'c'){
						hargaobat=17000;
					}else if (pilihanobat == 'D' || pilihanobat == 'd'){
						hargaobat=20000;
					}else if (pilihanobat == 'E' || pilihanobat == 'e'){
						hargaobat=22000;
					}else{
						cout<<"Obat Tidak Tersedia"<<endl;
					}
					
					cout<<"Berapa Banyak Obat Yang akan Dibeli?"<<endl;
					cin>>banyak;
					
					totalSeluruhObat[x]=hargaobat*banyak;
					
					cout<<"Apakah Ada Obat Lain Yang Akan Dibeli? (Y/N)";
					cin>>yesNo;
					
					break;
					
					case 3:
						cout<<"List Obat Demam"<<endl;
						cout<<"A. Panadol                : Rp.17.000,00 "<<endl;
						cout<<"B. Bodrex                 : Rp.18.000,00 "<<endl;
						cout<<"C. Paracetamol pim 500 mg : Rp.15.000,00 "<<endl;
						cout<<"D. Sanmol Paracetamol     : Rp.20.000,00 "<<endl;
						cout<<"E. Dumin                  : Rp.25.000,00 "<<endl;
						
						cout<<"Masukan Pilihan Obat : ";
						cin>>pilihanobat;
						
						if (pilihanobat == 'A' || pilihanobat == 'a'){
							hargaobat=17000;
						}else if (pilihanobat == 'B' || pilihanobat == 'b'){
							hargaobat=18000;
						}else if (pilihanobat == 'C' || pilihanobat == 'c'){
							hargaobat=15000;
						}else if (pilihanobat == 'D' || pilihanobat == 'd'){
							hargaobat=20000;
						}else if (pilihanobat == 'E' || pilihanobat == 'e'){
							hargaobat=25000;
						}else{
							cout<<"Obat Tidak Tersedia "<<endl;
						}
						
						cout<<"Berapa Banyak Obat Yang Akan Dibeli?";
						cin>>banyak;
						
						totalSeluruhObat[x]=hargaobat*banyak;
						
						cout<<"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)";
						cin>>yesNo;
						
						break;
						case 4:
							cout<<"List Obat Diare"<<endl;
							cout<<"A. Neo Entrostop         : Rp.10.000,00"<<endl;
							cout<<"B. Diapet                : Rp.12.000,00"<<endl;
							cout<<"C. Oralit                : Rp.14.000,00"<<endl;
							cout<<"D. Imodium Tab           : Rp.16.000,00"<<endl;
							cout<<"E. Norit Tube            : Rp.18.000,00"<<endl;
							
							cout<<"Masukan Pilihan Obat : ";
							cin>>pilihanobat;
							
							if (pilihanobat == 'A' || pilihanobat == 'a'){
								hargaobat=10000;
							}else if (pilihanobat == 'B' || pilihanobat == 'b'){
								hargaobat=12000;
							}else if (pilihanobat == 'C' || pilihanobat == 'c'){
								hargaobat=14000;
							}else if (pilihanobat == 'D' || pilihanobat == 'd'){
								hargaobat=16000;
							}else if (pilihanobat == 'E' || pilihanobat == 'e'){
								hargaobat=18000;
							}else{
								cout<<"Obat Tidak Tersedia"<<endl;
							}
							
							cout<<"Berapa Banyak Obat Yang Akan Dibeli?";
							cin>>banyak;
							
							cout<<"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N);";
							cin>>yesNo;
							
							break;
							
							case 5:
								cout<<"List Obat Panas Dalam"<<endl;
								cout<<"A. Larutan Cap Badak          : Rp.10.000,00"<<endl;
								cout<<"B. Adem Sari                  : Rp.15.000,00"<<endl;
								cout<<"C. Alang Sari                 : Rp.20.000,00"<<endl;
								cout<<"D. Kuldon                     : Rp.25.000,00"<<endl;
								cout<<"E. Jascool                    : Rp.30.000,00"<<endl;
								
								cout<<"Masukan Pilihan Obat : ";
								cin>>pilihanobat;
								
								if (pilihanobat == 'A' || pilihanobat =='a'){
									hargaobat=10000;
								}else if(pilihanobat == 'B' || pilihanobat == 'b'){
									hargaobat=15000;
								}else if (pilihanobat == 'C' || pilihanobat == 'c'){
									hargaobat=20000;
								}else if (pilihanobat == 'D' || pilihanobat == 'd'){
									hargaobat=25000;
								}else if (pilihanobat == 'E' || pilihanobat == 'e'){
									hargaobat=30000;
								}else{
									cout<<"Obat Tidak Tersedia"<<endl;
								}
								
								cout<<"Berapa Banyak Obat Yang Akan Dibeli?";
								cin>>banyak;
								
								totalSeluruhObat[x]=hargaobat*banyak;
								
								cout<<"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?";
								cin>>yesNo;
								
								break;														
		}
		x++;
	} while(yesNo == 'Y' || yesNo == 'y');
	
	cout<<"Pembayaran"<<endl;
	for(int i=0;i<x;i++){
		hasil=hasil+totalSeluruhObat[i];
	}
	cout<<"Total Pesanan : "<<hasil<<endl;
	cout<<"Total Bayar : "<<hasil<<endl;
	
	
	
}
