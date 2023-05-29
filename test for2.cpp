#include <iostream>

using namespace std;

int main()
{
	int a;
	struct{
	string nama,nama2;
	}nama[6],nama2[6];

	for ( a=1;a<6;a++){
	
	cout<<"no   : \n";
	cin>>a;
	cout<<"nama : \n";
	cin>>nama[a].nama;
	cout<<"nama2 : \n";
	cin>>nama2[a].nama2;
	system("cls");
	
	cout<<"no   : \n";
	cin>>a;
	cout<<"nama : \n";
	cin>>nama[a].nama;
	cout<<"nama2 : \n";
	cin>>nama2[a].nama2;
	system("cls");
	
	cout<<"no   : \n";
	cin>>a;
	cout<<"nama : \n";
	cin>>nama[a].nama;
	cout<<"nama2 : \n";
	cin>>nama2[a].nama2;
	system("cls");
	
	cout<<"no   : \n";
	cin>>a;
	cout<<"nama : \n";
	cin>>nama[a].nama;
	cout<<"nama2 : \n";
	cin>>nama2[a].nama2;
	system("cls");
	
	cout<<"no   : \n";
	cin>>a;
	cout<<"nama : \n";
	cin>>nama[a].nama;
	cout<<"nama2 : \n";
	cin>>nama2[a].nama2;
	system("cls");
	
	
	break;
	
	}
	
	cout << "Nama	:Yunisa Maulia Astuty" <<endl;
	cout << "NIM	:312210606" <<endl;
	cout << "Kelas	:TI.22.C7" <<endl;
	cout << endl;
	
	cout<<"|No|";cout<<"      Nama\t|"<<endl;
	cout<<"--------------------------"<<endl;
	
	for ( a=1;a<6;a++){
	
		cout<<"|"<<a;
		cout<<"|\t"<<nama[a].nama;
		cout<<"\t|"<<nama2[a].nama2<<endl;
		
	}
	
	
	return 0;
}
