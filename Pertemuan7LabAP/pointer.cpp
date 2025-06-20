#include <iostream>                                    // Menyertakan pustaka standar untuk input dan output
using namespace std;                                   // Menggunakan namespace std agar tidak perlu menulis std::

void penjumlahan(int a, int b) {                       // Mendefinisikan fungsi penjumlahan dengan dua parameter integer
    cout << a + b << endl;                             // Menampilkan hasil penjumlahan a dan b diakhiri baris baru
}

void penjumlahanPointer(int *a, int *b) {              // Mendefinisikan fungsi penjumlahan menggunakan pointer
    *a += *b;                                          // Menambahkan nilai yang ditunjuk pointer b ke pointer a
    cout << *a << endl;                                // Menampilkan nilai pointer a yang telah ditambahkan
}

void doubleValue(int *a) {                             // Mendefinisikan fungsi untuk menggandakan nilai integer melalui pointer
    *a *= 2;                                           // Mengalikan nilai yang ditunjuk pointer a dengan 2
    cout << *a << endl;                                // Menampilkan nilai hasil perkalian
}

int main() {                                           // Fungsi utama tempat program dieksekusi
    system("cls");                                     // Membersihkan layar konsol (khusus Windows)

    //Deklarasi Pointer
    int number = 35;                                   // Deklarasi variabel integer number dengan nilai 35
    int *pointer_number = &number;                     // Deklarasi pointer yang menunjuk ke alamat variabel number

    // cout << "Isi variabel number = " << number << endl;                                      // Menampilkan isi number
    // cout << "Alamat memori variabel number = " << &number << endl;                           // Menampilkan alamat memori number
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;                      // Menampilkan isi pointer_number
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;  // Menampilkan isi dari alamat yang ditunjuk
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;           // Menampilkan alamat dari pointer_number

    //Pointer operation
    // *pointer_number = 25;                                                                    // Mengubah nilai number melalui pointer menjadi 25
    // cout << "Isi variabel number = " << number << endl;                                      // Menampilkan isi number setelah diubah
    // cout << "Alamat memori variabel number = " << &number << endl;                           // Menampilkan alamat memori number
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;                      // Menampilkan isi pointer_number
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;  // Menampilkan nilai yang ditunjuk
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;           // Menampilkan alamat dari pointer_number

    //Pointer in array
    // int num[] = {1, 2, 3, 4, 5};                                                             // Mendeklarasikan array integer num
    // int *pointer_num = num;                                                                  // Pointer menunjuk ke elemen pertama array num
    // cout << "Isi variabel num = " << num[0] << endl;                                         // Menampilkan elemen pertama num
    // cout << "Alamat memori variabel num = " << &num[3] << endl;                              // Menampilkan alamat elemen ke-4
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;                            // Menampilkan isi pointer_num
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;        // Menampilkan nilai elemen pertama
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;                 // Menampilkan alamat pointer_num

    // *pointer_num += 5;                                                                       // Menambahkan 5 ke nilai pada indeks 0 array num
    // cout << "Isi variabel num = " << num[0] << endl;                                         // Menampilkan nilai num[0] setelah ditambahkan
    // cout << "Alamat memori variabel num = " << &num[3] << endl;                              // Menampilkan alamat elemen ke-4
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;                            // Menampilkan isi pointer_num
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;        // Menampilkan nilai baru elemen pertama
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;                 // Menampilkan alamat pointer_num

    //Pointer in parameter
    // int num1 = 5;                                                            // Deklarasi dan inisialisasi num1
    // int num2 = 7;                                                            // Deklarasi dan inisialisasi num2
    // penjumlahan(num1, num2);                                                 // Memanggil fungsi penjumlahan
    // cout << num1 << endl;                                                    // Menampilkan nilai num1
    // cout << num2 << endl;                                                    // Menampilkan nilai num2
    // penjumlahanPointer(&num1, &num2);                                        // Memanggil fungsi penjumlahanPointer
    // cout << num1 << endl;                                                    // Menampilkan nilai num1 setelah diubah
    // cout << num2 << endl;                                                    // Menampilkan nilai num2 (tetap)

    // int score = 4;                                                           // Deklarasi dan inisialisasi variabel score
    // int *pointer_score = &score;                                             // Pointer menunjuk ke score
    // int **ptr_pointer_score = &pointer_score;                                // Pointer ke pointer yang menunjuk ke score

    // cout << "Isi variaber score " << score << " dan alamat memorinya " << &score << endl;            // Menampilkan score dan alamatnya
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang dotunjuk oleh pointer score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << pointer_score << " dan isi variabel yang dotunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_pointer_score " << &ptr_pointer_score << endl;

    //Dynamic pointer
    // int *ptr = new int;                                                                      // Alokasi dinamis untuk satu integer
    // *ptr = 30;                                                                               // Menyimpan nilai 30 ke dalam alamat yang ditunjuk oleh ptr
    // cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;      // Menampilkan isi dan alamat ptr
    
    // delete ptr;                                                                              // Menghapus alokasi memori dinamis
    // cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;      // Menampilkan isi setelah dealokasi

    int n;                                                                       // Deklarasi variabel n
    cout << "Masukkan sebuah angka = ";                                          // Menampilkan prompt input
    cin >> n;                                                                    // Menerima input angka dari pengguna

    doubleValue(&n);                                                             // Memanggil fungsi untuk menggandakan nilai n menggunakan pointer
}
