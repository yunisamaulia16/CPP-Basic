#include <iostream>

using namespace std;

struct mahasiswa
{
    string nama;
    char nim[9];
    float ip;
};

int main()
{
    cout << "-------------------------" << endl;
	cout << " # LATIHAN PRAKTIKUM 9 # " << endl;
	cout << "-------------------------" << endl;
	cout << "Nama  : Yunisa Maulia Astuty" << endl;
	cout << "NIM   : 312210606" << endl;
	cout << "Kelas : TI.22.C7" << endl;
	cout << endl;

	int maks = 5;
	mahasiswa mhs[maks];

    cout << "Masukan identitas mahasiswa" << endl;
    cout << endl;

	for(int i =  0; i < maks; i++)
    {
        cout << "Nama : "; cin >> mhs[i].nama;
        cout << "NIM  : "; cin >> mhs[i].nim;
        cout << "IP   : "; cin >> mhs[i].ip;
        cout << endl;
    }

    cout << "| No |    NIM    |  IP  | Nama" << endl;
    for(int i = 0; i < maks; i++)
    {
        cout << "|  " << i + 1 << " | " << mhs[i].nim << " | " << mhs[i].ip << " | " << mhs[i].nama << endl;
    }
    return 0;
}
