#include <iostream>                                      // Menyertakan pustaka standar untuk input dan output
using namespace std;                                     // Menggunakan namespace std agar tidak perlu menulis std::

int main()                                               // Fungsi utama tempat dimulainya eksekusi program
{
    int nilai;                                           // Deklarasi variabel integer untuk menyimpan nilai

    system("cls");                                       // Membersihkan layar konsol (khusus sistem Windows)

    cout<<"Masukkan nilai : ";                           // Menampilkan teks prompt ke layar
    cin>>nilai;                                          // Menerima input dari pengguna dan menyimpannya di variabel nilai

    //if statement
    //if (nilai <= 65){                                  // Mengecek apakah nilai kurang dari atau sama dengan 65
    //    cout<<"Anda tidak lulus"<<endl;                // Menampilkan pesan jika kondisi terpenuhi
    //} 

    //if-else statement
    //if (nilai <= 65){                                  // Mengecek apakah nilai kurang dari atau sama dengan 65
    //    cout<<"Anda tidak lulus"<<endl;                // Menampilkan pesan jika kondisi terpenuhi
    //} else {                                           // Jika kondisi tidak terpenuhi
    //    cout<<"Anda Lulus!"<<endl;                     // Menampilkan pesan lain
    //}

    //if else if statement
    //if (nilai==100){                                   // Mengecek apakah nilai sama dengan 100
    //    cout<<"Anda Keceh!"<<endl;                     // Menampilkan pesan khusus nilai 100
    //} else if (nilai<=65) {                            // Mengecek apakah nilai kurang dari atau sama dengan 65
    //    cout<<"Anda tidak lulus"<<endl;                // Menampilkan pesan jika kondisi terpenuhi
    //} else {                                           // Jika tidak memenuhi kondisi sebelumnya
    //    cout<<"Anda lulus!"<<endl;                     // Menampilkan pesan lulus
    //}

    //nested if
    //if (nilai<=65) {                                   // Mengecek apakah nilai kurang dari atau sama dengan 65
    //    cout<<"Anda tidak lulus"<<endl;                // Menampilkan pesan gagal
    //} else {                                           // Jika tidak
    //    if (nilai == 100) {                            // Mengecek apakah nilai sama dengan 100
    //        cout << "Anda lulus dan anda keceh"<<endl; // Menampilkan pesan khusus nilai 100
    //    } else {                                       // Jika tidak
    //        cout<<"Anda lulus"<<endl;                  // Menampilkan pesan lulus
    //    }
    //}

    //switch case
    //switch (nilai) {                                   // Memeriksa nilai sebagai hari dalam seminggu
    //    case 1: cout<<"Senin"<<endl; break;            // Menampilkan Senin jika nilai 1
    //    case 2: cout<<"Selasa"<<endl; break;           // Menampilkan Selasa jika nilai 2
    //    case 3: cout<<"Rabu"<<endl; break;             // Menampilkan Rabu jika nilai 3
    //    case 4: cout<<"Kamis"<<endl; break;            // Menampilkan Kamis jika nilai 4
    //    case 5: cout<<"Jumat"<<endl; break;            // Menampilkan Jumat jika nilai 5
    //    case 6: cout<<"Sabtu"<<endl; break;            // Menampilkan Sabtu jika nilai 6
    //    case 7: cout<<"Minggu"<<endl; break;           // Menampilkan Minggu jika nilai 7
    //    default: cout<<"Inputan tidak valid"<<endl;    // Menampilkan pesan jika input tidak valid
    //}

    //switch range
    //switch(nilai){                                     // Menggunakan nilai untuk menentukan nilai huruf
    //    case 85 ... 100 : cout<<"A"<<endl; break;      // Menampilkan A untuk nilai 85-100
    //    case 80 ... 84 : cout<<"B+"<<endl; break;      // Menampilkan B+ untuk nilai 80-84
    //    case 75 ... 79 : cout<<"B"<<endl; break;       // Menampilkan B untuk nilai 75-79
    //    case 70 ... 74 : cout<<"C+"<<endl; break;      // Menampilkan C+ untuk nilai 70-74
    //    case 65 ... 69 : cout<<"C"<<endl; break;       // Menampilkan C untuk nilai 65-69
    //    case 60 ... 64 : cout<<"D"<<endl; break;       // Menampilkan D untuk nilai 60-64
    //    default : cout<<"E"<<endl; break;              // Menampilkan E untuk nilai di luar rentang di atas
    //}

    //ternary operator
    //if (nilai % 2 == 0) {                              // Mengecek apakah nilai genap
    //    cout<<"Genap nih"<<endl;                       // Menampilkan Genap jika benar
    //} else {                                           // Jika tidak
    //    cout<<"Ganjil cuy"<<endl;                      // Menampilkan Ganjil
    //}

    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";  // Menentukan apakah nilai genap atau ganjil menggunakan operator ternary
    cout<<nilai<<" tuh bilangan "<<checkNum<<" sih "<<endl;   // Menampilkan hasil evaluasi jenis bilangan
}
