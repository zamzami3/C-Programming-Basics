// PRAKTIKUM 19 ARRAY 2

// NOMOR 1 fungsi main tok
/* #include <stdio.h>
int main () {
    int i, jmldata, terbesar = 0;
    printf ("Masukkan jumlah data: ");
    scanf ("%d", &jmldata);

    int nilai[jmldata];

    for (i = 0; i < jmldata; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }
    printf("Isi data: ");

    for (i = 0; i < jmldata; i++) {
        printf("%d ", nilai[i]);

        if (nilai > terbesar){
            terbesar = nilai[i];
        }
    }
    printf ("\nNilai terbesar dari data yang diinput user: %d", terbesar);
    return 0;
} */

// nomor 1
/*#include <stdio.h>
int input () {
    int jmldata;
    printf ("Masukkan jumlah data: ");
    scanf ("%d", &jmldata);
    return jmldata;
}
int findmax(int nilai[], int jmldata) {
    int terbesar = nilai[0];

    for (int i = 0; i < jmldata; i++) {
        printf("%d ", nilai[i]);

        if (nilai[i]> terbesar){
            terbesar = nilai[i];
        }
    }
    return terbesar;
}
int main() {
    int jmldata;

    jmldata = input ();

    int nilai[jmldata];

    for (int i = 0; i < jmldata; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }
    printf("Isi data: ");

    int terbesar = findmax(nilai, jmldata);

    printf ("\nNilai terbesar dari data yang diinput user: %d", terbesar);
    return 0;
} */

// NOMOR 2 NILAI SISWA
#include <stdio.h>
int main() {
    int i, j, nilai[4][3] = {{81, 90, 62}, {50, 83, 87}, {89, 55, 65}, {77, 70, 92}};
    float rata_rata;

    printf("Rata-Rata\n");

    for (i = 0; i < 4; i++) {
        float jumlah = 0;
        for (j = 0; j < 3; j++) {
            jumlah += nilai[i][j];
        }
        rata_rata = jumlah / 3;
        printf("%.2f\n", rata_rata);
    }

    return 0;
}

// Nomor 3
/*#include <stdio.h>
#define PI 3.14159

int main() {
    int x[13] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};
    float data[13][3];
    int i;

    for (i = 0; i < 13; i++) {
        float rad = x[i] / 180.0 * PI;
        data[i][0] = sin(rad);
        data[i][1] = cos(rad);

        if (x[i] % 180 == 90 || x[i] % 180 == 270) {
            data[i][2] = -1;
        } else {
            data[i][2] = tan(rad);
        }
    }
    printf("x \tsin \tcos \ttan\n");
    for (i = 0; i < 13; i++) {
        printf(" %d\t %.2f\t %.2f\t", x[i], data[i][0], data[i][1]);

        if (x[i] % 180 == 90 || x[i] % 180 == 270) {
            printf(" Undefined\n");
        } else {
            printf(" %.2f\n", data[i][2]);
        }
    }
    return 0;
} */
