#include <iostream> //declare compiler input output
using namespace std;

int main()
{
cout << "## Program C++ Pencarian Array ##" << endl;
cout << "==================================" << endl;
cout << endl;

int input[100], arr_count, i, num;

cout << "Input jumlah element Array: ";
cin >> arr_count;

cout << "Input "<< arr_count << " angka (dipisah dengan enter): " ;
cout << endl;

// simpan setiap angka yang diinput ke dalam array
for(i = 0; i < arr_count; i++){
cin >> input[i];
}

cout << endl;

cout << "Input angka yang akan dicari: ";
cin >> num;

// proses pencarian array
for(i = 0; i < arr_count; i++){
if(input[i] == num){
cout << "Angka ditemukan pada index ke-" << i;
break;
}
}

if(i == arr_count){
cout << "Angka tidak ditemukan";
}

cout << endl;
return 0;
} 
