        // POST TEST LOOPING, 13 OKTOBER 2023 //
                // BARAKALLAHU LI //

// NOMOR 1
// Menghitung output menjadi jarak selisish 1, selisih 2, selisih 3, dan kembali lagi ke selisih 1
// 1 2 4 7 8 10 13 14 16 19 dst.
/* #include <stdio.h>
int main () {
    int i, n;

    printf ("Masukkan batas n = ");
    scanf ("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            i += 1;
        }
        if (i % 2 == 0) {
            i += 1;
        }
        if (i % 3 == 1) {
            i += 2;
        }
        printf ("%d ", i);
    }
    return 0;
} */

// NOMOR 2
// Bilangan sempurna yang faktor pembaginya jika ditambah akan menjadi bilangan yang diinputkan oleh user
// 28 = 1 + 2 + 4 + 7 + 14 = 28 (sempurna)
/* #include <stdio.h>
// int bilsempurna (int bilangan);

int main () {
    int i, bilangan, hasil = 0;

    printf ("Bilangan: ");
    scanf ("%d", &bilangan);

    for (i = 1; i <= bilangan; i++) {
        if (i % 2 == 0 || i % 3 == 0) {
            hasil += i;
        }
        if (i % 5 == 0 || i % 7 == 0) {
            hasil += i;
        }
        if (hasil == bilangan) {
        printf ("%d merupakan bilangan sempurna\n", i);
        }
    }
    printf ("%d merupakan bilangan tidak sempurna\n", i);
    return 0;
} */

// int bilsempurna (int bilangan) {}


// NOMOR 3
// Menghitung bilangan biner yang dimasukkan oleh user
// 1010001 = 81

#include <stdio.h>
// int biner (int bil);

int main () {
    int i, bil, a, hasil = 0;

    printf ("Masukkan bilangan biner 8 bit yang akan dikonversi : ");
    scanf ("%d", &bil);

    for (i = 1; i <= bil; i++) {
        if (bil % 1) {
            a = bil % 1;
            i = a * 128;
        }
        if (bil % 10) {
            a = bil % 10;
            i = i * 64;
        }
        if (bil % 100) {
            i = i * 32;
        }
        if (bil % 1000) {
            i = i * 16;
        }
        if (bil % 10000) {
            i = i * 8;
        }
        if (bil % 100000) {
            i = i * 4;
        }
        if (bil % 1000000) {
            i = i * 2;
        }
        if (bil % 10000000) {
            i = i * 1;
        }
        hasil += i;
        //bil = -bil;
    }
    printf ("Hasil konversi ke desimal: %d", hasil);
    return 0;
}

// int biner (int bil) {}

