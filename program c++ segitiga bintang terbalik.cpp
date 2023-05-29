#include <iostream>
using namespace std;
int main()
{
  int  i, j, baris;
  cout << "Segitiga Bintang Siku Siku Terbalik\n";
  cout << "Masukkan jumlah baris:  ";
  cin >> baris;
  for (i = baris; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  return 0;
}
