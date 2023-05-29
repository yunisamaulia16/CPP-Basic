#include <iostream>
using namespace std;
int main()
{
  int  i, j, baris;
  cout << "Segitiga Bintang Siku Siku\n";
  cout << "Masukkan jumlah baris:  ";
  cin >> baris;
  for (i = 1; i <= baris; ++i)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  return 0;
}
