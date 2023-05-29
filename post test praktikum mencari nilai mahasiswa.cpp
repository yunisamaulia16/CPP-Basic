#include <iostream>

using namespace std;

int main()
{
	int nilai;
	cout << " Nama	: Yunisa Maulia astuty"<<endl;
	cout << " NIM	: 312210606"<<endl;
	cout << " Kelas	: TI.22.C7"<<endl;
	cout << endl;
	
	cout << "-----------------------------------"<<endl;
	cout << "# Program mencari Nilai Mahasiswa #"<<endl;
	cout << "-----------------------------------"<<endl;
	cout << "input nilai ="; cin>>nilai;
	
	if (nilai>=81){
		cout << "A"<<endl;
	}
	else if (nilai>=71){
		cout << "B"<<endl;
	}
	else if (nilai>=51){
		cout <<"C"<<endl;
	}
	else if (nilai>=31){
		cout << "D"<<endl;
	}else{
		cout << "E"<<endl;
	}
	
}
