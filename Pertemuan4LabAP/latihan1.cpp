#include <iostream>                                         // Menyertakan pustaka standar untuk input dan output
using namespace std;                                        // Menggunakan namespace std agar tidak perlu menulis std::

int main () {                                               // Fungsi utama tempat program dijalankan
    string kalimat;                                         // Deklarasi variabel bertipe string untuk menyimpan kalimat
    int i;                                                  // Deklarasi variabel integer sebagai penghitung dalam perulangan

    cout << "Masukkan kalimat : ";                          // Menampilkan prompt untuk input kalimat
    getline(cin, kalimat);                                  // Membaca satu baris input, termasuk spasi, ke variabel kalimat

    for(i = 0; i < kalimat.length(); i++) {                 // Perulangan dari indeks 0 hingga panjang kalimat
        kalimat[i] = toupper(kalimat[i]);                   // Mengubah setiap karakter dalam kalimat menjadi huruf kapital
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl; // Menampilkan kalimat yang sudah dikonversi ke huruf kapital

    return 0;                                               // Mengembalikan nilai 0 sebagai indikator program selesai
}
