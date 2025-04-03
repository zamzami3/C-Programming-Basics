                 // PRATIKUM 14
// POWER POINT MATERI
/* #include <stdio.h>

float jumlah(float, float);
main(){
    float a, b,c;
    printf("Masukkan nilai a : ");
    scanf("%f", &a);

    printf("Masukkan nilai b : ");
    scanf("%f", &b);

    c = jumlah(a, b);

    printf("\nHasil penjumlahan a + b = %g\n", c);
    return 0;
}

float jumlah(float x, float y) {
    return(x + y);
} */

        // PRAKTIKUM 14 Tentang Fungsi

// NOMOR 1 SOAL PERCOBAAN
/* #include <stdio.h>
int ganjil (int bilangan);

int main() {
    int bilangan;
    printf("Masukkan bilangan = ");
    scanf ("%d", &bilangan);

    if (ganjil (bilangan)) {
        printf ("Bilangan ganjil");
    } else {
        printf ("Bilangan genap");
    }
    return 0;
}

int ganjil (int bilangan) {
    return bilangan % 2 != 0;
} */

// NOMOR 2 soal percobaan
/* #include <stdio.h>

long int faktorial (int n);

int main () {
    int n;
    printf ("Masukkan bilangan bulat positif = ");
    scanf ("%d", &n);

    if (n < 0) {
        printf ("Tolong masukkan bilangan positif karena bilangan negatif tidak ada faktorial:>");
    } else {
        long int hasil_faktorial = faktorial(n);
        printf("Hasil faktorialnya = %ld", hasil_faktorial);
    }
    return 0;
}

long int faktorial (int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        long int hasil_faktorial = 1;
        for (int i = 2; i <= n; i++) {
            hasil_faktorial *= i;
        }
        return hasil_faktorial;
    }
} */

// nomor 3 soal percobaan
/* #include <stdio.h>
int prima (int bilangan);

int main () {
    int bilangan;

    printf ("Masukkan bilangan bulat positif = ");
    scanf ("%d", &bilangan);

        if (prima (bilangan)) {
            printf ("Bilangan %d merupakan bilangan prima", bilangan);
        }
        else {
            printf("Bilangan %d bukan bilangan prima", bilangan);
        }
        return 0;
}
int prima(int bilangan) {
    if (bilangan <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= bilangan; i++) {
        if (bilangan % i == 0) {
            return 0;
        }
    }
    return 1;
} */

// NOMOR 4 Soal Percobaan
/* #include <stdio.h>
#define PI 3.14159f

float radian (int derajat);

int main () {
    int derajat;

    printf ("Masukkan derajat = ");
    scanf ("%d", &derajat);

    float rad = radian(derajat);
        printf("derajat dalam radian = %f", rad);

    return 0;
}

float radian (int derajat) {
    float rad;
    rad = derajat / 180.0f * PI;
    return rad;
} */

// NOMOR 5 SOAL PERCOBAAN
/* #include <stdio.h>

int konversi(int sumber, char asal, char tujuan);

int main() {
    int sumber;
    char asal, tujuan;

    printf("Masukkan suhu sumber = ");
    scanf("%d", &sumber);

    printf("Masukkan satuan asal (C, F, R) = ");
    scanf(" %c", &asal);

    printf("Masukkan satuan tujuan (C, F, R) = ");
    scanf(" %c", &tujuan);

    int hasil = konversi(sumber, asal, tujuan);
    printf("Hasil konversi suhu %d %c = %d %c\n", sumber, asal, hasil, tujuan);

    return 0;
}

int konversi(int sumber, char asal, char tujuan) {
    int hasil;
    if (asal == 'C' && tujuan == 'F') {
        hasil = ((9 * sumber) / 5) + 32;
    } else if (asal == 'C' && tujuan == 'R') {
        hasil = (4 * sumber) / 5;
    } else if (asal == 'F' && tujuan == 'C') {
        hasil = (5 * (sumber - 32)) / 9;
    } else if (asal == 'F' && tujuan == 'R') {
        hasil = (4 * (sumber - 32)) / 9;
    } else if (asal == 'R' && tujuan == 'C') {
        hasil = (5 * sumber) / 4;
    } else if (asal == 'R' && tujuan == 'F') {
        hasil = ((9 * sumber) / 4) + 32;
    } else {
        printf("Satuan asal atau tujuan (karakter yang anda masukkan) invalid:>\n");
    }
    return hasil;
} */

// NOMOR 3 LAPORAN RESMI
/* #include <stdio.h>
void ubah(int);

main() {
int x;
    printf("Masukkan nilai x : ");
    scanf("%d", &x);
    ubah(x);
    printf("x = %d\n", x);
    }

void ubah(int y) {
y = 85;
} */

// NOMOR 4
/* #include <stdio.h>
int validasi (int tanggal, int bulan, int tahun);

int main () {
    int tanggal, bulan, tahun;

    printf ("Masukkan tanggal = ");
    scanf ("%d", &tanggal);

    printf ("Masukkan bulan = ");
    scanf ("%d", &bulan);

    printf ("Masukkan tahun = ");
    scanf ("%d", &tahun);

    if (validasi (tanggal, bulan, tahun)) {
        printf ("Tanggal valid");
    } else {
        printf ("Tanggal Invalid");
    }
    return 0;
}

int validasi(int tanggal, int bulan, int tahun) {
    if (tahun % 4 == 0 && (tahun % 100 != 0 || tahun % 400 == 0)) {
        if (bulan == 2) {
            if (tanggal >= 1 && tanggal <= 29) {
                return 1;
            } else {
                return 0;
            }
        }
    } else {
        if (bulan == 2) {
            if (tanggal >= 1 && tanggal <= 28) {
                return 1;
            } else {
                return 0;
            }
        }
    }
    if (bulan >= 1 && bulan <= 12) {
        if (tanggal >= 1 && tanggal <= 31) {
            if ((bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) && tanggal > 30) {
                return 0;
            }
            return 1;
        }
    }
    return 0;
} */
