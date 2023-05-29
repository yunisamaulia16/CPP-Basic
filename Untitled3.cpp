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
float hambatan()
{
    float v3, i3;
    cout << "Besar Tegangan V = ";
    cin >> v3;
    cout << "Besarnya Arus I = ";
    cin >> i3;
    return (v3 / i3);
}

main()
{
    int pil;
    char jawab = 'Y';
    while (jawab == 'Y' || jawab == 'y')
    {
        cout << "Menghitung Besarnya Arus, Tegangan dan Hambatan" << endl;
        cout << "1.Hitung Tegangan" << endl;
        cout << "2.Hitung Arus" << endl;
        cout << "3.Hitung Hambatan" << endl;

        cout << "pilih : ";
        cin >> pil;
        if (pil == 1)
            tegangan();
        if (pil == 2)
            cout << "Besarnya Arus I = " << arus() << " Ampere" << endl;
        if (pil == 3)
            cout << "Besarnya Hambatan R = " << hambatan() << " Ohm" << endl;

        cout << "Hitung lagi? Y|N";
        cin >> jawab;
    }
    return 0;
}
