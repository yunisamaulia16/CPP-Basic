#include <iostream>
using namespace std;
int main()
{
      int baris, x, y;
      cout << "Masukkan jumlah baris: ";
      cin >> baris;
      for (x = 1; x <= baris; x++)
      {
            for (y = baris; y >= 1; y--)
            {
                  if (y <= x)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
      return 0;
}
