#include <iostream>                                     // Menyertakan pustaka standar untuk operasi input/output
using namespace std;                                    // Menggunakan namespace standar agar tidak perlu menulis std::

int main()                                              // Fungsi utama tempat dimulainya eksekusi program
{
    system("cls");                                      // Membersihkan layar konsol (tergantung sistem operasi)

    int bil;                                            // Deklarasi variabel integer bernama 'bil'

    cout<<"Masukkan sebuah bilangan bulat : ";          // Menampilkan prompt untuk meminta input bilangan bulat
    cin>>bil;                                           // Membaca input dari pengguna dan menyimpannya ke variabel 'bil'

    if (bil % 10 == 0){                                 // Mengecek apakah bil habis dibagi 10
        cout<<"Bilangan ini kelipatan 5 dan 10"<<endl;  // Menampilkan jika bil kelipatan 10 (otomatis juga kelipatan 5)
    } else if (bil % 5 == 0) {                          // Jika tidak, mengecek apakah bil habis dibagi 5
        cout<<"Bilangan ini kelipatan 5"<<endl;         // Menampilkan jika bil hanya kelipatan 5
    } else {                                            // Jika tidak memenuhi kondisi di atas
        cout<<"Tidak habis dibagi 5 dan 10"<<endl;      // Menampilkan jika bukan kelipatan 5 maupun 10
    }
}
