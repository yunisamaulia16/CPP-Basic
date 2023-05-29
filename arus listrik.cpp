#include <iostream>

using namespace std;

void tegangan()
{
    float i, r, v;
    cout << "Besar Arus I = ";
    cin >> i;
    cout << "Besar Hambatan R = ";
    cin >> r;
    v = i * r;
    cout << "Besarnya Tegangan V = " << v << " volt" << endl;
}
float arus()
{
    float r2, v2;
    cout << "Besar Tegangan V = ";
    cin >> v2;
    cout << "Besar Hambatan R = ";
    cin >> r2;
    return (v2 / r2);
}
main()
{
	cout << "Menghitung Besarnya Arus" << endl;
	cout << "Besarnya Arus  = " << arus() << " Ampere" << endl;
	
	return 0;
}
