#include <iostream>                                          // Menyertakan pustaka standar untuk input dan output
using namespace std;                                         // Menggunakan namespace std agar tidak perlu menulis std::

int main() {                                                 // Fungsi utama tempat program dieksekusi
    string password, sandi, expected = "";                   // Deklarasi variabel string untuk input password, sandi, dan hasil pola

    cout << "Masukkan kata sandi : ";                        // Menampilkan prompt untuk input password
    cin >> password;                                         // Membaca input password dari pengguna

    cout << "Masukkan kata : ";                              // Menampilkan prompt untuk input sandi
    cin >> sandi;                                            // Membaca input sandi dari pengguna

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) {            // Perulangan dari indeks 0 hingga panjang password
        expected += password.substr(0, i + 1);               // Menambahkan potongan password ke expected secara bertahap
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {                                 // Mengecek apakah expected sama dengan sandi
        cout << "Tulisan agen benar" << endl;                // Menampilkan pesan jika cocok
    } else {                                                 // Jika tidak cocok
        cout << "Tulisan agen salah" << endl;                // Menampilkan pesan jika tidak cocok
    }

    return 0;                                                // Mengembalikan nilai 0 sebagai tanda program selesai
}
