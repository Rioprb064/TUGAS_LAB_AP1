#include <stdio.h>      // Header untuk fungsi input-output standar seperti printf, scanf, dll
#include <conio.h>      // Header khusus untuk sistem DOS/Windows, berisi fungsi seperti getch (tidak selalu diperlukan)

int main ()             // Fungsi utama tempat eksekusi program dimulai
{
    char nama[50];      // Deklarasi array karakter untuk menyimpan nama (maks 49 karakter + '\0')
    int nim;            // Variabel untuk menyimpan NIM
    char kom[2];        // Array karakter untuk menyimpan kode KOM 
    float ip;           // Variabel untuk menyimpan nilai IP (Indeks Prestasi)

    printf("Hello world\n");  // Menampilkan output Hello world

    printf("Masukkan Nama : ");   
    gets(nama);         // Menerima input string dari user untuk nama 

    printf("Masukkan NIM : ");
    scanf("%d", &nim);  // Menerima input bilangan bulat untuk NIM

    getchar();          // Menyerap newline character setelah scanf agar tidak mengganggu gets berikutnya

    printf("Masukkan kom : ");
    gets(kom);          // Menerima input kode KOM

    printf("Masukkan IP : ");
    scanf("%f", &ip);   // Menerima input angka desimal (float) untuk IP

    /* untuk output */

    printf("Nama : ");
    puts(nama);         // Menampilkan string nama ke layar diikuti newline

    printf("NIM : %d\n", nim);    // Menampilkan NIM

    printf("KOM : ");
    puts(kom);          // Menampilkan kode KOM diikuti newline

    printf("IP  : %f\n", ip);     // Menampilkan IP dalam format float
}
