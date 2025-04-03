// Praktikum 22

// NOMOR 1.2
/*#include <stdio.h>
#include <string.h>
#define MAKS 256

int main () {
    char teks[MAKS];
    int panjangteks;

    puts("Masukkan teks yang akan dihitung karakternya: ");
    fgets(teks, sizeof teks, stdin);

    panjangteks = strlen (teks);
    printf("Jumlah karakter = %d", panjangteks);
} */
// NOMOR 1.3
#include <stdio.h>
#include <string.h>
#define MAKS 256

int main () {
    char teks[MAKS], balik;

    puts("Masukkan suatu kalimat yang akan dihitung dan dibalik: ");
    fgets(teks, sizeof teks, stdin);

    int panjangteks = strlen (teks);

    printf("\nJumlah karakter dengan spasi = %d\n", panjangteks);
    printf("Hasil string yang dibalik: %s", strrev (teks));
    return 0;
}
// NOMOR 1 4
/*#include <stdio.h>
#include <string.h>
#define MAKS 256

int main() {
    char kalimat[MAKS];

    printf ("Masukkan kalimat yang akan ditampilkan lagi: ");
    gets (kalimat);
    //fgets(kalimat, sizeof kalimat, stdin);

    char copy[MAKS];
    strcpy (copy, kalimat);

    //copy = strcpy(kalimat, kalimat[MAKS]);
    printf("Kalimat yang sudah di-copy: %s", copy);

    return 0;
}*/

// NOMOR 2
/*#include <stdio.h>
#include <string.h>
#define MAKS 256
char bandingstring1 (char kata1[], char kata2[]) {
    return strcmp(kata1, kata2);
}

int main () {
    char kata1[MAKS];
    char kata2[MAKS];

    puts ("Masukkan kata string pertama: ");
    gets (kata1);
    //fgets(kata1, sizeof kata1, stdin);

    puts ("Masukkan kata string kedua: ");
    gets (kata2);

    int hasil_perbandingan = bandingstring1(kata1, kata2);

    printf ("Hasil perbandingan %s dengan %s, yakni %d", kata1, kata2, hasil_perbandingan);
    return 0;
}*/

// NOMOR 3
/*#include <stdio.h>
#include <string.h>
#define MAKS 256
int bandingstring2 (char kata1[], char kata2[]) {
    for (int i = 0; kata1[i] && kata2 [i]; i++) {
        char karakter1 = kata1[i];
        char karakter2 = kata2[i];

        if (karakter1 >= 'A' && karakter1 <= 'Z') {
            karakter1 = karakter1 + ('a' - 'A');
        }
        if (karakter2 >= 'A' && karakter2 <= 'Z') {
            karakter2 = karakter2 + ('a' - 'A');
        }
        if (karakter1 != karakter2) {
            return karakter1 - karakter2;
        }
    }
    return 0;
}
int main () {
    char kata1[MAKS];
    char kata2[MAKS];

    printf ("Masukkan kata string pertama: ");
    gets (kata1);

    printf ("Masukkan kata string kedua: ");
    gets (kata2);

    int perbandingan = bandingstring2(kata1, kata2);

    printf ("Hasil perbandingan %s dengan %s, yakni %d", kata1, kata2, perbandingan);
    return 0;
} */

// NOMOR 4
/*#include <stdio.h>
#include <string.h>
#define MAKS  256
char bandingstring1 (char kata1[], char kata2[]) {
    return strcmp(kata1, kata2);
}
int bandingstring2 (char kata1[], char kata2[]) {
    for (int i = 0; kata1[i] && kata2 [i]; i++) {
        char karakter1 = kata1[i];
        char karakter2 = kata2[i];

        if (karakter1 >= 'A' && karakter1 <= 'Z') {
            karakter1 = karakter1 + ('a' - 'A');
        }
        if (karakter2 >= 'A' && karakter2 <= 'Z') {
            karakter2 = karakter2 + ('a' - 'A');
        }
        if (karakter1 != karakter2) {
            return karakter1 - karakter2;
        }
    }
    return 0;
}
int main () {
    char kata1[MAKS];
    char kata2[MAKS];

    printf ("Masukkan kata string pertama: ");
    gets (kata1);

    printf ("Masukkan kata string kedua: ");
    gets (kata2);

    int perbandingan_case = bandingstring1(kata1, kata2);
    int perbandingan_noncase = bandingstring2(kata1, kata2);

    printf ("Hasil perbandingan CASE SENSITIVE %s dengan %s, yakni %d\n", kata1, kata2, perbandingan_case);
    printf ("Hasil perbandingan NON CASE SENSITIVE %s dengan %s, yakni %d\n", kata1, kata2, perbandingan_noncase);

    return 0;
} */
