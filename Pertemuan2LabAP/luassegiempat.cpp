#include <iostream>                 // Menyertakan pustaka standar untuk input dan output
using namespace std;                // Menggunakan namespace standar agar tidak perlu menulis std::

int main()                          // Fungsi utama tempat eksekusi program dimulai
{
    float luas, p, l;               // Deklarasi variabel float untuk menyimpan nilai luas, panjang, dan lebar

    cout<<"Masukkan panjang : ";    // Menampilkan teks prompt untuk meminta input panjang
    cin>>p;                         // Menerima input panjang dari pengguna dan menyimpannya ke variabel p

    cout<<"Masukkan lebar : ";      // Menampilkan teks prompt untuk meminta input lebar
    cin>>l;                         // Menerima input lebar dari pengguna dan menyimpannya ke variabel l

    luas = p*l;                     // Menghitung luas dengan mengalikan panjang dan lebar
    cout<<"luas = "<<luas<<endl;    // Menampilkan hasil perhitungan luas

    return 0;                       // Mengembalikan nilai 0 yang menandakan program selesai dengan sukses
}
