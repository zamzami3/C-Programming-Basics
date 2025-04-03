// PRAKTIKUM 21 STRING 1

//Percobaan di teori
/*#include <stdio.h>
#define MAKS 5
int main(){
    //char kar = 'A';
    char nama[MAKS];

    //printf("Karakternya = %c\n", kar);
    printf("Masukkan nama Anda : ");
    gets(nama);

    printf("\nNama Anda = %s\n", nama);
    //printf("Karakternya = %c\n", kar);

    return 0;
} */

//Nomor 1 pakai scanf()
/*#include <stdio.h>
int main() {
    char nama[256];

    printf("Masukkan nama: ");
    scanf ("%s", nama);

    printf("Nama yang dimasukkan user: %s\n", nama);
} */

// Nomor 1 pakai gets()
/*#include <stdio.h>
int main () {
    char kalimat[256];

    printf ("Masukkan kalimat: ");
    gets(kalimat);

    printf ("\nKalimat yang dimasukkan: %s", kalimat);
    return 0;
} */

//Nomor 1 yang fgets
/*#include <stdio.h>

int main() {
    char hewan[256];

    puts("Sebutkan nama-nama hewan: ");

    fgets(hewan, sizeof hewan, stdin);

    printf("Kalimat yang dimasukkan user = %s\n", hewan);
return 0;
} */

// Nomor 2
/*#include <stdio.h>
#define MAKS 256
int panjangstring(int jumlah) {
    int i, jumkar = 0;
    char teks[MAKS];

    for(int i=0; teks[i]!= '\0'; i++) {
        jumkar++;
    }
    return jumlah;
}

int main () {
    int i, jumkar = 0;
    char teks[MAKS];

    puts("Masukkan suatu kalimat <256 karakter");
    puts("Saya akan menghitung jumlah karakternya\n");
    fgets(teks, sizeof teks, stdin);

    int jumlah = panjangstring(jumlah);
    printf("\nJumlah karakter = %d\n", jumlah);
    return 0;
}*/

/*#include <stdio.h>
#include <string.h> // Perlu menyertakan header string.h untuk menggunakan strlen

#define MAKS 256

int panjangstring(char teks[]) { // Menerima string sebagai parameter
    int jumkar = 0;

    for(int i = 0; teks[i] != '\0'; i++) {
        jumkar++;
    }
    return jumkar; // Mengembalikan jumlah karakter
}

int main() {
    char teks[MAKS];

    puts("Masukkan suatu kalimat <256 karakter");
    puts("Saya akan menghitung jumlah karakternya\n");
    fgets(teks, sizeof(teks), stdin);

    // Menggunakan strlen untuk menghitung panjang string
    int jumlah = panjangstring(teks);
    printf("\nJumlah karakter = %d\n", jumlah);
    return 0;
}*/


// Nomor 3
#include <stdio.h>
#define MAKS 256
int panjangstring(int jumlah) {
    int i, jumkar = 0;
    char teks[MAKS];

    for(int i=0; teks[i]!= '\0'; i++) {
        jumkar++;
    }
    return jumlah;
}
void balikstring(char teks[MAKS]) {
    int i, j;
    char a;

    for (i = 0; teks[i] != '\0'; i++);
    for (j = 0; j < i / 2; j++) {
        a = teks[i - j - 1];
        teks[i - j - 1] = teks[j];
        teks[j] = a;
    }
}
int main () {
    char teks[MAKS];

    puts("Masukkan suatu kalimat <256 karakter");
    puts("Karakter akan dihitung dan dibalik");
    fgets(teks, sizeof teks, stdin);

    char jumlah = panjangstring(teks);
    balikstring(teks);
    printf("\nJumlah karakter dengan spasi = %d\n", jumlah);
    printf("Hasil string yang dibalik: %s", teks);
    return 0;
}


// NOMOR 4
/*#include <stdio.h>
void copystring (char kalimatawal[], char kalimatakhir[]) {
    int i = 0;

    while(kalimatawal[i] != kalimatakhir[i]){
        kalimatakhir[i] = kalimatawal[i];
        i++;
    }
}

int main() {
    int i;
    char kalimatawal[256], kalimatakhir[256];

    printf ("Masukkan kalimat yang akan ditampilkan lagi: ");
    gets (kalimatawal);

    copystring (kalimatawal, kalimatakhir);
    printf("Kalimat yang sudah di-copy: %s", kalimatakhir);

    return 0;
} */
