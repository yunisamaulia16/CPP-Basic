#include <iostream>

using namespace std;

int main(){
	int nilai;
	int hadir;
	cout << "Nama	: Yunisa Maulia Astuty"<<endl;
	cout << "NIM	: 312210606"<<endl;
	cout << "Kelas	: TI.22.C7"<<endl;
	cout << endl;
	
	cout << "-------------------------------"<<endl;
	cout << "# Program Kelulusan Mahasiswa #"<<endl;
	cout << "-------------------------------"<<endl;
	cout << "Jumlah kehadiran ="; cin >> hadir;
	cout << "Nilai UAS ="; cin >> nilai;

	if ((hadir<60)&&(nilai<70))
	{
		cout<<"tidak lulus"<<endl;
	}else 
	cout<<"lulus"<<endl;
	
	return 0;
}
