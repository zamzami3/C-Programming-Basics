// praktikum 30 struct 2

// nomor 1 tanpa struct
/*#include <stdio.h>

int main() {
    int jmlmhs;

    printf("MENGHITUNG NILAI AKHIR\n");
    printf("MATA KULIAH KONSEP PEMROGRAMAN\n\n");
    printf("Berapa jumlah mahasiswa? ");
    scanf("%d", &jmlmhs);

    char namamhs[jmlmhs][50];
    int tugas[jmlmhs], uts[jmlmhs], uas[jmlmhs];
    char grade[jmlmhs];

    printf("\nMasukkan DATA Mahasiswa\n");

    for (int i = 0; i < jmlmhs; i++) {
        printf("Mahasiswa ke %d\n", i + 1);

        printf("Nama\t: ");
        scanf("%s", namamhs[i]);

        printf("Nilai tugas\t: ");
        scanf("%d", &tugas[i]);

        printf("Nilai UTS\t: ");
        scanf("%d", &uts[i]);

        printf("Nilai UAS\t: ");
        scanf("%d", &uas[i]);
    }
    printf("\n\tDAFTAR NILAI\t\n");
    printf("\tMATAKULIAH KONSEP PEMROGRAMAN\t\n");
    printf("------------------------------------------------------\n");
    printf("Nama Mahasiswa\t Tugas\t UTS\t UAS\t Akhir\t Grade\n");
    printf("------------------------------------------------------\n");

    for (int i = 0; i < jmlmhs; i++) {
        int akhir = (0.2 * tugas[i]) + (0.4 * uts[i]) + (0.4 * uas[i]);

        if (akhir >= 80) {
            grade[i] = 'A';
        } else if (akhir >= 70) {
            grade[i] = 'B';
        } else if (akhir >= 60) {
            grade[i] = 'C';
        } else if (akhir >= 50) {
            grade[i] = 'D';
        } else {
            grade[i] = 'E';
        }
        printf("%s\t\t %d\t %d\t %d\t %d\t %c\t\n", namamhs[i], tugas[i], uts[i], uas[i], akhir, grade[i]);
    }

    printf("------------------------------------------------------\n");
    printf("Total Mahasiswa = %d\n", jmlmhs);

    return 0;
} */

// nomor 1 dengan struct
/*#include <stdio.h>
struct Mahasiswa {
    char nama[50], grade;
    int tugas, uts, uas;
    float akhir;
};
void datamhs(struct Mahasiswa mhs[], int jmlmhs) {
    for (int i = 0; i < jmlmhs; i++) {
        printf("Mahasiswa ke %d\n", i + 1);

        printf("Nama\t: ");
        scanf("%s", mhs[i].nama);

        printf("Nilai tugas\t: ");
        scanf("%d", &mhs[i].tugas);

        printf("Nilai UTS\t: ");
        scanf("%d", &mhs[i].uts);

        printf("Nilai UAS\t: ");
        scanf("%d", &mhs[i].uas);
    }
}

void jmlnilai(struct Mahasiswa mhs[], int jmlmhs) {
    for (int i = 0; i < jmlmhs; i++) {
        mhs[i].akhir = 0.2 * mhs[i].tugas + 0.4 * mhs[i].uts + 0.4 * mhs[i].uas;

        if (mhs[i].akhir >= 80) {
            mhs[i].grade = 'A';
        } else if (mhs[i].akhir >= 70) {
            mhs[i].grade = 'B';
        } else if (mhs[i].akhir >= 60) {
            mhs[i].grade = 'C';
        } else if (mhs[i].akhir >= 50) {
            mhs[i].grade = 'D';
        } else {
            mhs[i].grade = 'E';
        }
    }
}

void tabelnilai(struct Mahasiswa mhs[], int jmlmhs) {
    printf("\n\tDAFTAR NILAI\t\n");
    printf("\tMATAKULIAH KONSEP PEMROGRAMAN\t\n");
    printf("------------------------------------------------------\n");
    printf("No\t Nama Mahasiswa\t Tugas\t UTS\t UAS\t Akhir\t Grade\n");
    printf("------------------------------------------------------\n");

    for (int i = 0; i < jmlmhs; i++) {
        printf("%d\t %s\t %d\t %d\t %d\t %.2f\t %c\t\n", i + 1, mhs[i].nama,
               mhs[i].tugas, mhs[i].uts, mhs[i].uas, mhs[i].akhir, mhs[i].grade);
    }
    printf("------------------------------------------------------\n");
    printf("Total Mahasiswa = %d\n", jmlmhs);
}

int main() {
    int jmlmhs;

    printf("MENGHITUNG NILAI AKHIR\n");
    printf("MATA KULIAH KONSEP PEMROGRAMAN\n\n");

    printf("Berapa jumlah mahasiswa? ");
    scanf("%d", &jmlmhs);

    struct Mahasiswa mahasiswa[jmlmhs];

    datamhs(mahasiswa, jmlmhs);
    jmlnilai(mahasiswa, jmlmhs);
    tabelnilai(mahasiswa, jmlmhs);

    return 0;
} */

// nomor 2 tanpa struct
/*#include <stdio.h>

int main() {
    int jmldata;

    printf("\tToko LARIS\t\n");
    printf("\tDaftar Harga\t\n");
    printf("------------------------------------------------------\n");
    printf("Ukuran Baju\t Nama Ukuran\t Harga Per Potong\n");
    printf("------------------------------------------------------\n");
    printf("\tS\t Small\t \tRp 36.000,00\n");
    printf("\tM\t Medium\t \tRp 43.000,00\n");
    printf("\tL\t Large\t \tRp 62.000,00\n");
    printf("Dapatkan diskon 20%% untuk pembelian lebih dari 10 potong...\n");
    printf("Jangan lupa, pajaknya ya... (10%% x (harga - diskon))\n");

    printf("Berapa jumlah data (maks 3)? ");
    scanf("%d", &jmldata);

    for (int i = 0; i < jmldata; i++) {
        char ukuran;
        int jmlbeli, harga;
        float diskon = 0, jmlharga, jmlbyr, totalbayar;

        printf("\nData ke %d\n", i + 1);

        printf("Ukuran [S/M/L]: ");
        scanf(" %c", &ukuran);

        printf("Jumlah beli: ");
        scanf("%d", &jmlbeli);

        if (jmlbeli > 10) {
            diskon = 0.2;
        }
        switch (ukuran) {
            case 'S':
                harga = 36000;
                break;
            case 'M':
                harga = 43000;
                break;
            case 'L':
                harga = 62000;
                break;
            default:
                printf("Ukuran tidak valid.\n");
        }

        jmlharga = jmlbeli * harga;
        jmlbyr = jmlharga - (jmlharga * diskon);
        totalbayar = jmlbyr + (0.1 * jmlbyr);

        printf("\nNota Belanja Anda:\n");
        printf("\t Toko LARIS \t\n");
        printf("======================================================\n");
        printf("Nama Ukuran\t Harga Satuan\t Qty\t Diskon\t Jumlah Harga\n");
        printf("======================================================\n");
        printf("%c\t Rp %d\t %d\t Rp %.2f\t %.2f\n", ukuran, harga, jmlbeli, diskon * 100, jmlharga);
        printf("======================================================\n");
        printf("\t\t\t Jumlah bayar\t Rp %.2f\n", jmlbyr);
        printf("\t\t\t Pajak 10%%\t Rp %.2f\n", 0.1 * jmlbyr);
        printf("\t\t\t TOTAL BAYAR\t Rp %.2f\n", totalbayar);
        printf("\t TERIMA KASIH ATAS KUNJUNGAN ANDA\t\n");
    }

    return 0;
} */
// Nomor 2
/*#include <stdio.h>

int main() {
    int jmldata;

    printf("\tToko LARIS\t\n");
    printf("\tDaftar Harga\t\n");
    printf("------------------------------------------------------\n");
    printf("Ukuran Baju\t Nama Ukuran\t Harga Per Potong\n");
    printf("------------------------------------------------------\n");
    printf("\tS\t Small\t \tRp 36.000,00\n");
    printf("\tM\t Medium\t \tRp 43.000,00\n");
    printf("\tL\t Large\t \tRp 62.000,00\n");
    printf("Dapatkan diskon 20%% untuk pembelian lebih dari 10 potong...\n");
    printf("Jangan lupa, pajaknya ya... (10%% x (harga - diskon))\n");

    printf("Berapa jumlah data (maks 3)? ");
    scanf("%d", &jmldata);

    for (int i = 0; i < jmldata; i++) {
        char ukuran;
        int jmlbeli, harga;
        float diskon = 0, jmlharga, jmlbyr, totalbayar;

        printf("\nData ke %d\n", i + 1);

        printf("Ukuran [S/M/L]: ");
        scanf(" %c", &ukuran);

        printf("Jumlah beli: ");
        scanf("%d", &jmlbeli);

        if (jmlbeli > 10) {
            diskon = 0.2;
        }
        switch (ukuran) {
            case 'S':
                harga = 36000;
                break;
            case 'M':
                harga = 43000;
                break;
            case 'L':
                harga = 62000;
                break;
            default:
                printf("Ukuran tidak valid.\n");
        }

        jmlharga = jmlbeli * harga;
        jmlbyr = jmlharga - (jmlharga * diskon);
        totalbayar = jmlbyr + (0.1 * jmlbyr);

        printf("\nNota Belanja Anda:\n");
        printf("\t Toko LARIS \t\n");
        printf("======================================================\n");
        printf("Nama Ukuran\t Harga Satuan\t Qty\t Diskon\t Jumlah Harga\n");
        printf("======================================================\n");
        printf("%c\t Rp %d\t %d\t Rp %.2f\t %.2f\n", ukuran, harga, jmlbeli, diskon * 100, jmlharga);
        printf("======================================================\n");
        printf("\t\t\t Jumlah bayar\t Rp %.2f\n", jmlbyr);
        printf("\t\t\t Pajak 10%%\t Rp %.2f\n", 0.1 * jmlbyr);
        printf("\t\t\t TOTAL BAYAR\t Rp %.2f\n", totalbayar);
        printf("\t TERIMA KASIH ATAS KUNJUNGAN ANDA\t\n");
    }
    return 0;
} */
