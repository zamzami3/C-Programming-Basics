// PRAKTIKUM 11

// NOMOR 1 SOAL PERCOBAAN

/* #include <stdio.h>
#include <stdlib.h>

int main() {
    char karakter = ' ';

    printf ("Masukkan karakter = \n");

    while (karakter != '\n') {
        scanf ("%c", &karakter);
        fflush (stdin);

        if (karakter == '\n') {
        break;
        }
        printf ("User telah memasukkan = %c\n", karakter);
    }
    printf ("Program telah berakhir karena user menginput ENTER");
    return 0;
} */


//NOMOR 2 SOAL PERCOBAAN
/* #include <stdio.h>
#include <stdlib.h>

int main (){
    int i, angka = 0;

    printf ("Masukkan jangkauan angka = ");
    scanf ("%d", &angka);

    for (i = 1; i <= angka; i++) {

        if (i % 2 == 0 || i % 3 == 0) continue;

        printf ("%d\n", i);
    }

    printf ("Bilangan yang ditampilkan = %d", angka);
    return 0;
} */

// NOMOR 3 SOAL PERCOBAAN
/* #include <stdio.h>
#include <stdlib.h>

int main (){
    int i, angka = 0;

    printf ("Masukkan jangkauan angka = ");
    scanf ("%d", &angka);

    for (i = 1; i <= angka; i++) {
        if (i % 2 == 0) {
            continue;
        }

        if (i % 7 == 0 || i % 11 == 0) {
            continue;
        }
        if (i > 100) {
            break;
        }

        printf ("%d\n", i);
    }
    return 0;
} */

// NOMOR 4
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    int i, jmldata, nilai, nilaimaksimum = 0, nilaiminimum = 9999999;
    float totalnilai = 0, ratarata;

    printf("Masukkan jumlah data = ");
    scanf("%d", &jmldata);

    for (i = 1; i <= jmldata; i++) {

        printf("Masukkan nilai ke %d = ", i);
        scanf("%d", &nilai);

        totalnilai += nilai;
        ratarata = totalnilai / jmldata;

        if (nilai < nilaiminimum) {
            nilaiminimum = nilai;
        }

        if (nilai > nilaimaksimum) {
            nilaimaksimum = nilai;
        }
    }

        printf ("Total nilai nya yaitu = %.2f\n", totalnilai);
        printf("Nilai minimum nya adalah = %d\n", nilaiminimum);
        printf("Nilai maksimum nya adalah = %d\n", nilaimaksimum);
        printf("Total nilai rata-rata yaitu = %.2f\n", ratarata);

} */

// NOMOR 5
/* #include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, jangkauan;

    printf ("Masukkan jangkauan = ");
    scanf ("%d", &jangkauan);

    for (j = 1; j <= jangkauan; j++) {
        for (i = 1; i <= jangkauan; i++){
            printf (" %d\t", i);
        }
    printf ("%d\n", j);
    }
    return 0;
} */

// NYOBA
#include <stdio.h>


int main () {
    char jawab;
    do {
        int i;
        for (i = 1; i <= 3; i++){
            printf ("%d\t", i);
        }
        printf ("\n");
        printf ("Apakah ingin mengulang lagi? (y/t)");
        scanf ("%c", &jawab);
        fflush (stdin);
    } while (jawab == 'y');
    printf ("selesai\n");
}
// NOMOR 6
/* #include <stdio.h>
#include <stdlib.h>
int main (){
    int i, j, jangkauan;

    printf ("Masukkan jangkauan dari user = ");
    scanf ("%d", &jangkauan);

    for (j = 1; j <= jangkauan; j++){
        for (i = 1; i <= j; i++){
            printf ("%d\t", i);
        }
        printf ("\n");
    }
    return 0;
} */

// NOMOR 7 Bagian nomor 3
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    int i, angka = 0;
    char jawab;

    do {
        printf("Masukkan jangkauan angka = ");
        scanf("%d", &angka);

        for (i = 1; i <= angka; i++) {
            if (i % 2 == 0) {
                continue;
            }
            if (i % 7 == 0 || i % 11 == 0) {
                continue;
            }
            if (i > 100) {
                break;
            }
            printf("%d\n", i);
        }

        printf("Apakah Anda ingin keluar dari program? (y/t): ");
        scanf(" %c", &jawab);
        fflush(stdin);

    } while (jawab != 'y');

    printf("Keluar dari program");

    return 0;
} */

// NOMOR 7 Bagian nomor 4
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    int i, jmldata, nilai, nilaimaksimum = 0, nilaiminimum = 9999999;
    float totalnilai = 0, ratarata;
    char jawab;

    do {
        printf("Masukkan jumlah data = ");
        scanf("%d", &jmldata);

        for (i = 1; i <= jmldata; i++) {

            printf("Masukkan nilai ke %d = ", i);
            scanf("%d", &nilai);

            totalnilai += nilai;
            ratarata = totalnilai / jmldata;

            if (nilai < nilaiminimum) {
                nilaiminimum = nilai;
            }

            if (nilai > nilaimaksimum) {
                nilaimaksimum = nilai;
            }
        }
            printf ("Total nilai nya yaitu = %.2f\n", totalnilai);
            printf("Nilai minimum nya adalah = %d\n", nilaiminimum);
            printf("Nilai maksimum nya adalah = %d\n", nilaimaksimum);
            printf("Total nilai rata-rata yaitu = %.2f\n", ratarata);

        printf("Apakah Anda ingin keluar dari program? (y/t): ");
        scanf(" %c", &jawab);
        fflush(stdin);
    } while (jawab != 'y');

    printf ("Keluar dari program");
return 0;
} */

// NOMOR 7 Bagian nomor 5
/* #include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, jangkauan;
    char jawab;

    do {
        printf ("Masukkan jangkauan = ");
        scanf ("%d", &jangkauan);

        for (j = 1; j <= jangkauan; j++) {
            for (i = 1; i <= jangkauan; i++){
                printf (" %d\t", i);
            }
        printf ("%d\n", j);
        }
        printf("Apakah Anda ingin keluar dari program? (y/t): ");
        scanf(" %c", &jawab);
        fflush(stdin);

    } while (jawab != 'y');

    printf ("Keluar dari program");
    return 0;
} */

// NOMOR 7 Bagian nomor 6
/* #include <stdio.h>
#include <stdlib.h>
int main (){
    int i, j, jangkauan;
    char jawab;

    do {
        printf ("Masukkan jangkauan dari user = ");
        scanf ("%d", &jangkauan);

        for (j = 1; j <= jangkauan; j++){
            for (i = 1; i <= j; i++){
                printf ("%d\t", i);
            }
            printf ("\n");
        }
        printf("Apakah Anda ingin keluar dari program? (y/t): ");
        scanf(" %c", &jawab);
        fflush(stdin);

    } while (jawab != 'y');

    printf ("Keluar dari program");
    return 0;
} */


// LAPORAN RESMI NOMOR 3 BELUM BISA
/* #include <stdio.h>
#include <stdlib.h>

int main () {
    int i, bilangan, pembagi = 0;

    printf ("Masukkan jumlah tampilan bilangan prima = ");
    scanf ("%d", &bilangan);

    for (int i = 2; i < bilangan; i++) {

        if (bilangan % i == 0) {
            pembagi++;
            break;
        }
    }

    if (pembagi == 0 && bilangan > 1) {
        printf ("%d adalah bilangan prima")
    }
return 0;
} */

/* #include <stdio.h>

int main() {
    int n;

    printf("Masukkan jumlah tampilan bilangan prima: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Masukkan nilai n yang lebih besar dari 0.\n");
        return 1;
    }

    printf("Bilangan prima pertama %d: 2", n);

    int count = 1; // Sudah menemukan bilangan prima 2
    int bilangan = 3; // Mulai dari bilangan 3

    while (count < n) {
        int is_prime = 1;

        // Cek apakah bilangan adalah prima
        for (int i = 2; i < bilangan; i++) {
            if (bilangan % i == 0) {
                is_prime = 0; // Bukan bilangan prima
                break;
            }
        }

        if (is_prime) {
            printf(" %d", bilangan);
            count++;
        }

        bilangan += 2; // Hanya memeriksa bilangan ganjil
    }

    printf("\n");

    return 0;
} */
