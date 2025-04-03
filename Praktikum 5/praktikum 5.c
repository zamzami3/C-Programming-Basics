// PRAKTIKUM 5

// SOAL PERCOBAAN NOMOR 1
/* #include <stdio.h>

int main() {

    int bilangan;

    printf ("Masukkan bilangan  = ");
    scanf ("%d", &bilangan);

    if (bilangan >=0){
    printf ("Nilai a positif");
    } else {
    printf ("NIlai a negatif");
   }

return 0;
}
*/

// SOAL PERCOBAAN NOMOR 2

/* #include <stdio.h>

int main() {

    int angka;

    printf ("Masukkan angka  = ");
    scanf ("%d", &angka);

    if (angka % 2 == 0){
            printf ("angka yang dimasukkan merupakan angka genap");
        } else {
        printf ("angka yang dimasukkan merupakan angka ganjil");
    }

return 0;
}
*/

// SOAL PERCOBAAN NOMOR 3

/* #include <stdio.h>

int main() {

    int harga, total;

    printf ("Masukkan harga total pembelian = ");
    scanf ("%d", &harga);

    if (harga < 100000){
        printf ("Anda akan mendapat diskon jika pembelian > Rp 100.000\n");
        printf ("Total pembelian = %d", harga);
        }

    else (harga >= 100000); {
            total = harga - (harga * 0.05);
        printf ("Selamat! anda mendapatkan diskon 5 persen dari total pembayaran\n");
        printf ("Total harga yang akan dibayar = %d", total);
    }

return 0;
}
*/

// SOAL PERCOBAAN NOMOR 4

/* #include <stdio.h>

int main() {

    int bilangan;

    printf ("Masukkan dua bilangan ... dan ... = ");
    scanf ("%d", &bilangan);

    if (bilangan % 2 == 0){
            printf ("bilangan pertama merupakan kelipatan persekutuan kedua");
    } else {
        printf ("bilangan kedua merupakan kelipatan persekutuan kedua");
    }

return 0;
}
*/

//  NOMOR 5 SOAL PERCOBAAN

#include <stdio.h>

float main() {

    float bilanganpertama, bilangankedua, hasil;

    printf ("Ketik bilangan bulat pertama ");
    scanf ("%f", &bilanganpertama);

    printf ("Ketik bilangan bulat kedua ");
    scanf ("%f", &bilangankedua);

    hasil = bilanganpertama / bilangankedua;

    if (bilangankedua == 0) {
        printf ("Pesan kesalahan jika bilangan kedua nol dan tidak terdefinisi");
    }else{
        printf ("Hasil dari bilangan tersebut adalah %.3f",hasil);
    }
return 0;
}


// NOMOR 3 LAPORAN RESMI

/* #include <stdio.h>

int main () {
    int bilangan;

    printf ("Masukkan bilangan positif atau negatif ");
    scanf ("%d", &bilangan);

    if (bilangan < 0){
    printf ("Bilangan absolutnya = %d", abs (bilangan * (-1)));
    }

    else {
        printf ("Bilangan absolutnya = %d", bilangan);
    }

return 0;
}
*/
