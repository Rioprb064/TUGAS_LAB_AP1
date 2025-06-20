#include <iostream>                             // Menyertakan pustaka standar untuk input dan output
using namespace std;                            // Menggunakan namespace std agar tidak perlu menulis std::

string namaGlobal = "Ilmu";                     // Deklarasi variabel global dengan nilai "Ilmu"

void namaVariabel() {                           // Mendefinisikan fungsi bernama namaVariabel
    string namaLokal = "Komputer";              // Deklarasi variabel lokal dengan nilai "Komputer"

    //coba akses
    cout<<namaLokal<<endl;                      // Menampilkan nilai variabel lokal namaLokal

    //coba akses
    cout<<namaGlobal<<endl;                     // Menampilkan nilai variabel global namaGlobal
}

int main() {                                    // Fungsi utama program
    namaVariabel();                             // Memanggil fungsi namaVariabel

    // coba akses
    cout<<namaGlobal<<endl;                     // Menampilkan nilai variabel global namaGlobal

    //coba akses
    //cout<<namaLokal<<endl; //ga bisa          // Baris komentar: mencoba mengakses variabel lokal di luar cakupannya (tidak dapat dilakukan)
}
