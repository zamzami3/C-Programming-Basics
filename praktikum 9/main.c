// PRAKTIKUM 9

// NOMOR 1 SOAL PERCOBAAN
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Masukkan nilai n = ");
    scanf ("%d", &n);

    for (i = 1; i <= n; i+=2){
        printf ("%d\t", i);
    }
    return 0;
} */

//NOMOR 2 SOAL PERCOBAAN
/* #include <stdio.h>

int main() {

    int i, bil, jumlah;

    printf ("Masukkan bilangan bulat = ");
    scanf ("%d", &bil);

    for (i=1; i<=bil; i++){
            jumlah = jumlah + i;
        printf ("%d\t = %d", i, jumlah);
    }
return 0;
}*/


/* #include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, sum = 0;

    printf("Masukkan sebuah bilangan = ");
    scanf("%d",&n);

    if(n < 1){
        printf("Masukkan bilangan positif yang lebih besar dari 0\n");
    }
    else {
        printf("%d= ",n);

        for(int i = n; i >= 1; i--) {
            sum += i;

        if(i == 1){
            printf("%d",i);
        }
        else {
            printf("%d + ",i);
        }
        }
        printf("=%d\n", sum);
    }
return 0;
}*/
//Nomor 2 perbaikan
/* #include <stdio.h>
#include <stdlib.h>

int main (){

    int i, bilangan, hasil = 0;

    printf ("Masukkan bilangan = ");
    scanf ("%d", &bilangan);

    for (int i = bilangan; i >= 1; i--) {
        if (i > 1){
            printf ("%d +", i);
        } else {
        printf ("%d =", i);
        }
        hasil += i;
    }
    printf ("%d", hasil);
return 0;
} */

//NOMOR 3
/*#include <stdio.h>
#include <stdlib.h>

int main (){

    char a = 65, z = 90;

    for (char c = z; c >= a; c--){
        printf ("%c ", c);
    }
return 0;
} */

// NOMOR 4
/* #include <stdio.h>
#include <stdlib.h>

int main () {
    int i, n;

    printf ("Masukkan jangkauan n = ");
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i%2 == 1){
            printf ("%d ", i);
        } else {
            printf ("-%d ", i);
        }
    }
return 0;
} */

//NOMOR 5

#include <stdio.h>
#include <stdlib.h>

int main () {
    int bilangan, pembagi = 0;;

    printf ("Masukkan bilangan bulat positif = ");
    scanf ("%d", &bilangan);

    for (int i = 2; i <= bilangan/2; i++) {
        if (bilangan % i == 0) {
            pembagi++;
        }
    }
        if (pembagi == 0) {
            printf ("Bilangan tersebut merupakan bilangan prima");
        }
        else {
            printf("Bilangan tersebut bukan bilangan prima");
        }

return 0;
}

// NOMOR 6
/* #include <stdio.h>

int main() {
    int totalJam = 0, jmljam;
    float totalNilai = 0, nilaiAngka, indeks_prestasi_semester;
    char nilaihurufmatkul;

    printf("Ada 5 mata kuliah\n");

    for (int i = 1; i <= 5; i++) {

        printf("Masukkan nilai Mata Kuliah dengan format A/B/C/D/E = ");
        scanf(" %c", &nilaihurufmatkul);

        printf("Jumlah Jam: ");
        scanf("%d", &jmljam);

        switch (nilaihurufmatkul) {
            case 'A':
                nilaiAngka = 4.00;
                break;
            case 'B':
                nilaiAngka = 3.00;
                break;
            case 'C':
                nilaiAngka = 2.00;
                break;
            case 'D':
                nilaiAngka = 1.00;
                break;
            case 'E':
                nilaiAngka = 0.00;
                break;
            default:
                printf("Input tidak valid untuk nilai mata kuliah %d.\n", i);
                nilaiAngka = 0;
                break;
        }

        totalNilai += nilaiAngka * jmljam;
        totalJam += jmljam;
    }

    if (totalJam > 0) {
        indeks_prestasi_semester = totalNilai / totalJam;
        printf("Indeks Prestasi Semester : %.2f\n", indeks_prestasi_semester);
    } else {
        printf("Tidak ada jam kuliah yang dimasukkan.\n");
    }

    return 0;
} */
