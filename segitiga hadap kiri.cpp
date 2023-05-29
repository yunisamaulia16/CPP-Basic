#include <iostream>

using namespace std;

void MakeTriangle(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = n; j > i; j--)
		{
			cout << "  ";
		}
		for(int k = 1; k <= i; k++)
		{
			if(k == 1 || k == i || i == n)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	return;
}
int main()
{
	cout << "-------------------------------" << endl;
	cout << "# Program Segitiga Hadap Kiri #" << endl;
	cout << "-------------------------------" << endl;
	cout << "Nama  : Yunisa Maulia Astuty" << endl;
	cout << "NIM   : 312210606" << endl;
	cout << "Kelas : TI.22.C7" << endl;
	cout << endl;
	
	int n;
	cout << "Masukan tinggi segitiga : "; cin >> n;
	
	MakeTriangle(n);
	  
	
	return 0;
}

