//1. Konversi mata uang dolar ke rupiah

/* int main() {
int rupiah, dolar;

printf ("Jumlah uang dolar: ");
scanf ("%d", &dolar);

rupiah = dolar * 15246;
printf ("uang dolar ke uang rupiah = %d", rupiah);

return 0;
} */

//2. Menetukan banyaknya uang pecahan yang dibutuhkan

/* #include <stdio.h>

int main() {
    int rupiah;
    printf("Total uang pecahan: ");
    scanf("%d", &rupiah);

    int SeratusRibuRupiah = rupiah / 100000;
    rupiah %= 100000;
    int LimaPuluhRibuRupiah = rupiah / 50000;
    rupiah %= 50000;
    int DuaPuluhRibuRupiah = rupiah / 20000;
    rupiah %= 20000;
    int SepuluhRibuRupiah = rupiah / 10000;
    rupiah %= 10000;
    int LimaRibuRupiah = rupiah / 5000;
    rupiah %= 5000;
    int DuaRibuRupiah = rupiah / 2000;
    rupiah %= 2000;
    int SeribuRupiah = rupiah / 1000;
    rupiah %= 1000;

    printf("Pecahan yang dibutuhkan:\n");
    printf("Seratus ribu rupiah: %d\n", SeratusRibuRupiah);
    printf("Lima puluh ribu rupiah: %d\n", LimaPuluhRibuRupiah);
    printf("Dua puluh ribu rupiah: %d\n", DuaPuluhRibuRupiah);
    printf("Sepuluh ribu rupiah: %d\n", SepuluhRibuRupiah);
    printf("Lima ribu rupiah: %d\n", LimaRibuRupiah);
    printf("Dua ribu rupiah: %d\n", LimaRibuRupiah);
    printf("Seribu rupiah: %d\n", SeribuRupiah);

    return 0;
} */

//3. Buat program untuk mencetak hasil, jika
//a = 12, b = 2, c = 3, d = 4
//a % b
/* #include <stdio.h>

int main()
{
int a, b, hasil;
a = 12;
b = 2;
hasil = a % b;
printf ("Hasil dari 12 %% 2 adalah %d", hasil);

return 0;
} */


/*mengapa pada printf ada %% ?
Pada fungsi printf dalam bahasa C, karakter % memiliki makna khusus.
Ketika Anda ingin mencetak karakter % itu sendiri, Anda perlu menuliskannya dua kali (%%)
karena % digunakan untuk memulai format specifier. Format specifier digunakan untuk menunjukkan bagaimana argumen yang ingin dicetak harus diformat.
Dalam contoh printf("Hasil dari 12 %% 2 adalah %d\n", hasil);, kita ingin mencetak karakter % sebagai bagian dari string,
bukan untuk memulai format specifier. Oleh karena itu, kita menuliskan %% untuk mencetak karakter % itu sendiri.
Bagian %d adalah format specifier yang akan digantikan oleh nilai dari variabel hasil.
Jadi, jika Anda hanya menulis satu karakter % dalam string,
kompiler akan menganggap bahwa Anda ingin memulai format specifier,
dan karena tidak ada format specifier yang sesuai dengan % 2 adalah %d, maka akan menghasilkan kesalahan saat kompilasi.
*/

// a - c
/* #include <stdio.h>

main()
{
int a, c, hasil;
a = 12;
c = 3;
hasil = a - c;
printf("Hasil dari %d - %d adalah %d\n", a, c, hasil);
}
*/

// a + b
/* #include <stdio.h>

int main() {
    int a, b, hasil;
a = 12;
b = 2;
hasil = a + b;
printf ("Hasil dari 12 + 2 adalah %d", hasil);
} */


// a / d
/* #include <stdio.h>

main()
{
int a, d, hasil;
a = 12;
d = 4;
hasil = a/d;
printf("Hasil dari %d / %d adalah %d\n", a, d, hasil);
printf ("Hasil dari 12 / 4 adalah %d", hasil);
}
*/

// a / d * d + a % d
/* #include <stdio.h>

int main()
{
int a, d, hasil;
a = 12;
d = 4;
hasil = a / d * d + a % d;
printf ("Hasil dari 12 / 4 * 4 + 12 %% 4 adalah %d", hasil);
}
*/

// a % d / d * a - c
/* #include <stdio.h>

int main()
{
int a, c, d, hasil;
a = 12;
c = 3;
d = 4;
hasil = a % d / d * a - c;
printf("Hasil dari a %% d / d * a - c adalah %d\n", hasil);
} */

//NOMOR 4 MENCOBA PAKAI STDIO.H BISA, DAN PAKAI MATH.H JUGA BISA

/* #include <stdio.h>

int main () {
    int x, y, z;
    printf ("Nilai x = ");
    scanf ("%d", &x);
    printf ("Nilai y = ");
    scanf ("%d", &y);
    printf ("Nilai z = ");
    scanf ("%d", &z);

    int Dis = (y * y)-(4 * x * z);//INI RUMUS DISKRIMINANNYA D= a^2-4ac

    printf ("Dis = %d\n", Dis);
}
*/
//5. Mengerjakan soal nomor 5 dengan mengubah data menjadi float

/* #include <stdio.h>

main () {
    float x, y, z;
    printf ("Nilai x = ");
    scanf ("%f", &x);
    printf ("Nilai y = ");
    scanf ("%f", &y);
    printf ("Nilai z = ");
    scanf ("%f", &z);

    float Dis = (y * y)-(4 * x * z);

    printf ("Dis = %f\n", Dis);
}
*/

//LAPORAN RESMI
//3. KESIMPULAN HIRARKI DARI OPERATOR MATEMATIKA YANG ADA PADA DASAR TEORI
//4. a.
/* #include <stdio.h>
main()
{
int a = 22;

a = a + 5;
a = a-2;
printf("a = %d\n", a);

}
*/
//4. b. 1.
/* #include <stdio.h>

int main() {
    int x, HasilDariX;
    x = (2 + 3) - 10 * 2;

    printf("Nilai x: %d\n", x);

    return 0;
}
*/
// 4. b. 2.
/* #include <stdio.h>

int main() {
    int x, NilaiDariX;
    x = (2 + 3) - (10 * 2);


    printf("Nilai x: %d\n", x);

    return 0;
}
*/
// 4. b. 3.
/* #include <stdio.h>

int main() {
    int x, NilaiDariX;
    x = (10 % 3 * 2 + 1);

    printf("Nilai x: %d\n", x);

    return 0;
}
*/
// 4. c.
/* #include <stdio.h>

int main() {
  printf("(1) y = bx^2 + 0,5x - c\n");
  printf("(2) y = 0,3xz / 2a");

  return 0;
}
*/

// 4. d.

/* #include <stdio.h>
main()
{
    char kar = 'A';

    kar = kar + 32;
    printf("%c\n",kar);
}
*/




#include <stdio.h>

int main() {
    char nama[50];  // Mendefinisikan array karakter untuk menyimpan nama

    // Meminta pengguna memasukkan nama
    printf("Masukkan nama Anda: ");
    scanf("%s", nama);

    // Menampilkan pesan sambutan dengan nama yang dimasukkan
    printf("Halo, %s! Semoga lancar ya, meski overthingking dikit\n", nama);

    return 0;
}
