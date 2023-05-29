 #include <iostream>//deklarasi compiler input output 
#include <windows.h> //menggunakan gotoxy, GetAsyncKeyState,
//dan beberapa fungsi lainnya
//Awal pendeklarasian beberapa konstanta
#define batas_atas 2 //batas_atas game
#define batas_bawah 23 //batas_bawah_game
#define batas_samping 2 // batas samping kiri game
#define batas_samping_k 78 //batas samping kanan game
//Akhir pendeklarasian konstanta
using namespace std;//class std
//pendeklarasian variabel
int iX(5), iY(5), x1 (4), y1 (4), xHapus(3), yHapus(3), veloX(1), veloY(0)// ix(5) adalah  posisi snake dengan jumlah ekor 5
																		  // iy(5) adalah posisi snake dengan jumlah ekor 5
																		  // x1(4) adalah posisi koordinat
																		  // y1(4) adalah posisi koordinat
																		  // xHapus(3) adalah mengahpus bagian yang sudah di lewati 
																		  // yHapus(3) adalah menghapus bagian yang sudah dilewati 
																		  // veloX(1) adalah mengatur kecepatan snake 
																		  // veloY(0) adalah mengatur kecepatan snake
   ,ekorsX[200], ekorsY[200], nEkor = 5, start = 0, makX, makY;           //ekorsX[200] adalah mengganti posisi ekor snake
                                                                          //ekorsY[200] adalah mengganti posisi ekor snake
                                                                          //nEkor = 5 adalah jumlah ekor di awal game
                                                                          //start = 0 adalah nilai skor di awal game
                                                                          //makX untuk menampilkan makananan secara random 
                                                                          //makY untuk menampilkan makanan secara random 

void gotoxy(int x, int y) //fungsi untuk memindahkan kordinat
{
 COORD pos = {x, y};//koordinat posisi
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);//menetapkan posisi kursor
}

void naik() //untuk gerak Snake ke atas
{
  veloY = -1; //Kecepatan Y menjadi ke atas
  veloX = 0; //kecepatan X dinolkan
}

void turun()//untuk gerak snake ke bawah
{
  veloY = 1; //kecepatan y menjadi ke bawah
  veloX = 0; //kecepatan x dinolkan
}

void samping()//untuk gerak snake ke samping
{
  veloX = -1; //kecepatan y menjadi ke samping
  veloY = 0; //kecepatan x dinolkan
}

void samping_k()//untuk gerak snake ke samping kiri
{
  veloX = 1; //kecepatan y menjadi ke samping kiri
  veloY = 0; //kecepatan x dinolkan
}

void hapus()//fungsi untuk melakukan oenghapusan
{
 gotoxy(xHapus, yHapus); //untuk menghapus bagian yang sudah dilewati
 cout << " ";//menghapus
}

void ekor()//fungsi untuk mencetak/menampilkan ekor
{
 for(int j = 0; j <= 2; j++)//for j= membaca j sebagai variabel awal di mulai dari angka 0
 {
  gotoxy(ekorsX[j], ekorsY[j]);//memasukan nilai variabelnya
                               //ekorsX dan ekorsY adalah posisi dari ekor
  cout << "+";// cetak "+" untuk menampilkan ekor
 }
}

void tampil()//fungsi untuk menampilkan makanan 
{
 gotoxy(iX, iY); //iX dan iY adalah posisi gambar kepala
 cout << char(2); //untuk menggambar gambar kepala
 //karena ascii dari smiley tsb adalh 2
 gotoxy(makX, makY);//makX dan makY adalah posisi dimana kita akan menampilkan makanan 
 //nilai makX dan makY adalah random
 //digunakan untuk posisi makanan, jadi posisi makanan random
 cout << "*"; //cetak * untuk menampilkan makanan
}

void ganti_posisi() //fungsi mengganti posisi dari ekor snake
{
 xHapus = ekorsX[nEkor - 1];//menghapus ekor ketika push segmen saat posisi snake menyamping 
 yHapus = ekorsY[nEkor - 1];//menghapus ekor ketika push segmen saat posisi snake ketas/kebawah
 for(int j = nEkor - 1; j >= 1; j--)//membaca j = nilai ekor - 1
 {
  ekorsX[j] = ekorsX[j-1];//ekor akan terhapus
  ekorsY[j] = ekorsY[j-1];//ekor akan terhapus
 }
  ekorsX[0] = iX;//posisi ekor dengan jumlaj nilai variabel yang suda di tentukan 
  ekorsY[0] = iY;//posisi ekor dengan jumlaj nilai variabel yang suda di tentukan 
}

void velo() //fungsi untuk melakukan update posisi snake sesuai tombol
//yang ditekan
{
 ganti_posisi();//mengganti posisi snake 
 hapus();//hapus bagian yang sudah dilewati 
 iX += veloX;//snake akan melakukan push menyamping
 iY += veloY;//snake akan melakukan push keatas/kebawah
 tampil();//menampilkan posisi
 ekor();//menampilkan ekor 
}


bool isDestroy()//sebuah fungsi untuk menghapus snake ketika membentur tembok
{
 
 if(iX == batas_samping_k) { iX = 3; gotoxy(78, iY); cout << " "; }//batas dinding samping kanan snake akan terhapus
 if(iX == batas_samping)  { iX = 77; gotoxy(2, iY); cout << " "; }//batas dinding samping kiri snake akan terhapus
 if(iY == batas_atas) { iY = 22; gotoxy(iX, 2); cout << " "; }//batas dinding atas snake akan terhapus
 if(iY == batas_bawah) { iY = 3; gotoxy(iX, 23); cout << " "; }//batas dinding bawah snake akan terhapus
 for(int j = 0; j <= nEkor - 1; j++)//membaca j = 0,j lebih kecil sama dengan nilai ekor -1,maka j akan melakukan perulangan
  if(ekorsX[j] == iX && ekorsY[j] == iY) return true;//jika,ekorsX =ix dan ekorsY= iy bernilai benar
 return false;//bernilai salah
}


char getkey()//fungsi untuk mendapatkan tombol yang ditekan
{
 for(int i = 8; i <= 222; i++)//membaca i = 8, i kurang dari sama dengan 222,i akan melakukan perulangan 
 {
  if(GetAsyncKeyState(i) == -32767)//fungsi untuk menjalankan arrows
  {
   switch(i)//fungsi dimana snake akan berpindah posisi sesuai tombol arrows yang di tekan 
   {
    case 38 : if(veloY != 1)naik();
              break;//jika tombol yang ditekan adalah atas
    case 40 : if(veloY != -1)turun();
              break; //jika tombol yang ditekan adalah bawah
    case 37 : if(veloX != 1)samping();
              break; //jika tombol yang ditekan adalah kanan
    case 39 : if(veloX != -1)samping_k();
              break; //jika tombol yang ditekan adalah kiri
   }
  }
 }
}

void random_makanan()//fungsi menampilkan makanan secara random
{
 makX = rand()%(batas_samping_k - 1);//batas samping kanan posisi makanan random 
 if(makX < 4) makX += 3 + (4-makX); //mencegah agar makanan tidak diluar batas
 makY = rand()%(batas_bawah - 1);//batas bawah posisi makanan random
 if(makY < 4) makY += 3 + (4-makY);//mencegah agar makanan tidak diluar batas
 gotoxy(makX, makY);//mencetak makanan secara random
 cout << "*";//menampilkan makanan
}

bool isEaten()//fungsi makanan 
{
 if(iX == makX && iY == makY) return true; else return false;//jika ix sama dgn makx dan iy sama dgn maky maka kembalikan nilai true kalau tidak kembalikan nilai false
}

void cBorder() //Fungsi untuk membuat garis tepi game
{
 for(int i = 1; i <= 78; i++)//garis tepi samping 
 {
  for(int j = 1; j <= 24; j += 23)//garis tepi bawah/atas
  {
   if(j > 1 || i >= 32)//jika j lebih besar dari 1 atau i lebih besar dari sama dengan 32 
   {
    gotoxy(i, j);cout << char(219);//posisi i=snake
                                   //       j=ekor snake
   }
  }
 }
 for(int i = 1; i <= 24; i++)//membaca i = 1,i kurang dari sama dengan 24,i aan melakukan perulangan  
 {
  for(int k = 1; k <= 80; k += 78)//membaca k = 1, k kurang dari sama dengan 80, k akan menjadi 78
  {
   gotoxy(k, i); cout << char(219);//k = border
                                   //i = snake 
  }
 }
}
//akhir pembuatan garis tepi
//Penulisan Skor
void skor()//fungsi untuk menampilkan skor/terbaru
{
 gotoxy(3,1); cout << "Skor : ";//mencetak kata "skor " sesuai dengan koordinat yang sudah di tentukan 
 gotoxy(18,1); cout << "Panjang : ";//mencetak kata "Panjang" sesuai dengan koordinat yang sudahdi tentukan
}
//Untuk menulis skor terbaru dan panjang dari snake
void tulis_skor()//sebuah fungsi untuk mencetak skor
{
 gotoxy(11,1); cout << (nEkor - 5) * 10; //mencetak nilai skor terbaru sesuai dengan koordinat yang sudah di tentukan
 gotoxy(28,1); cout << nEkor;//menectak nilai panjang terbaru sesuai dengan koordinat yang sudah di tentukan
}

void inisialisasi()//fungsi yang menjalankan beberapa fungsi yang berjalanpada awal program ,hanya sekali
{
 cBorder(); //buat pinggiran game
 random_makanan(); //letakkan makanan secara random
 skor(); //mencetak tulisan skor terbaru di tepi atas
 tulis_skor(); //mencetak skor terbaru
}

int main() //fungsi Utama
{
 system("cls"); //membersihkan layar
 inisialisasi(); //menjalankan fungsi inisialisasi
 while(!(isDestroy())) //selama snake belum rusak atau kalah
  {
   velo(); //merubah posisi snake berdasarkan kecepatan X atau Y
   getkey(); //untuk mendapatkan tombol apa yang ditekan user dan
   //menjalankan beberapa fungsi yang diperlukan
   if(isEaten())//mencek apakah makanan telah dilalap oleh snake
   {
    nEkor += 2; //panjang ekor ditambah 2
    random_makanan(); //makanan diletakkan lagi
    tulis_skor();//skor di update
   }
   Sleep(40 - (nEkor / 10)); //delay yang semakin cepat dengan penambahan ekor
  }
 system("cls"); //layar dibersihkan
 gotoxy(32,12); cout << "Skor : " << (nEkor - 5) * 10; //menampilkan kata "skor" di akhir game dengan koordinat yang sudah di tentukan 
 gotoxy(25,13);//menampilkan sesuai koordinat yang sudah di tentukan
 system("pause"); //selesai
}

