// Praktikum 29 Struct 1

// Nyoba struct
/*#include <stdio.h>

struct Mahasiswa {
    char nama [50];
    int umur;
    float IPK;
};

int main () {
    struct Mahasiswa mhs1;

    printf ("Masukkan nama mahasiswa 1: ");
    scanf ("%s", mhs1.nama);

    printf ("Masukkan umur mahasiswa: ");
    scanf ("%d", &mhs1.umur);

    printf ("Masukkan nilai IPK mahasiswa: ");
    scanf ("%f", &mhs1.IPK);

    printf ("\n-----Informasi Mahasiswa-----\n");
    printf ("Nama: %s\n", mhs1.nama);
    printf ("Umur: %d\n", mhs1.umur);
    printf ("Nilai IPK: %f\n", mhs1.IPK);

    return 0;
} */
// Nomor 1
// contoh array of struct
/*#include <stdio.h>
#define MAKS 20

struct date {
    int month, day, year;
};

struct student {
    char name[30];
    struct date birthday;
};

main () {
    struct student data_mhs[MAKS];
    int i = 0, jml;
    char lagi;
    do {
        printf ("Name: ");
        gets (data_mhs[i].name);
        printf ("Birthday (mm-dd-yyyy): ");
        scanf ("%d-%d-%d", &data_mhs[i].birthday.month,
               &data_mhs[i].birthday.day, &data_mhs[i].birthday.year);
        i++;
        fflush (stdin);
        printf ("\nMau memasukkan data lagi? (y/t): ");
        lagi = getchar ( );
        fflush(stdin);
    } while (lagi == 'Y' || lagi == ' y' || lagi == ' ');
    jml = i;
    printf ("\nDATA MAHASISWA\n");
    for (i = 0; i < jml; i++) {
        printf ("%d. Name: %s", i+1, data_mhs[i].name);
        printf ("\n Birthday: %d - %d - %d\n\n",
                data_mhs[i].birthday.month,
                data_mhs[i].birthday.day,
                data_mhs[i].birthday.year);
    }
    return 0;
}*/

// NOMOR 2
/*#include <stdio.h>
struct date {
    int day, month, year;
};
int kabisat(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int jumlah(int month, int year) {
    int dayinmonth;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        dayinmonth = 30;
    } else if (month == 2) {
        if (kabisat(year)) {
            dayinmonth = 29;
        } else {
            dayinmonth = 28;
        }
    } else {
        dayinmonth = 31;
    }
    return dayinmonth;
}
struct date dateoftomorrow(struct date today) {
    struct date tomorrow;
    int dayinmonth = jumlah(today.month, today.year);

    if (today.day < dayinmonth) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else {
        tomorrow.day = 1;
        if (today.month < 12) {
            tomorrow.month = today.month + 1;
            tomorrow.year = today.year;
        } else {
            tomorrow.month = 1;
            tomorrow.year = today.year + 1;
        }
    }
    return tomorrow;
}
int main() {
    struct date today, tomorrow;

    printf("Masukkan tanggal dalam bentuk dua angka (01 s.d. 31): ");
    scanf("%d", &today.day);
    printf("Masukkan bulan dalam bentuk dua angka (1 s.d. 12): ");
    scanf("%d", &today.month);
    printf("Masukkan tahun dalam bentuk 4 angka: ");
    scanf("%d", &today.year);

    tomorrow = dateoftomorrow(today);
    printf("The date about tomorrow: %d %d %d\n", tomorrow.day, tomorrow.month, tomorrow.year);
    return 0;
} */

// NOMOR 3
#include <stdio.h>
#define jumlahayam 3

struct Ayam {
    char kode, jenis[20];
    int harga;
};
int main() {
    struct Ayam daftarharga[jumlahayam] = {
        {'D', "Dada", 5000},
        {'P', "Paha", 4000},
        {'S', "Sayap", 3000}
    };
    char jawab, jenisuser[20], kodeuser;
    int jumlahpesanan;
    float total = 0, pajak, totalbayar;

    printf("Toko GFC --- Gerobak Fried Chicken\n\n");
    printf("DAFTAR HARGA\n");
    printf("Kode\t Jenis\t Harga Per Potong\n");
    for (int i = 0; i < jumlahayam; ++i) {
        printf("%c\t %s\t Rp %d.00\n", daftarharga[i].kode, daftarharga[i].jenis, daftarharga[i].harga);
    }
    printf("\nHarga belum termasuk pajak: 10%%\n\n");

    do {
        printf("Masukkan pesanan Anda\n");
        printf("Jenis  [D/P/S] : ");
        scanf(" %c", &kodeuser);
        printf("Jumlah: ");
        scanf("%d", &jumlahpesanan);

        float totalharga = 0;

        for (int i = 0; i < jumlahayam; i++) {
            if (daftarharga[i].kode == kodeuser) {
                totalharga = jumlahpesanan * daftarharga[i].harga;
                for (int j = 0; j < 10; j++) {
                    jenisuser[j] = daftarharga[i].jenis[j];
                }
                break;
            }
        }
        total += totalharga;
        pajak = 0.1 * total;
        totalbayar = pajak + total;

        printf("Ada lagi? (y/t): ");
        scanf(" %c", &jawab);

    } while (jawab == 'y');

    printf("\nNota Belanja Anda: \n");
    printf("\tGEROBAK FRIED CHICKEN\t\n");
    printf("======================================================\n");
    printf("Jenis Potong\t Harga Satuan\t Qty\t Jumlah Harga\n");
    printf("======================================================\n");
    printf("%s\t\t Rp %d\t %d\t Rp %.2f\n", jenisuser, daftarharga[0].harga, jumlahpesanan, total);
    printf("======================================================\n");
    printf("\t\t\t Jumlah bayar\t Rp %.2f\n", total);
    printf("\t\t\t Pajak 10%%\t Rp %.2f\n", pajak);
    printf("\t\t\t TOTAL BAYAR\t Rp %.2f\n", totalbayar);
    printf("\t TERIMA KASIH ATAS KUNJUNGAN ANDA\t\n");

    return 0;
}
