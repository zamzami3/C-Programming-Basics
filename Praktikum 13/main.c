//  PRAKTIKUM 13

// Percobaan dari PPT
/* #include <stdio.h>
int minimum (int, int);
main() {

int a, b, kecil;
printf("Masukkan nilai a : ");
scanf("%d", &a);
printf("Masukkan nilai b : ");
scanf("%d", &b);
kecil = minimum(a, b);
printf("\nBilangan terkecil antara %d dan %d adl %d\n\n",a,b,kecil);

}
minimum(int x, int y) {

if (x < y)

return(x);

else

return(y);

} */

// NOMOR 1 SOAL PERCOBAAN (NYOBA DOANG)
/* #include <stdio.h>

void menu ();

int main () {
menu();
}

void menu () {
printf ("Pilihan menu ");
} */

//NOMOR 1
/* #include <stdio.h>

//fungsi prototype
void menu (void);

//fungsi main
int main () {
    char jawab;

    do {
        menu();

        printf ("Ingin keluar dari program? (y/t): ");
        scanf (" %c", &jawab);
        fflush (stdin);

    } while (jawab != 'y');

    printf ("Anda telah keluar dari program");

    return 0;
}
//fungsi void
void menu(void) {
    printf ("Pilihan menu:\n");
    printf ("1. Makanan\n");
    printf ("2. Minuman\n");
    printf ("3. Permainan\n");
}
*/

// NOMOR 2
/* #include <stdio.h>
//fungsi prototype
int triangular (int angka);

//fungi main
int main () {
    int angka, jumlah;

    printf ("Masukkan angka untuk mencari nilai triangular yang akan dihitung = ");
    scanf ("%d", &angka);

    jumlah = (angka * (angka + 1)) / 2;
    printf ("Jumlah triangular yang dimasukkan user = %d", jumlah);

    return 0;
    }

//fungsi void
int triangular (int jumlah) {
    jumlah;
} */

//NOMOR 3
/* #include <stdio.h>

//fungsi prototype
float kuadrat (float angka);

//fungsi main
int main () {
    float angka, hasil;

    printf ("Masukkan angka = ");
    scanf ("%f", &angka);

    hasil = angka * angka;
    printf ("Hasil dari kuadrat bilangan tersebut yaitu = %.2f", hasil);
}

// fungsi float
float kuadrat (float angka) {
} */

// NOMOR 4
/* #include <stdio.h>

//fungsi prototype
void hitung (int angka);

//fungsi main
int main () {
    int angka, hasil;

    printf ("Masukkan nilai n = ");
    scanf ("%d", angka);

}
*/

// NOMOR 4 VERSI 2
/* #include <stdio.h>
#include <stdlib.h>

// Fungsi prototype
int Cn (int n);
int Sn (int n);

int main() {
    int n;

    printf("Masukkan nilai n : ");
    scanf("%d", &n);

    int hasilfungsiC = Cn(n);
    int hasilfungsiS = Sn(n);

    printf("Hasil fungsi Cn = Cn - 1 + 2 dari n = %d adalah %d\n", n, hasilfungsiC);
    printf("Hasil fungsi Sn = Sn - 1 + n - 1 dari n = %d adalah %d\n", n, hasilfungsiS);

    return 0;
}

// Hitungan Cn
int Cn (int n) {
    if (n == 0) {
        return 1;
    } else {
        return 2 * Cn(n - 1) + 1;
    }
}

// Hitungan Sn
int Sn (int n) {
    if (n == 1) {
        return 0;
    } else {
        return Sn(n - 1) + n - 1;
    }
} */

// NOMOR 4 VERSI 3

#include <stdio.h>

int fungsi_C (int);
int fungsi_S(int);

int main () {
    int nilaiN;

    printf ("Masukkan nilai n = ");
    scanf ("%d", &nilaiN);
    fflush (stdin);

    fungsi_C(nilaiN);
    fungsi_S(nilaiN);
}

int fungsi_C(int nilaiN) {
    int i, hasilC;

    for (i = 0; i <= nilaiN; i++) {
        if (i == 0) {
            hasilC = 1;
        } else {
            hasilC  = 2 * hasilC + 1;
        }
    }
    printf ("Hasil fungsi Cn = Cn-1 + 2 dari n = %d adalah %d", nilaiN, hasilC);

    return hasilC;
}

int fungsi_S (int nilaiN) {
    int j, hasilS, b = 1;

    for (j = 0; j <= nilaiN; j++) {
        if (j == 1 || j == 0) {
            hasilS = 0;
        } else {
            hasilS = hasilS + b;
            b++;
        }
    }
    printf ("\nHasil fungsi Sn = Sn-1 + n - 1 dari n = %d adalah %d", nilaiN, hasilS);

    return hasilS;
}
