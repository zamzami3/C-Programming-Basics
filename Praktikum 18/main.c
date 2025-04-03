// Praktikum 18 ARRAY 1

// Latihan nyoba di teori
/* #include <stdio.h>
void main() {

int bln, thn, jhari;
int jum_hari[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
puts("MEMPEROLEH JUMLAH HARI");
puts("PADA SUATU BULAN DAN SUATU TAHUN");
puts("--------------------------------");
printf("Masukkan bulan (1..12) : ");
scanf("%d", &bln);
printf("Masukkan tahunnya : ");
scanf("%d", &thn);
if(bln == 2)

if(thn % 4 == 0) //thn kabisat

jhari = 29;

else

jhari = 28;

else

jhari = jum_hari[bln-1];

printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n",bln,thn,jhari);

} */
// Nomor 1
/* #include <stdio.h>

int main() {
    int i, n;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int dataArray[n];

    for (i = 0; i < n; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &dataArray[i]);
    }

    printf("Isi dari array yang diinput user: ");

    for (i = 0; i < n; i++) {
        printf("%d ", dataArray[i]);
    }
    return 0;
} */

// nomor 2
#include <stdio.h>

void fibonacci(int bilangan, int hasil[]) {
    hasil[0] = 0;
    hasil[1] = 1;

    for (int i = 2; i <= bilangan; i++) {
        hasil[i] = hasil[i - 1] + hasil[i - 2];
    }
}

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan untuk deret Fibonacci: ");
    scanf("%d", &bilangan);

    int deret[bilangan + 1];

    fibonacci(bilangan, deret);

    printf("Deret Fibonacci hingga bilangan %d: ", bilangan);
    for (int i = 0; i <= bilangan; i++) {
        printf("%d ", deret[i]);
    }
    return 0;
}

// nomor 3
/* #include <stdio.h>
#define MAKS 2

int main () {
    char jawab;
    do {
        int ordo, i, j, elemen2;

        printf ("Masukkan variable ordo matriks persegi (2, 3, atau lebih): ");
        scanf ("%d", &ordo);

        int A[ordo][ordo], B[ordo][ordo], jumlahAB[ordo][ordo];

        printf ("\nMasukkan elemen matriks A: \n");
        for (i = 0; i < ordo; i++) {
            for (j = 0; j < ordo; j++) {
                printf ("A[%d][%d]: ", i, j);
                scanf ("%d", &A[i][j]);
            }
        }
        printf("\nMasukkan elemen matriks B: \n");
        for (i = 0; i < ordo; i++) {
            for (j = 0; j < ordo; j++) {
                printf("B[%d][%d]: ", i, j);
                scanf("%d", &B[i][j]);
            }
        }
        for (i = 0; i < ordo; i++) {
            for (j = 0; j < ordo; j++) {
                jumlahAB[i][j] = A[i][j] + B[i][j];
            }
        }
        printf("\nMenampilkan Matriks A: \n");
        for (i = 0; i < ordo; i++) {
            for (j = 0; j < ordo; j++) {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }
        printf("\nMenampilkan Matriks B: \n");
        for (i = 0; i < ordo; i++) {
            for (j = 0; j < ordo; j++) {
                printf("%d\t", B[i][j]);
            }
            printf("\n");
        }
        printf("\nMenampilkan hasil penjumlahan Matriks A + Matriks B: \n");
        for (i = 0; i < ordo; i++) {
            for (j = 0; j < ordo; j++) {
                printf("%d ", jumlahAB[i][j]);
            }
            printf("\n");
        }
        fflush (stdin);
        printf ("Apakah ingin menjumlahkan matriks lagi? (y/t): ");
        scanf ("%c", &jawab);
        fflush (stdin);

    } while (jawab == 'y');
        printf ("selesai\n");

    return 0;
} */

// nomor 4
/* #include <stdio.h>
#define MAKS
int main () {
    int i, n1, n2, terbesar = 0, terkecil = 999999;
    printf ("Masukkan data: ");
    scanf ("%d", &n1);

    for (i = 1; i <= n1; i++) {
        printf ("Masukkan data ke %d: ", i);
        scanf ("%d", &n2);

        if (n2 < terkecil) {
            terkecil = n2;
        }
        if (n2 > terbesar) {
            terbesar = n2;
        }
    }
    printf ("Data yang terbesar adalah %d", terbesar);
    return 0;
} */
