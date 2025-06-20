#include <iostream>                                         // Menyertakan pustaka standar untuk input dan output
using namespace std;                                        // Menggunakan namespace std agar tidak perlu menulis std::

void sapa(string nama) {                                    // Mendeklarasikan fungsi bernama sapa yang menerima parameter string
    cout<<"Halo "<<nama<<"! Selamat belajar C++!"<<endl;    // Menampilkan pesan sapaan ke layar
}

int main() {                                                // Fungsi utama tempat program dijalankan
    string namaPengguna = "Rio";                            // Mendeklarasikan variabel string dan menginisialisasinya dengan "Rio"

    sapa(namaPengguna);                                     // Memanggil fungsi sapa dengan argumen namaPengguna

    return 0;                                               // Mengembalikan nilai 0 sebagai penanda program selesai dengan sukses
}
