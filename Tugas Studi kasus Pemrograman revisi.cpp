#include <iostream>
using namespace std;

int main(){
	int pilihan,harga,jumlah,banyak,hasil=0;
	char pilihanpaket,yesNo;
	float diskon=5;
	int x=0;
	int totalSeluruhPesanan[x];
	int total,bayar,uang,pembayaran,totalbayar,kembali;
	string nama;
	
	cout<<"========================================================================================================================================================================\n";
	cout<<"=                                                        SELAMAT DATANG DI KINGSTONE RESTO                                                                              =\n";
	cout<<"=                                                    KEPUASAN PELANGGAN ADALAH PRIORITAS KAMI                                                                          =\n";
	cout<<"========================================================================================================================================================================\n";
	cout<<"\nNama Pemesan : ";
	cin >>nama;
	
	cout<<"list menu Paket HEBI (HEMAT BINGIT) :"<<endl;
	cout<<"1. Nasi Padang"      <<endl;
	cout<<"2. Nasi Goreng"      <<endl;
	cout<<"3. Sarapan Kuning"   <<endl;
	cout<<"4. Nasi Pecel Madiun"<<endl;
	cout<<"5. Soto Indonesia  " <<endl;
	cout<<"6. Sate Nusantara"   <<endl;
	
	do{
		
		cout<<"Masukan Pilihan Yang Di Pilih :";
		cin>>pilihan;
		switch(pilihan){
			case 1:
			 cout<<"List Paket Nasi Padang"<<endl;
			 cout<<"A. Paket Rendang + Es Teh/Es Jeruk     : Rp.22.000,00"<<endl;
			 cout<<"B. Paket Ayam Bakar + Es Teh/Es Jeruk  : Rp.18.000,00"<<endl;
			 cout<<"C. Paket Ikan Bakar + Es Teh/Es Jeruk  : Rp.20.000,00"<<endl;
			 cout<<"D. Paket Opor Ayam + Es Teh/Es Jeruk   : RP.20.000,00"<<endl;
			 cout<<"E. Paket Ikan Balado + Es Teh/Es Jeruk : Rp.18.000,00"<<endl;
			 cout<<"F. Paket Telur Dadar + Es Teh/Es Jeruk : Rp.15.000,00"<<endl;
			
			 cout<<"Masukan Pilihan Paket :";
			 cin>>pilihanpaket; 
			
			if(pilihanpaket=='A' || pilihanpaket=='a'){
			 harga=22000;
			} else if(pilihanpaket=='B' || pilihanpaket=='b'){
				harga=18000;
			} else if(pilihanpaket=='C' || pilihanpaket=='c'){
				harga=20000;
			} else if(pilihanpaket =='D' || pilihanpaket=='d'){
				harga=20000;
			} else if(pilihanpaket=='E' || pilihanpaket=='e'){
				harga=18000;
			} else if(pilihanpaket=='F' || pilihanpaket=='f'){
				harga=15000;
			}
			else {
				cout<<"Paket Tidak Tersedia"<<endl;
			}
			
			cout<<"Berapa Banyak Pesanan?";
			cin>>banyak;
			
			totalSeluruhPesanan[x]=harga*banyak;
			cout<<"apakah ada pesanan lain (Y/N)?";
			cin>>yesNo;
			
			system("cls");
	cout<<"=========================================================================================================================================================================\n";
	cout<<"=                                                            NOTA PEMBAYARAN KINGSTONE RESTO                                                                            =\n";
	cout<<"=                                                    KEPUASAN PELANGGAN ADALAH PRIORITAS KAMI                                                                           =\n";
	cout<<"=========================================================================================================================================================================\n";

			
			break;
			
			case 2:
			 	cout<<"List Paket Nasi Goreng"<<endl;
			 	cout<<"A. Nasi Goreng Biasa + Es Teh/Es Jeruk 			      : Rp.15.000,00"<<'\n';
			 	cout<<"B. Nasi Goreng Ati Ampela + Es Teh/Es Jeruk 		      : Rp.18.000,00"<<'\n';
			 	cout<<"C. Nasi Goreng Pete + Es Teh/Es Jeruk 			      : Rp.18.000,00"<<'\n';
			 	cout<<"D. Nasi Goreng Mawut + Es Teh/Es Jeruk			      : Rp.20.000,00"<<'\n';
			 	cout<<"E. Nasi Goreng Kuah Rawom + Es Teh/Es Jeruk 		      : Rp.23.000,00"<<'\n';
			 	cout<<"F. Nasi Goreng Spesial Karetnya 2 + Es Teh/Es Jeruk           : Rp.25.000,00"<<'\n';
			
			 	cout<<"Masukan Pilihan Paket";
			 	cin>>pilihanpaket; 
			
				if(pilihanpaket=='A' || pilihanpaket=='a'){
					harga=15000;
				} else if(pilihanpaket=='B' || pilihanpaket=='b'){
					harga=18000;
				} else if(pilihanpaket=='C' || pilihanpaket=='c'){
					harga=18000;
				} else if(pilihanpaket =='D' || pilihanpaket=='d'){
					harga=20000;
				} else if(pilihanpaket=='E' || pilihanpaket=='e'){
					harga=23000;
				} else if(pilihanpaket=='F' || pilihanpaket=='f'){
					harga=25000;
				}
				else {
					cout<<"Paket Tidak Tersedia"<<endl;
				}
			
				cout<<"Berapa Banyak Pesanan?";
				cin>>banyak;
			
				totalSeluruhPesanan[x]=harga*banyak;
				cout<<"apakah ada pesanan lain (Y/N)?";
				cin>>yesNo;
				
	cout<<"==========================================================================================================================================================================\n";
	cout<<"=                                                            NOTA PEMBAYARAN KINGSTONE RESTO                                                                             =\n";
	cout<<"=                                                       KEPUASAN PELANGGAN ADALAH PRIORITAS KAMI                                                                         =\n";
	cout<<"==========================================================================================================================================================================\n";
			
				break;
			
				case 3:
					cout<<"List Paket Nasi Kuning"<<endl;
			 		cout<<"A. Nasi Kuning Biasa+ Es Teh/Es Jeruk             : Rp.10.000,00"<<'\n';
			 		cout<<"B. Nasi Kuning Irisan Telur+ Es Teh/Es Jeruk      : Rp.13.000,00"<<'\n';
			 		cout<<"C. Nasi Kuning Ayam Goreng+ Es Teh/Es Jeruk 	     : Rp.18.000,00"<<'\n';
			 		cout<<"D. Nasi KuningTelur Balado + Es Teh/Es Jeruk      : Rp.15.000,00"<<'\n';
			 		cout<<"E. Nasi Kuning Ikan Pedas Manis+ Es Teh/Es Jeruk  : Rp.18.000,00"<<'\n';
			 		cout<<"F. Nasi Kuning Spesial + Es Teh/Es Jeruk          : Rp.20.000,00"<<'\n';
			
			 		cout<<"Masukan Pilihan Paket:";
			 		cin>>pilihanpaket; 
			
					if(pilihanpaket=='A' || pilihanpaket=='a'){
						harga=10000;
					} else if(pilihanpaket=='B' || pilihanpaket=='b'){
						harga=13000;
					} else if(pilihanpaket=='C' || pilihanpaket=='c'){
						harga=18000;
					} else if(pilihanpaket =='D' || pilihanpaket=='d'){
						harga=15000;
					} else if(pilihanpaket=='E' || pilihanpaket=='e'){
						harga=18000;
					} else if(pilihanpaket=='F' || pilihanpaket=='f'){
						harga=20000;
					}
					else {
					cout<<"Paket Tidak Tersedia"<<endl;
					}
			
					cout<<"Berapa Banyak Pesanan?";
					cin>>banyak;
			
					totalSeluruhPesanan[x]=harga*banyak;
					cout<<"apakah ada pesanan lain (Y/N)?";
					cin>>yesNo;system("cls");
	cout<<"======================================================================================================================================================================\n";
	cout<<"=                                                        NOTA PEMBAYARAN KINGSTONE RESTO                                                                             =\n";
	cout<<"=                                                    KEPUASAN PELANGGAN ADALAH PRIORITAS KAMI                                                                        =\n";
	cout<<"======================================================================================================================================================================\n";
					
					
			
					break;
			
					case 4:
						cout<<"List Paket Nasi Pecel Madiun"<<endl;
			 			cout<<"A. Nasi Pecel Biasa+ Es Teh/Es Jeruk              : Rp.8.000,00"<<'\n';
			 			cout<<"B. Nasi Pecel Irisan Telur+ Es Teh/Es Jeruk       : Rp.10.000,00"<<'\n';
			 			cout<<"C. Nasi Pecel Ayam Goreng+ Es Teh/Es Jeruk        : Rp.16.000,00"<<'\n';
						cout<<"D. Nasi PecelTelur Balado + Es Teh/Es Jeruk       : Rp.14.000,00"<<'\n';
			 			cout<<"E. Nasi Pecel Ikan Pedas Manis+ Es Teh/Es Jeruk   : Rp.16.000,00"<<'\n';
			 			cout<<"F. Nasi Pecel Spesial + Es Teh/Es Jeruk           : Rp.18.000,00"<<'\n';
			
			 			cout<<"Masukan Pilihan Paket:";
			 			cin>>pilihanpaket; 
			
						if(pilihanpaket=='A' || pilihanpaket=='a'){
							harga=8000;
						} else if(pilihanpaket=='B' || pilihanpaket=='b'){
							harga=10000;
						} else if(pilihanpaket=='C' || pilihanpaket=='c'){
							harga=16000;
						} else if(pilihanpaket =='D' || pilihanpaket=='d'){
							harga=14000;
						} else if(pilihanpaket=='E' || pilihanpaket=='e'){
							harga=16000;
						} else if(pilihanpaket=='F' || pilihanpaket=='f'){
							harga=18000;
						}
						else {
							cout<<"Paket Tidak Tersedia"<<endl;
						}
			
						cout<<"Berapa Banyak Pesanan?";
						cin>>banyak;
			
						totalSeluruhPesanan[x]=harga*banyak;
						cout<<"apakah ada pesanan lain (Y/N)?";
						cin>>yesNo;
						
						system("cls");
	cout<<"========================================================================================================================================================================\n";
	cout<<"=                                                        NOTA PEMBAYARAN KINGSTONE RESTO                                                                               =\n";
	cout<<"=                                                    KEPUASAN PELANGGAN ADALAH PRIORITAS KAMI                                                                          =\n";
	cout<<"========================================================================================================================================================================\n";
			
						break;
			
							case 5:
			 				cout<<"List Paket Soto Indonesia"<<endl;
			 				cout<<"A. Soto Lamongan + Es Teh/Es Jeruk 	      : Rp.15.000,00"<<'\n';
			 				cout<<"B. Soto Betawi + Es Teh/Es Jeruk 	      : Rp.18.000,00"<<'\n';
			 				cout<<"C. Soto Kudus + Es Teh/Es Jeruk            : Rp.18.000,00"<<'\n';
			 				cout<<"D. Soto Banjar + Es Teh/Es Jeruk           : Rp.15.000,00"<<'\n';
			 				cout<<"E. Soto Makasar+ Es Teh/Es Jeruk 	      : Rp.23.000,00"<<'\n';
			 				cout<<"F. Soto Surabaya + Es Teh/Es Jeruk	      : Rp.20.000,00"<<'\n';
			
							cout<<"Masukan Pilihan Paket:";
			 				cin>>pilihanpaket; 
			
							if(pilihanpaket=='A' || pilihanpaket=='a'){
								harga=15000;
							} else if(pilihanpaket=='B' || pilihanpaket=='b'){
								harga=18000;
							} else if(pilihanpaket=='C' || pilihanpaket=='c'){
								harga=18000;
							} else if(pilihanpaket =='D' || pilihanpaket=='d'){
								harga=15000;
							} else if(pilihanpaket=='E' || pilihanpaket=='e'){
								harga=23000;
							} else if(pilihanpaket=='F' || pilihanpaket=='f'){
								harga=20000;
							}
							else {
								cout<<"Paket Tidak Tersedia"<<endl;
							}
			
							cout<<"Berapa Banyak Pesanan?";
							cin>>banyak;
			
							totalSeluruhPesanan[x]=harga*banyak;
							cout<<"apakah ada pesanan lain (Y/N)?";
							cin>>yesNo;
							
							system("cls");
	cout<<"=====================================================================================================================================================================\n";
	cout<<"=                                                        NOTA PEMBAYARAN KINGSTONE RESTO                                                                            =\n";
	cout<<"=                                                    KEPUASAN PELANGGAN ADALAH PRIORITAS KAMI                                                                       =\n";
	cout<<"=====================================================================================================================================================================\n";
			
							break;
			
							case 6:
			  					cout<<"List Paket Sate Nusantara"<<endl;
			  					cout<<"A. Sate Madura + Es Teh/Es Jeruk     : Rp.20.000,00"<<'\n';
			  					cout<<"B. Sate Tegal + Es Teh/Es Jeruk      : Rp.23.000,00"<<'\n';
			  					cout<<"C. Sate Klatak + Es Teh/Es Jeruk     : Rp.28.000,00"<<'\n';
			  					cout<<"D. Sate Padang + Es Teh/Es Jeruk     : Rp.25.000,00"<<'\n';
			  					cout<<"E. Sate Maranggi + Es Teh/Es Jeruk   : Rp.26.000,00"<<'\n';
			  					cout<<"F. Sate Buntel + Es Teh/Es Jeruk     : Rp.27.000,00"<<'\n';
			
			 					cout<<"Masukan Pilihan Paket:";
			 					cin>>pilihanpaket; 
			
								if(pilihanpaket=='A' || pilihanpaket=='a'){
									harga=20000;
								} else if(pilihanpaket=='B' || pilihanpaket=='b'){
									harga=23000;
								} else if(pilihanpaket=='C' || pilihanpaket=='c'){
									harga=28000;
								} else if(pilihanpaket =='D' || pilihanpaket=='d'){
									harga=25000;
								} else if(pilihanpaket=='E' || pilihanpaket=='e'){
									harga=26000;
								} else if(pilihanpaket=='F' || pilihanpaket=='f'){
									harga=27000;
								}
								else {
								cout<<"Paket Tidak Tersedia"<<endl;
								}
			
								cout<<"Berapa Banyak Pesanan?";
								cin>>banyak;
				
								totalSeluruhPesanan[x]=harga*banyak;
								cout<<"apakah ada pesanan lain (Y/N)?";
								cin>>yesNo;
								
								system("cls");
	cout<<"========================================================================================================================================================================\n";
	cout<<"=                                                         NOTA PEMBAYARAN KINGSTONE RESTO                                                                              =\n";
	cout<<"=                                                    KEPUASAN PELANGGAN ADALAH PRIORITAS KAMI                                                                          =\n";
	cout<<"========================================================================================================================================================================\n";
			
								break;
			
								}
	
		x++;
	} while(yesNo == 'Y' || yesNo == 'y');
	
	cout<<"Pembayaran : "<<endl;
	
	for(int i=0;i<x;i++){
		hasil=hasil+totalSeluruhPesanan[i];
	}
	
cout<<"Total Pesanan : "<<hasil<<endl;
cout<<"Diskon 5% : "<<hasil*(diskon/100)<<endl;	
total=harga*jumlah; 
cout<<"Total Bayar: Rp."<<hasil - (hasil*(diskon/100))<<endl;
cout<<"Uang Bayar: Rp.";
cin >>bayar;
kembali=bayar-total;
cout<<"Kembalian Rp.:"<<bayar - (hasil - (hasil*(diskon/100)))<<endl;

 puts("\t*******TERIMA KASIH************\n");
 
 cout<<"===========================================================================================================================================================================\n";
 	cout<<"                                                       TERIMA KASIH SUDAH BELANJA DISINI                                                                               =\n";
 	cout<<"                                       JANGAN LUPA MEMBERIKAN PENILAIAN ANDA TENTANG KAMI DAN KEMBALILAH LAGI                                                          =\n";
 	cout<<"========================================================================================================================================================================\n";
 	
}
