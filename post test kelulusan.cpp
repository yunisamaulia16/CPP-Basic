#include <iostream>

using namespace std;

int main()
{
	cout<<"Muhamad Rafly"<<endl;
	cout<<"312210599"<<endl;
	
	int nilai;
	int hadir;
	
	cout<<"Jumlah Kehadiran =";
	cin>>hadir;
	
	cout<<"Nilai UAS =";
	cin>>nilai;
	
	if ((hadir<60)&&(nilai<70)){
		cout<<"tidak lulus"<<endl;
	}else 
	cout<<"lulus"<<endl;
	
	return 0;
}
