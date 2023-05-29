#include<iostream>
#include<conio.h>

using namespace std;

void jelaskan_program(void);
void dapatkan_values(float *r, float *v);
float do_kalkulasi(float resistance, float voltase);
void tampilkan_hasil(float arus);

main()
{
	cout << "------------------------------"<<endl;
	cout << " #   LATIHAN PRAKTIKUM 8    # "<<endl;
	cout << "------------------------------"<<endl;
	cout << " Nama	: Yunisa Maulia Astuty "<<endl;
	cout << " NIM	: 312210606 "<<endl;
	cout << " Kelas	: TI.22C7 "<<endl;
	cout << endl;
	
	float resistor, volt, arus;
	jelaskan_program;
	dapatkan_values(&resistor, &volt);
	arus = do_kalkulasi(resistor, volt);
	tampilkan_hasil (arus);
	getch();
}
void dapatkan_values(float *r, float *v)
{
	float resistance, voltase;
	cout << " Input Besar Voltase	=" ; cin >> voltase;
	cout << " Input Besar Resistance =" ; cin >> resistance;
	cout <<endl;
	*r = resistance;
	*v = voltase;
}
float do_kalkulasi(float resistance, float voltase)
{
	float arus;
	arus = voltase / resistance;
	return(arus);
}
void tampilkan_hasil(float arus)
{
	cout << "----------------------------------"<<endl;
	cout << "Besarnya Arus Adalah	= "<<arus<<" Ampere"<<endl;
}
