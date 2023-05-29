#include <iostream>//declare compiler input output

using namespace std;//class std

int main(){//main program type interger
	int pilihan,hargaobat,banyak,hasil=0;//masukan jenis input variabel tipe data interger
	char pilihanobat,yesNo;//menyimpan karakter variabel berupa tipe data character
	int diskon = 10; //memasukan jenis input variabel tipe data interger
	int x=0;//memasukan jenis input variabel berupa tipe data interger
	int totalSeluruhObat[x];//memasukan jenis input variabel berupa tipe data interger
	
	cout<<"DAFTAR OBAT APOTEK PEDULI LINDUNGI : "<<endl;//cetak kalimat DAFTAR OBAT APOTEK PEDULI LINDUNGI :
	cout<<"1.OBAT BATUK"<<endl;//cetak kalimat 1.OBAT BATUK
	cout<<"2.OBAT NYERI OTOT"<<endl;//cetak kalimat 2.OBAT NYERI OTOT
	cout<<"3.OBAT DEMAM"<<endl;//cetak kalimat 3.OBAT DEMAM
	cout<<"4.OBAT DIARE"<<endl;//cetak kalimat 4.OBAT DIARE
	cout<<"5.OBAT PANAS DALAM"<<endl;//cetak kalimat 5.OBAT PANAS DALAM
	
	do{//melakukan perulangan atau looping
		cout<<"MASUKAN PILIHAN OBAT YANG AKAN DIBELI :"<<endl;//cetak kalimat "MASUKAN PILIHAN OBAT YANG AKAN DIBELI :"
		cin>>pilihan;//masukan nilai sebagai variabel pilihan
		
		switch(pilihan){// percabangan kode program dimana kita memilih isi sebuah variabel dengan beberapa nilai
			case 1://jika pilihan bernilai 1
				cout<<"List Obat Batuk"<<endl;//cetak kalimat LIST OBAT BATUK
				cout<<"A. siladex       : Rp.13.000,00"<<endl;//cetak kalimat "A. siladex       : Rp.13.000,00"
				cout<<"B. Konidin       : Rp.15.000,00"<<endl;//cetak kalimat "B. Konidin       : Rp.15.000,00
				cout<<"C. Woods         : Rp.20.000,00"<<endl;//cetak kalimat "C. Woods         : Rp.20.000,00"
				cout<<"D. OBH Combi     : Rp.25.000,00"<<endl;//cetak kalimat "D. OBH Combi     : Rp.25.000,00" 
				cout<<"E. Komix         : Rp.30.000,00"<<endl;//ctak kalimat "E. Komix         : Rp.30.000,00"
				
				cout<<"MASUKAN PILIHAN OBAT : "<<endl;//cetak kalimat "MASUKAN PILIHAN OBAT : " 
				cin>>pilihanobat;//masukan pilihan obat
				
				if (pilihanobat == 'A' || pilihanobat =='a' ){//jika pilihan obat adalah 'A' atau a
					hargaobat=13000;//maka harga obat adalah 13000
				}else if (pilihanobat == 'B' || pilihanobat =='b'){//jika pilihan obat adalah B atau b
					hargaobat=15000;//maka harga obat adalah 15000
				}else if (pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihan obat adalah C atau c
					hargaobat=20000;//maka harga obat adalah 20000
				}else if (pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat adalah D atau d 
					hargaobat==25000;//maka harga obat adalah 25000
				}else if (pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat adalah E atau e
					hargaobat=30000;//maka harga obat adalah 30000
				}else{//jika pilihan obat tidak tersedia
					cout<<"Obat Tidak Tersedia"<<endl;//cetak kalimat "Obat Tidak Tersedia"
				}
				
				cout<<"Berapa banyak Obat Yang Akan Dibeli?"<<endl;//cetak kalimat "Berapa banyak Obat Yang Akan Dibeli?"
				cin>>banyak;//masukan banyak obat
				
				totalSeluruhObat[x]=hargaobat*banyak;//total seluruh obat
				cout<<"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?"<<endl;//cetak kalimat "Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?" 
				cin>>yesNo;//masukan pilihan Y/N
				
				break;//keluar dari pengkondisian 1
				
				case 2://jika pilihan yang di inginkan nomor 2
					cout<<"List Obat Nyeri Otot"<<endl;//cetak kalimat "List Obat Nyeri Otot" 
					cout<<"A. Panadol Extend              : Rp.15.000,00"<<endl;//cetak kalimat "A. Panadol Extend              : Rp.15.000,00"
					cout<<"B. Oskadon SP                  : Rp.13.000,00"<<endl;//cetak kalimat "B. Oskadon SP                  : Rp.13.000,00" 
					cout<<"C. Sido Muncul Jamu Pegel Linu : Rp.17.000,00"<<endl;//cetak kalimat "C. Sido Muncul Jamu Pegel Linu : Rp.17.000,00" 
					cout<<"D. Counterpain                 : Rp.20.000,00"<<endl;//cetak kalimat "D. Counterpain                 : Rp.20.000,00" 
					cout<<"E. Neu Reumachyl               : Rp.22.000,00"<<endl;//cetak kalimat "E. Neu Reumachyl               : Rp.22.000,00"
					
					cout<<"Masukan Pilihan Obat : ";//cetak kalimat "Masukan Pilihan Obat : " 
					cin>>pilihanobat;//masukan nilai sebagai variabel pilihan obat
					
					if (pilihanobat == 'A' || pilihanobat == 'a'){// jika pilihan adalah A atau a
						hargaobat=15000;//maka harga obat adalah 15000
					}else if (pilihanobat == 'B' || pilihanobat == 'b'){//jika pilihan obat adalah B atau b
						hargaobat=13000;//maka harga obat adalah 13000
					}else if (pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihan obat adalah C atau c
						hargaobat=17000;//maka harga obat adalah 17000
					}else if (pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat adalah D atau d
						hargaobat=20000;//maka harga obat adalah 20000
					}else if (pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat adalah E atau e
						hargaobat=22000;//maka harga obat adalah 22000
					}else{//jika pilihan obat tidak tersedia
						cout<<"Obat Tidak Tersedia"<<endl;//cetak kalimat "Obat Tidak Tersedia" 
					}
					
					cout<<"Berapa Banyak Obat Yang akan Dibeli?"<<endl;//cetak kalimat "Berapa Banyak Obat Yang akan Dibeli?" 
					cin>>banyak;//masukan jumlah obat yang di inginkan 
					
					totalSeluruhObat[x]=hargaobat*banyak;//total seluruh obat
					
					cout<<"Apakah Ada Obat Lain Yang Akan Dibeli? (Y/N)";//cetak kalimat "Apakah Ada Obat Lain Yang Akan Dibeli? (Y/N)" 
					cin>>yesNo;//masukan pilihan Y/N
					
					break;//keluar dari pengkondisian 
					
					case 3://jika pilihan yang di inginkan nomor 3
						cout<<"List Obat Demam"<<endl;//cetak kalimat "List Obat Demam" 
						cout<<"A. Panadol                : Rp.17.000,00 "<<endl;//cetak kalimat "A. Panadol                : Rp.17.000,00 "
						cout<<"B. Bodrex                 : Rp.18.000,00 "<<endl;//cetak kalimat "B. Bodrex                 : Rp.18.000,00 " 
						cout<<"C. Paracetamol pim 500 mg : Rp.15.000,00 "<<endl;//cetak kalimat "C. Paracetamol pim 500 mg : Rp.15.000,00 " 
						cout<<"D. Sanmol Paracetamol     : Rp.20.000,00 "<<endl;//cetak kalimat "D. Sanmol Paracetamol     : Rp.20.000,00 " 
						cout<<"E. Dumin                  : Rp.25.000,00 "<<endl;//cetak kalimat "E. Dumin                  : Rp.25.000,00 "
						
						cout<<"Masukan Pilihan Obat : ";//cetak kalimat "Masukan Pilihan Obat : " 
						cin>>pilihanobat;//masukan pilihan obat 
						
						if (pilihanobat == 'A' || pilihanobat == 'a'){//jika pilihan obat adalah A atau a
							hargaobat=17000;//maka harga obat adalah 17000
						}else if (pilihanobat == 'B' || pilihanobat == 'b'){//jika pilihan obat adalah B atau b
							hargaobat=18000;//maka harga obat adalah 18000
						}else if (pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihan obat adalah C atau c
							hargaobat=15000;//maka harga obat adalah 15000
						}else if (pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat adalah D atau a
							hargaobat=20000;//maka harga obat adalah 20000
						}else if (pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat adalah E atau e
							hargaobat=25000;//maka harga obat adalah 25000
						}else{//jika pilihan obat tidak tersedia 
							cout<<"Obat Tidak Tersedia "<<endl;//cetak kalimat "Obat Tidak Tersedia " 
						}
						
						cout<<"Berapa Banyak Obat Yang Akan Dibeli?";//cetak kalimat "Berapa Banyak Obat Yang Akan Dibeli?" 
						cin>>banyak;//masukan banyak obat
						
						totalSeluruhObat[x]=hargaobat*banyak;//total seluruh obat 
						
						cout<<"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?";//cetak kalimat "Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?" 
						cin>>yesNo;//masukan pilihan Y?N
						
						break;//keluar dari pengkondisian 3
						case 4://jika pilihan yang di inginkan nomor 4
							cout<<"List Obat Diare"<<endl;//cetak kalimat "List Obat Diare" 
							cout<<"A. Neo Entrostop         : Rp.10.000,00"<<endl;//cetak kalimat "A. Neo Entrostop         : Rp.10.000,00" 
							cout<<"B. Diapet                : Rp.12.000,00"<<endl;//cetak kalimat "B. Diapet                : Rp.12.000,00" 
							cout<<"C. Oralit                : Rp.14.000,00"<<endl;//cetak kalimat "C. Oralit                : Rp.14.000,00"
							cout<<"D. Imodium Tab           : Rp.16.000,00"<<endl;//cetak kalimat "D. Imodium Tab           : Rp.16.000,00" 
							cout<<"E. Norit Tube            : Rp.18.000,00"<<endl;//cetak kalimat "E. Norit Tube            : Rp.18.000,00" 
							
							cout<<"Masukan Pilihan Obat : ";//cetak kalimat "Masukan Pilihan Obat : "
							cin>>pilihanobat;//masukan pilihan obat 
							
							if (pilihanobat == 'A' || pilihanobat == 'a'){//jika pilihan obat adalah A atau a
								hargaobat=10000;//maka harga obat adalah 10000
							}else if (pilihanobat == 'B' || pilihanobat == 'b'){//jika pilihan obat adalah B atau b
								hargaobat=12000;//maka harga obat adalah 12000
							}else if (pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihan obat adalah C atau c
								hargaobat=14000;//maka harga obat adalah 14000
							}else if (pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat adalah D atau d
								hargaobat=16000;//maka harga obat adalah 16000
							}else if (pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat adalah e atau e
								hargaobat=18000;//maka harga obat adalah 18000
							}else{//jika pilihan tidak tersedia
								cout<<"Obat Tidak Tersedia"<<endl;//cetak kalimat "Obat Tidak Tersedia" 
							}
							
							cout<<"Berapa Banyak Obat Yang Akan Dibeli?";//cetak kalimat "Berapa Banyak Obat Yang Akan Dibeli?" 
							cin>>banyak;//masukan jumlah obat yang di inginkan
							
							cout<<"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?";//cetak kalimat "Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?"
							cin>>yesNo;//masukan pilihan Y/N
							
							break;//keluar dari pengkondisian 4
							
							case 5://jika pilihan yang di inginkan nomor 5
								cout<<"List Obat Panas Dalam"<<endl;//cetak kalimat "List Obat Panas Dalam" 
								cout<<"A. Larutan Cap Badak          : Rp.10.000,00"<<endl;//cetak kalimat "A. Larutan Cap Badak          : Rp.10.000,00" 
								cout<<"B. Adem Sari                  : Rp.15.000,00"<<endl;//cetak kalimat "B. Adem Sari                  : Rp.15.000,00" 
								cout<<"C. Alang Sari                 : Rp.20.000,00"<<endl;//cetak kalimat "C. Alang Sari                 : Rp.20.000,00" 
								cout<<"D. Kuldon                     : Rp.25.000,00"<<endl;//cetak kalimat "D. Kuldon                     : Rp.25.000,00"
								cout<<"E. Jascool                    : Rp.30.000,00"<<endl;//cetak kalimat "E. Jascool                    : Rp.30.000,00" 
								
								cout<<"Masukan Pilihan Obat : ";//cetak kalimat "Masukan Pilihan Obat : "
								cin>>pilihanobat;//masukan pilihan obat 
								
								if (pilihanobat == 'A' || pilihanobat =='a'){//jika pilihan obat adalah A atau a
									hargaobat=10000;//maka harga obat adalah 10000
								}else if(pilihanobat == 'B' || pilihanobat == 'b'){//jika pilihan obat adalah B atau b
									hargaobat=15000;//maka harga obat adalah 15000
								}else if (pilihanobat == 'C' || pilihanobat == 'c'){//jika pilihan obat adalah C atau c
									hargaobat=20000;//maka harga obat adalah 20000
								}else if (pilihanobat == 'D' || pilihanobat == 'd'){//jika pilihan obat adalah D atau d
									hargaobat=25000;//maka harga obat adalah 25000
								}else if (pilihanobat == 'E' || pilihanobat == 'e'){//jika pilihan obat adalah E atau e
									hargaobat=30000;//maka harga obat adalah 30000
								}else{//jika pilihan tidak tersedia 
									cout<<"Obat Tidak Tersedia"<<endl;//cetak kalimat "Obat Tidak Tersedia" 
								}
								
								cout<<"Berapa Banyak Obat Yang Akan Dibeli?";//cetak kalimat "Berapa Banyak Obat Yang Akan Dibeli?" 
								cin>>banyak;//masukan banyak obat 
								
								totalSeluruhObat[x]=hargaobat*banyak;//total seluruh obat 
								
								cout<<"Apakah Ada Obat Lain Yang Akan Dibeli (Y/N)?";//cetak kalimat "Berapa Banyak Obat Yang Akan Dibeli?"
								cin>>yesNo;//masukaan pilihan Y/N
								
								break;//keluar dari prngkondisian 5														
		}
		x++;//menambah nilai variabel yang sudah ditetapkan
	} while(yesNo == 'Y' || yesNo == 'y');//jika yesNo adalah 
	
	cout<<"Pembayaran"<<endl;//ctak kalimat "Pembayaran" 
	for(int i=0;i<x;i++){ // for i = membaca i dengan variabel 0, i++ melakukan pengulangan sejumlah variabe yang ditentukan
		hasil=hasil+totalSeluruhObat[i];//menjumlahkan hasil dari seluruh total pesanan
	}
	cout<<"Total Pesanan : "<<hasil<<endl;//cetak kalimat "Total Pesanan : " lalu akan menampilkan hasil total pesanan
	cout<<"Diskon 10%    : "<<hasil/diskon<<endl;//cetak kalimat "Diskon	: "Lalu akan menampilkan diskon
	cout<<"Total Bayar   : "<<hasil - (hasil/diskon)<<endl;//cetak kalimat "Total Bayar : " lalu akan menampilkan hasil dari total pembayaran
	
	
	
}
