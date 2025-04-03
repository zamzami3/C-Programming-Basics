        //PRAKTIKUM 10


// NOMOR 1
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    char karakter;
    while (karakter != 'X' ){
        printf("Masukkan karakter keyboard = ");
        scanf("%c", &karakter);
        fflush (stdin);
    }
    printf("Program Berhenti");
    return 0;
}*/


// NOMOR 2
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    char jawab = 't';
    int total = 0;

    printf("Anda ingin memasukkan angka (y/t)? ");
    scanf("%c", &jawab);

    while (jawab == 'y') {
        int angka = 0;

        printf("Masukkan angka: ");
        scanf("%d", &angka);
        fflush (stdin);

        printf("Mau memasukkan angka lagi (y/t)? ");
        scanf("%c", &jawab);
        fflush(stdin);

        total += angka;
    }

    printf("Total bilangan dari angka tersebut adalah %d\n", total);
    return 0;
}
*/

// NOMOR 3
/* #include <stdio.h>

int main() {
    char jawab = 't';
    int jumlahangka = 0, angka, terkecil = 0, terbesar = 0;
    float total = 0, rata_rata;

    printf("Anda ingin memasukkan angka (y/t)? ");
    scanf(" %c", &jawab);

    while (jawab == 'y') {
        printf("Masukkan angka: ");
        scanf("%d", &angka);

        total += angka;

        if (angka < terkecil) {
            terkecil = angka;
        }
        if (angka > terbesar) {
            terbesar = angka;
        }

        printf("Mau memasukkan angka lagi (y/t)? ");
        scanf(" %c", &jawab);

        jumlahangka++;
    }

    if (jumlahangka > 0) {
        rata_rata = total / jumlahangka;
        printf("Nilai rata-rata dari angka tersebut adalah %.2f\n", rata_rata);
        printf("Bilangan terkecil = %d\n", terkecil);
        printf("Bilangan terbesar = %d\n", terbesar);
    } else {
        printf("Invalid!");
    }

    return 0;
} */


// PERBAIKAN NOMOR 3
#include <stdio.h>
#include <stdlib.h>

int main() {
    char jawab = 't';
    int jumlahangka = 0, angka, terkecil, terbesar;
    float total = 0, rata_rata;

    printf("Anda ingin memasukkan angka (y/t)? ");
    scanf(" %c", &jawab);

    if (jawab == 'y') {
        printf("Masukkan angka: ");
        scanf("%d", &angka);
        fflush(stdin);

        terkecil = angka;
        terbesar = angka;
        total += angka;
        jumlahangka++;
    }

    while (jawab == 'y') {
        printf("Mau memasukkan angka lagi (y/t)? ");
        scanf(" %c", &jawab);
        fflush(stdin);

        if (jawab == 'y') {
            printf("Masukkan angka: ");
            scanf("%d", &angka);
            fflush(stdin);

            total += angka;
            jumlahangka++;

            if (angka < terkecil) {
                terkecil = angka;
            }
            if (angka > terbesar) {
                terbesar = angka;
            }
        }
    }

    if (jumlahangka > 0) {
        rata_rata = total / jumlahangka;
        printf("Nilai rata-rata dari angka tersebut adalah %.2f\n", rata_rata);
        printf("Bilangan terkecil = %d\n", terkecil);
        printf("Bilangan terbesar = %d\n", terbesar);
    } else {
        printf("Tidak ada angka yang dimasukkan.\n");
    }

    return 0;
}

// NOMOR 4
/* #include <stdio.h>

int main (){
    int i, angka, angkapertama = 0;

    printf ("Masukkan nilai jangkauan = ");
    scanf ("%d", &angka);

    for (i = 1; i <= angka; i++){
        printf (" %d", angkapertama);

        angkapertama = angkapertama + i;

    }

return 0;
}
*/

// NOMOR 5 MASI ERROR
/* #include <stdio.h>
int main () {
    int jmlkarakter = 0, jmlspasi = 0;
    char kalimat;

    printf ("Ketikkan sembarang kalimat: ");
    scanf ("%c", &kalimat);

    while (kalimat) {

        if (kalimat == '\n') {
            jmlkarakter++;
            printf (" %d", jmlkarakter);
        }
        if (kalimat == ' ') {
            jmlspasi++;
            printf (" %d", jmlspasi);
        }

    }
    printf ("\nJumlah karakter tersebut adalah = %d", jmlkarakter);
    printf ("\nJumlah spasi tersebut adalah = %d", jmlspasi);
return 0;
}
*/

/* #include <stdio.h>

int main() {
    int jumlahkarakter = 0, jumlahspasi = 0;
    char kalimat;

    printf("Ketikkan sembarang kalimat: ");

    while (1) {
        scanf("%c", &kalimat);

        if (kalimat == '\n') {
            break;
        }

        if (kalimat != ' ') {
            jumlahkarakter++;
        } else {
            jumlahspasi++;
        }
    }

    printf("Jumlah karakter tersebut adalah = %d\n", jumlahkarakter);
    printf("Jumlah spasi tersebut adalah = %d\n", jumlahspasi);

    return 0;
} */


// NOMOR 6
/* #include <stdio.h>
#include <stdlib.h>

int main () {
    int i, angka, jumlah = 0;

    printf ("Masukkan angka  = ");
    scanf ("%d", &angka);

    for (i = 1; i <= angka; i++) {
        jumlah += angka;
    }
        printf ("Jumlah dari angka tersebut adalah = %d", jumlah);

return 0;
}*/

// PERBAIKAN NOMOR 6
/* #include <stdio.h>

int main() {
    int bilangan, bil1, bil2, bil3, bil4, jumlah;
    printf("Masukkan 4 bilangan = ");
    scanf("%d", &bilangan);

    if (bilangan/1000<=9) {
        for (int i = 1; i <= 4; i++) {
            switch (i){
                case 1:
                    bil1 = bilangan/1000;
                    break;
                case 2:
                    bil2 = (bilangan/100)%10;
                    break;
                case 3:
                    bil3 = (bilangan/10)%10;
                    break;
                case 4:
                    bil4 = bilangan%10;
                    break;
                default :
                    break;
            }
        }
        jumlah = bil1 + bil2 + bil3 + bil4;
        printf("Hasil dari penjumlahan bilangan tersebut yaitu %d", jumlah);
    } else {
        printf("Bilangan yang anda masukkan lebih dari 4");
    }
    return 0;
}*/

// NOMOR 7
/* #include <stdio.h>
#include <stdlib.h>

int main () {
    int biaya_awal, cicilanperbulan, waktulunas=0;
    float kenaikanpertahun = 0;

    printf ("Masukkan berapa biaya awal = ");
    scanf ("%d", &biaya_awal);

    printf ("Berapa cicilan yang mampu dibayarkan tiap bulan = ");
    scanf ("%d", &cicilanperbulan);

    printf ("Berapa rata-rata kenaikan tiap tahun (dalam bentuk koma) = ");
    scanf ("%f", &kenaikanpertahun);

    while (biaya_awal > 0) {
        biaya_awal += (kenaikanpertahun/100) * biaya_awal;
        waktulunas++;
        biaya_awal -= cicilanperbulan;
    }
    printf ("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan", waktulunas);

return 0;
} */

// NOMOR 3 LAPORAN RESMI
/* #include <stdio.h>

int main() {
    int jumlahkangka = 0, jumlahspasi = 0, hurufkecil = 0, hurufbesar = 0;
    char kalimat;

    printf("Ketikkan sembarang kalimat: ");

    while (1) {
        scanf("%c", &kalimat);

        if (kalimat == '\n') {
            break; // Akhiri loop jika pengguna menekan Enter
        }

        if (kalimat >= '0' && kalimat <= '9') {
            jumlahkangka++;
        } if (kalimat == ' ') {
            jumlahspasi++;
        } if (kalimat >= 'a' && kalimat <= 'z'){
            hurufkecil++;
        } if (kalimat >= 'A' && kalimat <= 'Z') {
            hurufbesar++;
        }
    }

    printf("Jumlah angka tersebut adalah = %d\n", jumlahkangka);
    printf("Jumlah spasi tersebut adalah = %d\n", jumlahspasi);
    printf("Jumlah huruf kecil dalam kalimat tersebut adalah = %d\n", hurufkecil);
    printf("Jumlah huruf besar dalam kalimat tersebut adalah = %d\n", hurufbesar);

    return 0;
}*/

// Nomor 4 soal laporan resmi
/* #include <stdio.h>
#include <stdlib.h>

int main () {
    int biaya_awal, cicilanperbulan, waktulunas = 0, bonusgaji = 0;
    float kenaikanpertahun = 0;

    printf ("Masukkan berapa biaya awal = ");
    scanf ("%d", &biaya_awal);

    printf ("Berapa cicilan yang mampu dibayarkan tiap bulan = ");
    scanf ("%d", &cicilanperbulan);

    printf ("Berapa rata-rata kenaikan tiap tahun (dalam bentuk koma) = ");
    scanf ("%f", &kenaikanpertahun);

    printf ("Masukkan jumlah bonus gaji per 6 bulan = ");
    scanf ("%d", &bonusgaji);

    while (biaya_awal > 0) {
        biaya_awal += (kenaikanpertahun/100) * biaya_awal;
        waktulunas++;
        biaya_awal -= cicilanperbulan;

        if (waktulunas % 6 == 0){
            biaya_awal += bonusgaji;
        }
    }
    printf ("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan", waktulunas);

return 0;
}*/
