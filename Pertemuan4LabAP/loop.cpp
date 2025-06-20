#include <iostream>                                      // Menyertakan pustaka standar untuk input dan output
using namespace std;                                      // Menggunakan namespace std agar tidak perlu menulis std::

int main() {                                              // Fungsi utama tempat eksekusi program dimulai

    // Goto Label                                         // Bagian label dan percabangan menggunakan goto
    // Hello world, Fasilkom-TI, Ilmu Komputer, IKLC      // Urutan cetak semula
    // -> Hello World, IKLC, Ilmu Komputer, Fasilkom-Ti   // Urutan cetak yang dihasilkan dengan goto

    // a:                                                 // Label a
    //     cout<<"Hello World"<<endl;                     // Menampilkan "Hello World"
    //     goto d;                                        // Lompat ke label d
    // b:                                                 // Label b
    //     cout<<"Fasilkom-TI"<<endl;                     // Menampilkan "Fasilkom-TI"
    //     return 0;                                      // Mengakhiri program
    // c:                                                 // Label c
    //     cout<<"Ilmu Komputer"<<endl;                   // Menampilkan "Ilmu Komputer"
    //     goto b;                                        // Lompat ke label b
    // d:                                                 // Label d
    //     cout<<"IKLC"<<endl;                            // Menampilkan "IKLC"
    //     goto c;                                        // Lompat ke label c

    // Menampilkan bilagan genap 10 -> 2 dengan goto      
    // int i = 10;                                        // Inisialisasi variabel i dengan nilai 10
    // genap:                                             // Label genap
    // if(i % 2 == 0) {                                   // Jika i adalah bilangan genap
    //     cout << i << endl;                             // Tampilkan nilai i
    // } i--;                                             // Kurangi nilai i
    // if(i >= 2) {                                       // Jika i masih lebih besar atau sama dengan 2
    //     goto genap;                                    // Lompat ke label genap
    // }

    // Statement While                                    
    // int i = 1;                                         // Inisialisasi variabel i dengan 1
    // while(i <= 10) {                                   // Perulangan selama i kurang dari atau sama dengan 10
    //     if (i % 2 == 0) {                              // Jika i adalah genap
    //         cout << i << " ";                          // Tampilkan nilai i
    //     } i++;                                         // Tambah nilai i
    // }

    // Statement Do-While                                 
    // int i = 1;                                         // Inisialisasi variabel i dengan 1
    // do {                                               // Blok yang dijalankan setidaknya sekali
    //     cout << i << endl;                             // Tampilkan nilai i
    // } while (i <= 0);                                  // Ulangi selama i kurang dari atau sama dengan 0

    // Statement for                                      
    // for (inisialisasi, kondisi, increase)              // Format umum perulangan for
    // for (int i = 1; i <= 10; i+=2) {                   // Perulangan dari 1 hingga 10 dengan kelipatan 2
    //     cout << "Hello World" << endl;                 // Menampilkan "Hello World"
    // }

    // Nested for                                         
    // ***** 5 x 5                                        // Menampilkan pola 5 baris dan 5 kolom bintang
    // for (int i = 1; i <= 5; i++) {                     // Perulangan baris
    //     for (int j = 1; j <= 5; j++) {                 // Perulangan kolom
    //         cout << " * ";                             // Menampilkan bintang
    //     }
    //     cout << endl;                                  // Pindah baris setelah satu baris selesai
    // } 

    // Segitiga siku-siku                                 
    // for (int i = 1; i <= 5; i++) {                     // Perulangan baris
    //     for (int j = 1; j <= i; j++) {                 // Perulangan kolom dari 1 hingga nilai i
    //         cout << "* ";                              // Menampilkan bintang
    //     }
    //     cout << endl;                                  // Pindah ke baris berikutnya
    // }
}
