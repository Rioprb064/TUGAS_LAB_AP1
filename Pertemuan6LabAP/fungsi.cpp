#include <iostream>                                               // Menyertakan pustaka standar untuk input dan output
using namespace std;                                              // Menggunakan namespace std agar tidak perlu menulis std::

//Fungsi tanpa nilai balikan
void tampilkanPesan() {                                           // Mendefinisikan fungsi tanpa nilai balikan bernama tampilkanPesan
    cout<<"==== SELAMAT DATANG DI AP 1 ===="<<endl;               // Menampilkan pesan selamat datang ke layar
}

//Fungsi dengan nilai balikan
int tambah(int a, int b) {                                        // Mendefinisikan fungsi bernama tambah yang mengembalikan hasil penjumlahan dua bilangan
    return a + b;                                                 // Mengembalikan nilai hasil penjumlahan a dan b
}

//Fungsi Overload
int kali (int a, int b) {                                         // Mendefinisikan fungsi overload bernama kali untuk tipe integer
    return a * b;                                                 // Mengembalikan nilai hasil perkalian a dan b
}

double kali (double a, double b) {                                // Mendefinisikan fungsi overload bernama kali untuk tipe double
    return a * b;                                                 // Mengembalikan nilai hasil perkalian a dan b dalam bentuk double
}

//Fungsi Rekursif : menghitung nilai faktorial
int faktorial(int n) {                                            // Mendefinisikan fungsi rekursif untuk menghitung faktorial
    if (n == 0 || n == 1) {                                       // Basis rekursi: jika n sama dengan 0 atau 1
        return 1;                                                 // Mengembalikan 1 sebagai hasil faktorial dari 0 atau 1
    } else {                                                      // Kasus rekursif
        return n * faktorial(n-1);                                // Mengembalikan hasil n dikali faktorial dari n - 1
    }
}

int main() {                                                      // Fungsi utama tempat program dijalankan
    system("cls");                                                // Membersihkan layar konsol

    //menggunakan fungsi tanpa nilai balikan
    tampilkanPesan();                                             // Memanggil fungsi tampilkanPesan untuk menampilkan pesan

    int x=5, y=3;                                                 // Mendeklarasikan dua variabel integer x dan y dengan nilai 5 dan 3
    //menggunakan fungsi dengan nilai balikan
    int hasilTambah = tambah(x, y);                               // Memanggil fungsi tambah dan menyimpan hasilnya ke variabel hasilTambah
    cout<<"Hasil penjumlahan : "<<hasilTambah<<endl;              // Menampilkan hasil penjumlahan ke layar

    //Menggunakan fungsi overload
    int hasilKaliint = kali(x, y);                                // Memanggil fungsi kali (int) dan menyimpan hasilnya ke hasilKaliint
    double hasilKaliDouble = kali (5.5, 2.0);                     // Memanggil fungsi kali (double) dan menyimpan hasilnya ke hasilKaliDouble
    cout<<"Hasil perkalian (int) : "<<hasilKaliint<<endl;         // Menampilkan hasil perkalian bertipe int
    cout<<"Hasil perkalian (double) : "<<hasilKaliDouble<<endl;   // Menampilkan hasil perkalian bertipe double

    //menggunakan fungsi rekursif
    int angka = 5;                                                // Mendeklarasikan variabel angka dengan nilai 5
    cout<<"Faktorial dari "<<angka<<" adalah : "<<faktorial(angka)<<endl; // Menampilkan hasil perhitungan faktorial dari angka

    return 0;                                                     // Mengembalikan nilai 0 sebagai penanda program selesai dengan sukses
}
