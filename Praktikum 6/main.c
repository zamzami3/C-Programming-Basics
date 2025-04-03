// 1. Memasukkan suhu sebuah benda

/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int suhu;

    printf("Masukkkan suhu sebuah benda ");
    scanf ("%d", &suhu);

    if (suhu < 0){
    printf ("Benda berbentuk padat");

    } else if (suhu >=0 && suhu <= 100) {
    printf ("Benda berbentuk cair");

    } else {
    printf ("Benda berbentuk gas");
    }

    return 0;
} */

// 2. Status diterima nya karyawan dan penempatannya

/* #include <stdio.h>

int main () {

    int nilaiakademik, nilaiketerampilan, nilaipsikologi;
    float nilairatarata;

    printf ("Total nilai akademik yang didapat = ");
    scanf ("%d", &nilaiakademik);

    printf ("Total nilai keterampilan yang didapat = ");
    scanf ("%d", &nilaiketerampilan);

    printf ("Total nilai psikologi yang didapat = ");
    scanf ("%d", &nilaipsikologi);

    nilairatarata = (nilaiakademik + nilaiketerampilan + nilaipsikologi) / 3;

    if (nilairatarata >= 75) {

        if(nilaiakademik > nilaiketerampilan && nilaipsikologi){
            printf ("Selamat! Anda diterima dan di tempatkan di bagian administrasi");
        }
        else if(nilaiketerampilan > nilaiakademik && nilaipsikologi){
            printf ("Selamat! Anda diterima dan di tempatkan di bagian produksi");
        }
        else {
            printf("Selamat! Anda diterima dan di tempatkan di bagian pemasaran");
        }

    }else{
        printf ("Nilai rata-rata anda = %.0f dan kurang dari 75\n", nilairatarata);
        printf ("Maaf, anda belum dinyatakan lulus");

    }
return 0;
}*/

// 3. Kalkulator sederhana

/* #include <stdio.h>

int main () {
    int bil1, bil2, menu;
    float pembagian;

    printf ("Masukkan bilangan pertama: ");
    scanf ("%d", &bil1);

    printf ("Masukkan bilangan kedua: ");
    scanf ("%d", &bil2);

    pembagian = bil1 / bil2;

    printf ("Menu Matematika\n");
    printf ("1. Penjumlahan\n");
    printf ("2. Pengurangan\n");
    printf ("3. Pembagian\n");
    printf ("4. Perkalian\n");

    printf ("Masukkan pilihan menu anda: ");
    scanf ("%d", &menu);

    if (menu==1) {
        printf ("Anda memilih Penjumlahan. Hasil operasi tersebut = %d", bil1 + bil2);
    }

    else if (menu==2) {
        printf ("Anda memilih Pengurangan. Hasil operasi tersebut = %d", bil1 - bil2);
    }

    else if (menu==3) {
        printf ("Anda memilih Pembagian. Hasil operasi tersebut = %.2f", pembagian);
    }

    else {
        printf ("Anda memilih Perkalian. Hasil operasi tersbeut = %d", bil1 * bil2);
    }

return 0;
} */


// 4. Mengonversikan nilai angka ke nilai huruf

/* #include <stdio.h>

int main () {
    int nilai_angka;

    printf ("Masukkan nilai angka: ");
    scanf ("%d", &nilai_angka);

    if (nilai_angka <= 40) {
        printf ("Nilai huruf adalah E");
    }

    else if (nilai_angka <= 55) {
        printf ("Nilai huruf adalah D");
    }

    else if (nilai_angka <= 60) {
        printf ("Nilai huruf adalah C");
    }

    else if (nilai_angka <= 80) {
        printf ("Nilai huruf adalah B");
    }

    else {
        printf ("Nilai huruf adalah A");
    }

return 0;
}
*/

//Buat program yang memasukkan bilangan bulat dari pengguna
/* #include <stdio.h>

int main () {
    int hari;

    printf ("1. Minggu\n");
    printf ("2. Senin\n");
    printf ("3. Selasa\n");
    printf ("4. Rabu\n");
    printf ("5. Kamis\n");
    printf ("6. Jumat\n");
    printf ("7. Sabtu\n");

    printf ("Masukkan pilihan hari anda: ");
    scanf ("%d", &hari);

    if (hari == 1) {
        printf ("Anda memilih Minggu");
    }

    else if (hari == 2) {
        printf ("Anda memilih Senin");
    }

    else if (hari == 3) {
        printf ("Anda memilih Selasa");
    }

    else if (hari == 4){
        printf ("Anda memilih Rabu");
    }

    else if (hari == 5) {
        printf ("Anda memilih Kamis");
    }

    else if (hari == 6) {
        printf ("Anda memilih Jumat");
    }

    else if (hari == 7) {
        printf ("Anda memilih Sabtu");
    }

else {
   printf ("Hari tidak valid");
}

return 0;
}
*/
