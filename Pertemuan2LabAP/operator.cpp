#include <iostream>                            // Menyertakan pustaka standar untuk operasi input/output
using namespace std;                           // Menggunakan namespace std agar tidak perlu menulis std::

int main()                                     // Fungsi utama tempat dimulainya eksekusi program
{
    int a,b;                                   // Deklarasi dua variabel integer a dan b

    system("cls");                             // Membersihkan layar konsol (tergantung sistem operasi)

    //4 assignment operator (=)                
    a = 3;                                     // Memberi nilai 3 ke variabel a
    b = 5;                                     // Memberi nilai 5 ke variabel b

    //arithmetical operator (+, -, *, /, %)   

    //int tambah = a + b;                      // Menjumlahkan a dan b, hasil disimpan di tambah
    //int kurang = a - b;                      // Mengurangkan a dengan b, hasil disimpan di kurang
    //int kali = a * b;                        // Mengalikan a dan b, hasil disimpan di kali
    //float bagi = (float)a / (float)b;        // Membagi a dengan b, hasil float disimpan di bagi
    //int modulo = a % b;                      // Mengambil sisa bagi dari a dan b, hasil disimpan di modulo

    //cout<<"Hasil penjumlahan : "<<tambah<<endl;     // Menampilkan hasil penjumlahan
    //cout<<"Hasil pengurangan : "<<kurang<<endl;     // Menampilkan hasil pengurangan
    //cout<<"Hasil perkalian : "<<kali<<endl;         // Menampilkan hasil perkalian
    //cout<<"Hasil pembagian : "<<bagi<<endl;         // Menampilkan hasil pembagian
    //cout<<"Hasil sisa bagi : "<<modulo<<endl;       // Menampilkan hasil modulo

    //relational operator                         
    //cout<<(a==b)<<endl;                         // Menampilkan hasil dari a sama dengan b
    //cout<<(a>b)<<endl;                          // Menampilkan hasil dari a lebih besar dari b
    //cout<<(a>=b)<<endl;                         // Menampilkan hasil dari a lebih besar atau sama dengan b
    //cout<<(a<b)<<endl;                          // Menampilkan hasil dari a lebih kecil dari b
    //cout<<(a<=b)<<endl;                         // Menampilkan hasil dari a lebih kecil atau sama dengan b
    //cout<<(a!=b)<<endl;                         // Menampilkan hasil dari a tidak sama dengan b

    //logical operator (&&, ||, !)               
    //cout << (true && true) << endl;            // Menampilkan hasil AND dari true dan true
    //cout << (true && false) << endl;           // Menampilkan hasil AND dari true dan false
    //cout << (false && true) << endl;           // Menampilkan hasil AND dari false dan true
    //cout << (false && false) << endl;          // Menampilkan hasil AND dari false dan false

    //cout << (true || true) << endl;            // Menampilkan hasil OR dari true dan true
    //cout << (true || false) << endl;           // Menampilkan hasil OR dari true dan false
    //cout << (false || true) << endl;           // Menampilkan hasil OR dari false dan true
    //cout << (false || false) << endl;          // Menampilkan hasil OR dari false dan false

    //cout<<!true<<endl;                         // Menampilkan hasil NOT dari true
    //cout<<!false<<endl;                        // Menampilkan hasil NOT dari false

    //bitwise operator (&, |, ~, ^, <<, >>) --> operasi biner    
    //cout << (5 & 7) << endl;                  // Menampilkan hasil AND biner dari 5 dan 7
    //cout << (5 | 7) << endl;                  // Menampilkan hasil OR biner dari 5 dan 7
    //cout << (5 ^ 7) << endl;                  // Menampilkan hasil XOR biner dari 5 dan 7
    //cout << (~7) << endl;                     // Menampilkan hasil NOT biner dari 7
    //cout << (7 << 2) << endl;                 // Menampilkan hasil shift kiri biner dari 7 sebanyak 2 bit
    //cout << (7 >> 2) << endl;                 // Menampilkan hasil shift kanan biner dari 7 sebanyak 2 bit

    //shorthand                                 
    //a += 7 --> a = a + 7                      // Penjelasan cara kerja a += 7
    //a+=7;                                     // Menambahkan 7 ke a
    //cout<<a<<endl;                            // Menampilkan nilai baru a

    //a-=7;                                     // Mengurangi a dengan 7
    //cout<<a<<endl;                            // Menampilkan nilai baru a

    //a*=7;                                     // Mengalikan a dengan 7
    //cout<<a<<endl;                            // Menampilkan nilai baru a

    //a/=7;                                     // Membagi a dengan 7
    //cout<<a<<endl;                            // Menampilkan nilai baru a

    //increment & decrement                     
    //pre increment
    //cout<<++a<<endl;                          // Menampilkan nilai a setelah ditambah 1 (pre-increment)
    //cout<<b<<endl;                            // Menampilkan nilai b
    //cout<<++b<<endl;                          // Menampilkan nilai b setelah ditambah 1 (pre-increment)
    //cout<<a<<endl;                            // Menampilkan nilai a

    //post increment
    //cout<<a<<endl;                            // Menampilkan nilai a
    //cout<<a++<<endl;                          // Menampilkan nilai a, lalu a bertambah 1 (post-increment)
    //cout<<a<<endl;                            // Menampilkan nilai baru a
    //cout<<b<<endl;                            // Menampilkan nilai b
    //cout<<b++<<endl;                          // Menampilkan nilai b, lalu b bertambah 1 (post-increment)
    //cout<<b<<endl;                            // Menampilkan nilai baru b

    //pre decrement
    //cout<<--a<<endl;                          // Menampilkan nilai a setelah dikurangi 1 (pre-decrement)
    //cout<<a<<endl;                            // Menampilkan nilai a
    //cout<<--b<<endl;                          // Menampilkan nilai b setelah dikurangi 1 (pre-decrement)
    //cout<<b<<endl;                            // Menampilkan nilai b

    //post decrement
    //cout<<a<<endl;                            // Menampilkan nilai a
    //cout<<a--<<endl;                          // Menampilkan nilai a, lalu a dikurangi 1 (post-decrement)
    //cout<<a<<endl;                            // Menampilkan nilai baru a
    //cout<<b<<endl;                            // Menampilkan nilai b
    //cout<<b--<<endl;                          // Menampilkan nilai b, lalu b dikurangi 1 (post-decrement)
    //cout<<b<<endl;                            // Menampilkan nilai baru b
}
