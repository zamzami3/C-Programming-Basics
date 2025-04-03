// Amanda Ace jadi Emenda Eca

/*#include <stdio.h>
#include <string.h>

int tukarstring (int tukar, int kalimat) {
    int c;
    for (int i = 0; i < '\0'; i++) {
        kalimat = tukar;
        tukar = kalimat;
        c = kalimat;
    }
}
int main () {
    int kalimat, tukar;

    printf ("Masukkan string: ");
    scanf ("%s", kalimat);

    printf ("String yang telah ditukar: %s", tukarstring(tukar, kalimat));
} */

/*#include <stdio.h>
#include <string.h>

int tukarstring (int tukar, int kalimat) {
    int c;
    for (int i = 0; i < '\0'; i++) {
        for (int j = '\0'; j < kalimat; j++) {
            printf ("%s", j-1);
        }
    }
}
int main () {
    int kalimat, tukar;

    printf ("Masukkan string: ");
    scanf ("%s", kalimat);

    printf ("String yang telah ditukar: %s", tukarstring(tukar, kalimat));
} */





// nomor 2
/*#include <stdio.h>
int mean (int jmlmhs, int mtk, int kp, int la) {
    float rata_rata;

    for (int i = 1; i <= jmlmhs; ++i) {
        rata_rata = (mtk + kp + la) / 3;
        printf ("Rata-rata nilai mahasiswa ke %d yakni: %.2f\n", i+1, rata_rata);
    }
    return rata_rata;
}

int main () {
    int jmlmhs, mtk, kp, la, i;
    float rata_rata;

    printf ("Masukkan jumlah mahasiswa: ");
    scanf ("%d", &jmlmhs);

    for (int i = 1; i <= jmlmhs; ++i) {
        printf ("Masukkan nilai matematika mahasiswa ke %d: ", i);
        scanf ("%d", &mtk);

        printf ("Masukkan nilai pemrograman mahasiswa ke %d: ", i);
        scanf ("%d", &kp);

        printf ("Masukkan nilai Logika Algoritma mahasiswa ke %d: ", i);
        scanf ("%d", &la);

    }
    printf ("Nilai rata_rata mahasiswa %d", mean(jmlmhs, mtk, kp, la));

    return 0;
} */





// nomor 3
#include <stdio.h>

int penambahan (int a, int b, int c, int d) {
    return  a+c && b+d;
}

int pengurangan (int a, int b, int c, int d) {
    return a-c && b-d;
}

int perkalian (int a, int b, int c, int d) {
    return (a*c) - (b*d), (b*c) + (a*d);
}

int main () {
    int a,b,c,d;

    printf ("Masukkan nilai a = ");
    scanf ("%d", &a);

    printf ("Masukkan nilai b = ");
    scanf ("%d", &b);

    printf ("Masukkan nilai c = ");
    scanf ("%d", &c);

    printf ("Masukkan nilai d = ");
    scanf ("%d", &d);

    printf ("Nilai fungsi penambahan dua bilangan imajiner tersebut yakni %d + %di\n",a+c, b+d);
    printf ("Nilai fungsi pengurangan dua bilangan imajiner tersebut yakni %d + %di\n",a-c, b-d);
    printf ("Nilai fungsi perkalian dua bilangan imajiner tersebut yakni %d + %di\n", (a*c) - (b*d), (b*c) + (a*d));
}





/*#include <stdio.h>
struct imajiner {
    int tambah;
    int kurang;
    int perkalian;
};

int penambahan (struct a tambah, b tambah, c tambah, d tambah) {
    printf ("Masukkan nilai a = ");
    scanf ("%d", &a.tambah);

    printf ("Masukkan nilai b = ");
    scanf ("%d", &b.tambah);

    printf ("Masukkan nilai c = ");
    scanf ("%d", &c.tambah);

    printf ("Masukkan nilai d = ");
    scanf ("%d", &d.tambah);
    return  a+c && b+d;
}

int pengurangan (int a, int b, int c, int d) {
    printf ("Masukkan nilai a = ");
    scanf ("%d", &a.kurang);

    printf ("Masukkan nilai b = ");
    scanf ("%d", &b.kurang);

    printf ("Masukkan nilai c = ");
    scanf ("%d", &c.kurang);

    printf ("Masukkan nilai d = ");
    scanf ("%d", &d.kurang);
    return a-c && b-d;
}

int perkalian (int a, int b, int c, int d) {
    printf ("Masukkan nilai a = ");
    scanf ("%d", &a.kali);

    printf ("Masukkan nilai b = ");
    scanf ("%d", &b.tambah);

    printf ("Masukkan nilai c = ");
    scanf ("%d", &c.tambah);

    printf ("Masukkan nilai d = ");
    scanf ("%d", &d.tambah);
    return (a*c) - (b*d), (b*c) + (a*d);
}

int main () {

    struct a tambah, b tambah, c tambah , d tambah;
    struct a kurang, b kurang, c kurang , d kurang;
    struct a kali, b kali, c kali , d kali;

    printf ("Nilai fungsi penambahan dua bilangan imajiner tersebut yakni %d + %di\n",a+c, b+d);
    printf ("Nilai fungsi pengurangan dua bilangan imajiner tersebut yakni %d + %di\n",a-c, b-d);
    printf ("Nilai fungsi perkalian dua bilangan imajiner tersebut yakni %d + %di\n", (a*c) - (b*d), (b*c) + (a*d));
} */
