     // PRAKTIKUM 15

// NOMOR 1 SOAL PERCOBAAN
/* #include <stdio.h>
int perbandingan (int n1, int n2);

int main () {
    int n1, n2;

    printf ("Masukkan bilangan pertama = ");
    scanf ("%d", &n1);

    printf ("Masukkan bilangan kedua = ");
    scanf ("%d", &n2);

    int terbesar = perbandingan(n1, n2);

    printf("%d adalah bilangan terbesar", terbesar);

    return 0;
}

int perbandingan (int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
       return n2;
    }
} */

// NOMOR 2
#include <stdio.h>

long int permutasi(int n, int r, long int x1, long int x2);
long int kombinasi(int n, int r, long int x1, long int x2, long int x3);

int main() {
    int n, r;

    printf("Masukkan n = ");
    scanf("%d", &n);
    printf("Masukkan r = ");
    scanf("%d", &r);

    long int x1 = 1, x2 = 1, x3 = 1;
    for (int i = 1; i <= n; i++) {
        x1 *= i;
    }
    for (int i = 1; i <= n - r; i++) {
        x2 *= i;
    }
    for (int i = 1; i <= r; i++) {
        x3 *= i;
    }
    long int hasil_permutasi = permutasi(n, r, x1, x2);
    long int hasil_kombinasi = kombinasi(n, r, x1, x2, x3);

    printf("\tPermutasi = %ld\n", hasil_permutasi);
    printf("\tKombinasi = %ld\n", hasil_kombinasi);

    return 0;
}

long int permutasi(int n, int r, long int x1, long int x2) {
    return x1 / x2;
}
long int kombinasi(int n, int r, long int x1, long int x2, long int x3) {
    return x1 / (x2 * x3);
}

// NOMOR 3
// versi pass by value
/* #include <stdio.h>

int tambah (int n);

int main () {
    int n1, n2;

    printf ("Masukkan bilangan pertama = ");
    scanf ("%d", &n1);

    printf ("Masukkan bilangan kedua = ");
    scanf ("%d", &n2);

    int hasil_n1 = tambah (n1);
    int hasil_n2 = tambah (n2);

    printf ("Hasil %d + 2 = %d\n", n1, hasil_n1);
    printf ("Hasil %d + 2 = %d\n", n2, hasil_n2);

    return 0;
}

int tambah (int n) {
    return n + 2;
} */

// Versi pass by reference
/* #include <stdio.h>

void tambah(int *n);

int main() {
    int n1, n2;

    printf("Masukkan bilangan pertama = ");
    scanf("%d", &n1);

    printf("Masukkan bilangan kedua = ");
    scanf("%d", &n2);

    tambah (&n1);
    tambah (&n2);

    printf("Hasil penjumlahan %d\n", n1);
    printf("Hasil penjumlahan %d\n", n2);

    return 0;
}

void tambah (int *n) {
    *n += 2;
} */

// NOMOR 4
/* #include <stdio.h>
#include <math.h>

float segitiga(float besarsudut_BAC, float panjangsisi_AB);

int main() {
    float besarsudut_BAC, panjangsisi_AB;

    printf("Masukkan besar sudut BAC dalam besaran derajat = ");
    scanf("%f", &besarsudut_BAC);

    printf("Masukkan panjang sisi AB dalam bentuk meter = ");
    scanf("%f", &panjangsisi_AB);

    float panjangsisi_BC = segitiga(besarsudut_BAC, panjangsisi_AB);

    printf("Panjang sisi BC dalam bentuk meter adalah %f\n", panjangsisi_BC);

    return 0;
}

float segitiga(float besarsudut_BAC, float panjangsisi_AB) {
    float phi = 3.14;
    float radian = besarsudut_BAC * phi / 180.0;
    float panjangsisi_BC = panjangsisi_AB * tan(radian);
    return panjangsisi_BC;
} */

/*#include <stdio.h>

void perkalian(int *n);

int main() {
    int n;

    printf("Masukkan bilangan = ");
    scanf("%d", &n);

    perkalian (&n);

    printf("Hasil perkalian %d\n", n);

    return 0;
}

void perkalian (int *n) {
    *n *= 5;
} */
