#include <iostream>                                                // Menyertakan pustaka standar untuk input dan output
using namespace std;                                               // Menggunakan namespace std agar tidak perlu menulis std::

int main () {                                                      // Fungsi utama tempat program dijalankan
    string kalimat;                                                // Deklarasi variabel string untuk menyimpan kalimat
    int i;                                                         // Deklarasi variabel integer untuk penghitung dalam perulangan

    cout << "Masukkan kalimat : ";                                 // Menampilkan prompt ke layar untuk input kalimat
    getline(cin, kalimat);                                         // Membaca satu baris input dari pengguna, termasuk spasi

    for(i = 0; i < kalimat.length(); i++) {                        // Perulangan dari indeks 0 hingga sebelum panjang kalimat
        if (kalimat [i] == 'a' || kalimat[i] == 'i' ||             // Mengecek apakah karakter saat ini adalah huruf vokal
            kalimat[i] == 'u' || kalimat[i] == 'e' || 
            kalimat[i] == 'o')
            kalimat[i] = toupper(kalimat[i]);                      // Jika vokal, ubah karakter menjadi huruf kapital
    }

    cout << "Kalimat huruf vokal kapital : " << kalimat << endl;   // Menampilkan kalimat setelah vokalnya diubah ke kapital

    return 0;                                                      // Mengembalikan nilai 0 sebagai tanda program selesai
}
