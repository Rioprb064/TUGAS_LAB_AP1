#include <iostream>             // Menyediakan fungsi input/output standar seperti cout dan cin
#include <conio.h>              // Menyediakan fungsi seperti getche() dan getch() untuk input karakter
using namespace std;            // Menghindari penggunaan std:: sebelum fungsi standar

int main()                      // Fungsi utama tempat eksekusi program dimulai
{
    /*untuk komentar 
    beberapa baris*/            

    string nama;                // Variabel string untuk menyimpan nama
    char kom, jenis;            // Variabel karakter untuk menyimpan kode KOM dan jenis kelamin
    int nim;                    // Variabel integer untuk menyimpan NIM
    float ip;                   // Variabel float untuk menyimpan nilai IP (Indeks Prestasi)

    cout<<"Hello world"<<endl; // Menampilkan "Hello world" diikuti baris baru

    cout<<"Masukkan nama : ";  // Menampilkan prompt untuk input nama
    
    //cin>>nama;
    getline(cin,nama);         // Membaca satu baris input termasuk spasi dan menyimpannya ke variabel nama

    cout<<"Masukkan KOM : ";   // Menampilkan prompt untuk input kode KOM
    cin>>kom;                  // Membaca satu karakter untuk kode KOM

    cout<<"Masukkan NIM : ";   // Menampilkan prompt untuk input NIM
    cin>>nim;                  // Membaca input bilangan bulat ke variabel nim

    cout<<"Masukkan IP : ";    // Menampilkan prompt untuk input IP
    cin>>ip;                   // Membaca angka desimal ke variabel ip

    cout<<"Masukkan jenis kelamin (L/P) : "; // Menampilkan prompt untuk input jenis kelamin
    jenis=getche();            // Membaca satu karakter dan langsung menampilkannya tanpa menunggu Enter

    //untuk output
    cout<<"\n"<<nama<<endl;    // Menampilkan nama dengan baris baru
    cout<<kom<<endl;           // Menampilkan kode KOM diikuti baris baru
    cout<<nim<<endl;           // Menampilkan NIM diikuti baris baru
    cout<<ip<<endl;            // Menampilkan IP diikuti baris baru
    putchar(jenis);            // Menampilkan jenis kelamin sebagai karakter

    getch();                   // Menunggu karakter tanpa menampilkannya di layar
}
