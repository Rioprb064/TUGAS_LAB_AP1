#include <iostream>                             // Menyertakan pustaka untuk input/output standar
using namespace std;                            // Menggunakan namespace std agar tidak perlu menulis std::

int main()                                      // Fungsi utama tempat eksekusi program dimulai
{
    float r, volume, luas;                      // Deklarasi variabel bertipe float untuk jari-jari, volume, dan luas
    const float pi = 3.14;                      // Mendefinisikan konstanta pi bernilai 3.14

    cout<<"Masukkan jari-jari bola : ";         // Menampilkan prompt untuk memasukkan jari-jari
    cin>>r;                                     // Menerima input nilai jari-jari dari pengguna

    volume =  (float)4 / (float)3 * pi * r * r * r; // Menghitung volume bola dengan rumus 4/3 × π × r³
    luas = 4 * pi * r * r;                      // Menghitung luas permukaan bola dengan rumus 4 × π × r²

    cout<<"Volume adalah : "<<volume<<endl;     // Menampilkan hasil perhitungan volume
    cout<<"Luas permukaan adalah : "<<luas<<endl; // Menampilkan hasil perhitungan luas permukaan
}
