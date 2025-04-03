// NOMOR 1

#include <stdio.h>
int main () {
    int bilangan, bil1, bil2, bil3, terkecil, tengah, terbesar;

    printf ("Masukkan bilangan pertama = ");
    scanf ("%d", &bil1);

    printf ("Masukkan bilangan kedua = ");
    scanf ("%d", &bil2);

    printf ("Masukkan bilangan ketiga = ");
    scanf ("%d", &bil3);

    // bilanganterkecil = bil1 - bil2
    bilangan == bil1;
    bil2 == bil3;
    bil3 == bil1;

    if (bil1 < bil2 && bil1 < bil3) {
        printf ("\nbilangan satu merupakan angka terkecil");
    }

    else if (bil2 < bil3 && bil2 < bil1) {
        printf ("\nbilangan kedua merupakan angka terkecil");
    }

    else if (bil3 < bil1 && bil3 < bil2) {
        printf ("\nbilangan ketiga merupakan angka terkecil");
    }

    // tidak keluar dalam program
printf ("\nUrutan bilangan dari yang terkecil hingga yang terbesar yaitu = %d, %d, %d", terkecil, tengah, terbesar);

return 0;
}



//NOMOR 2

/* #include <stdio.h>
int main () {
    int menu, kaos, kemejabatik, training, hargakaos, hargakemejabatik, hargatraining, totalharga;

    printf ("Menu harga barang\n");
    printf ("1. Kaos 100.000\n");
    printf ("2. Kemeja Batik 150.000\n");
    printf ("3. Celana Training 175.000\n");

    printf ("Masukkan barang yang akan anda pilih = ");
    scanf ("%d", &menu);

    if (menu = 1) {
        printf ("Anda memilih Kaos");

        printf ("\nPilih jumlah berapa anda akan membeli kaos = ");
        scanf ("%d", &kaos);

        if (kaos >=2){
        printf ("\nSelamat, anda mendapat diskon 15%");
        printf ("\nHarga total yang akan anda bayar = %d", totalharga = 0.15 * (hargakaos + hargakemejabatik + hargatraining));
        }
        else if (kaos >= 3){
        printf ("\nSelamat, anda mendapat diskon 20%");
        printf ("\nHarga total yang akan anda bayar = %d", totalharga = 0.2 * (hargakaos + hargakemejabatik + hargatraining));
        }
        else if (kaos >= 5) {
        printf ("\nSelamat, anda mendapat diskon 35%");
        printf ("\nHarga total yang akan anda bayar = %d", totalharga = 0.35 * (hargakaos + hargakemejabatik + hargatraining));
        }
        else {
        printf ("\nMaaf anda tidak mendapatkan diskon apapun");
        printf ("\ntotal harga yang akan anda bayar = %d", hargakaos + hargakemejabatik + hargatraining);
        }

        printf ("\nAnda membeli kaos sebanyak %d", totalharga);
    }
    else if (menu = 2) {
        printf ("Anda memilih Kemeja Batik");

        printf ("\nPilih jumlah berapa anda akan membeli Kemeja batik = ");
        scanf ("%d", &kemejabatik);


        if (kemejabatik >=2){
        printf ("\nSelamat, anda mendapat diskon 15%");
        printf ("\nHarga total yang akan anda bayar = %d", totalharga = 0.15 * (hargakaos + hargakemejabatik + hargatraining));
        }
        else if (kemejabatik >= 3){
        printf ("\nSelamat, anda mendapat diskon 20%");
        printf ("\nHarga total yang akan anda bayar = %d", totalharga = 0.2 * (hargakaos + hargakemejabatik + hargatraining));
        }
        else if (kemejabatik >= 5) {
        printf ("\nSelamat, anda mendapat diskon 35%");
        printf ("\nHarga total yang akan anda bayar = %d", totalharga = 0.35 * (hargakaos + hargakemejabatik + hargatraining));
        }
        else {
        printf ("\nMaaf anda tidak mendapatkan diskon apapun");
        printf ("\ntotal harga yang akan anda bayar = %d", hargakaos + hargakemejabatik + hargatraining);
        }

        printf ("\nAnda membeli kaos sebanyak %d", totalharga);
    }
    else if (menu = 3) {
        printf ("Anda memilih training");

        printf ("\nPilih jumlah berapa anda akan membeli training = ");
        scanf ("%d", &training);

        if (training >=2){
        printf ("\nSelamat, anda mendapat diskon 15%");
        printf ("\nHarga total yang akan anda bayar = %d", totalharga = 0.15 * (hargakaos + hargakemejabatik + hargatraining));
        }
        else if (training >= 3){
        printf ("\nSelamat, anda mendapat diskon 20%");
        printf ("\nHarga total yang akan anda bayar = %d", totalharga = 0.2 * (hargakaos + hargakemejabatik + hargatraining));
        }
        else if (training >=5) {
        printf ("\nSelamat, anda mendapat diskon 35%");
        printf ("\nHarga total yang akan anda bayar = %d", totalharga = 0.35 * (hargakaos + hargakemejabatik + hargatraining));
        }
        else {
        printf ("\nMaaf anda tidak mendapatkan diskon apapun");
        printf ("\ntotal harga yang akan anda bayar = %d", hargakaos + hargakemejabatik + hargatraining);
        }
            printf ("\nAnda membeli kaos sebanyak %d", totalharga);
        }
    else {
        printf ("\nAnda tidak membeli barang apapun");
    }

return 0;
}*/

//NOMOR 3
/* #include <stdio.h>
int main () {
    int bulan, tanggal;

    printf ("Masukkan nomor bulan dalam bilangan bulat = ");
    scanf ("%d", &bulan);
    printf ("Masukkan tanggal = ");
    scanf ("%d", &tanggal);

        switch (bulan) {

        case  1 :
            if (tanggal >= 1 && tanggal <= 19 )
            printf ("bintang anda adalah capricorn");
            else if (tanggal >= 20 && tanggal <= 31) {
            printf ("bintang anda adalah aquarius");
            }
        break;

        case 2 :
            if (tanggal >= 1 && tanggal <= 18 )
            printf ("bintang anda adalah aquarius");
            else if (tanggal >= 19 && tanggal <= 29) {
            printf ("bintang anda adalah pisces");
            }
        break;

        case 3 :
            if (tanggal >= 1 && tanggal <= 20)
            printf ("bintang anda adalah Pisces");
            else if (tanggal >= 21 && tanggal <= 31) {
            printf ("bintang anda adalah Aries");
            }
        break;

        case 4 :
            if (1 <= tanggal <= 19)
            printf ("bintang anda adalah Aries");
            else if (tanggal >= 20 && tanggal <= 30) {
            printf ("bintang anda adalah Taurus");
            }
        break;

        case 5 :
            if (1 <= tanggal <= 20)
            printf ("bintang anda adalah Taurus");
            else if (tanggal >= 21 && tanggal <= 31) {
            printf ("bintang anda adalah Gemini");
            }
        break;

        case 6 :
            if (1 <= tanggal <= 20)
            printf ("bintang anda adalah Gemini");
            else if (tanggal >= 21 && tanggal <= 30) {
            printf ("bintang anda adalah Cancer");
            }
        break;

        case 7 :
            if (1 <= tanggal <= 22)
            printf ("bintang anda adalah Cancer");
            else if (tanggal >= 23 && tanggal <= 31) {
            printf ("bintang anda adalah Leo");
            }
        break;

        case 8 :
            if (1 <= tanggal <= 22)
            printf ("bintang anda adalah Leo");
            else if (tanggal >= 23 && tanggal <= 31) {
            printf ("bintang anda adalah Virgo");
            }
        break;

        case 9 :
            if (1 <= tanggal <= 22)
            printf ("bintang anda adalah Virgo");
            else if (tanggal >= 23 && tanggal <= 30) {
            printf ("bintang anda adalah Libra");
            }
        break;

        case 10 :
            if (1 <= tanggal <= 22)
            printf ("bintang anda adalah Libra");
            else if (tanggal >= 23 && tanggal <= 31) {
            printf ("bintang anda adalah Scorpio");
            }
        break;

        case 11 :
            if (1 <= tanggal <= 21)
            printf ("bintang anda adalah Scorpio");
            else if (tanggal >= 22 && tanggal <= 30) {
            printf ("bintang anda adalah Sagittarius");
            }
        break;

        case 12 :
            if (1 <= tanggal <= 21)
            printf ("bintang anda adalah Sagittarius");
            else if (tanggal >= 22 && tanggal <= 31) {
            printf ("bintang anda adalah Capricorn");
            }
        break;

        default:
            printf ("Tidak valid");
        break;
    }
return 0;
}
*/
