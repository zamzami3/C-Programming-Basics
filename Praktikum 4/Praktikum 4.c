// PRAKTIKUM 4

// 1. Program konversi dari celcius ke fahrenheit

/* #include <stdio.h>

int main() {

    float fahrenheit, celcius;

    printf ("Masukkan suhu celcius = ");
    scanf ("%f", &celcius);

    fahrenheit = (celcius * 1.8) + 32;
    printf ("Konversi suhu dari celcius ke fahrenheit = %f", fahrenheit);

return 0;
}
*/


// 2. Program untuk menghitung total pendapatan bulanan seorang karyawan

/* #include <stdio.h>

int main () {

    float masukkerja, masakerja, gajipokok, jumlahanak, tunjanganistri, tunjangananak, asuransi, pajak, totalgajibulanan;

    printf ("Masukkan hari masuk kerja kurang dari 30 hari: ");
    scanf ("%f", &masukkerja);

    printf ("Masukkan kontrak masa kerja berapa tahun: ");
    scanf ("%f", &masakerja);

    printf ("Masukkan jumlah pendapatan total gaji pokok: ");
    scanf ("%f", &gajipokok);

    printf ("Masukkan jumlah anak: ");
    scanf ("%f", &jumlahanak);

    tunjanganistri = (0.1 * gajipokok);

    tunjangananak = ((0.05 * gajipokok) / jumlahanak);

    asuransi = -20000;

    pajak = 0.15 * (gajipokok + tunjangananak + tunjanganistri) * (-1);

    totalgajibulanan = gajipokok + tunjangananak + tunjanganistri + asuransi
                            + masukkerja + pajak;

    printf ("\nTotal tunjangan istri = %.2f\n", tunjanganistri);
    printf ("Total tunjangan anak = %.2f\n", tunjangananak);
    printf ("Banyaknya THR = %.2f\n", (5000 * masakerja));
    printf ("Total untuk membayar pajak = %.2f\n", pajak);
    printf ("Bantuan transport = %.2f\n", 3000 * masukkerja);
    printf ("Total polis asuransi = %.2f\n",asuransi);
    printf ("Total gaji bulanan = %.2f", totalgajibulanan);

    return 0;
}
*/

// 3. Program untuk membayar jumlah tiket yang diperlukan

/* #include <stdio.h>

int main() {

    int jumlahtiket, totalbayar, sisabagi, bonus, totalbayartiketbonus, totalbayartiketbiasa;

    printf ("Masukkan jumlah tiket yang akan dibeli = ");
    scanf ("%d", &jumlahtiket);

    bonus = jumlahtiket / 3 ;
    printf ("perhitungan tiket = %d\n", bonus);

    sisabagi = jumlahtiket - (bonus * 3);
    printf ("sisa tiket yang tidak mendapat bonus = %d\n", sisabagi);

    totalbayartiketbonus = bonus * 100000  ;
    printf ("Total harga  = %d\n", totalbayartiketbonus);

    totalbayartiketbiasa = sisabagi * 50000  ;
    printf ("Total harga tiket tanpa bonus = %d\n", totalbayartiketbiasa);

    totalbayar = totalbayartiketbonus + totalbayartiketbiasa  ;
    printf ("Total harga yang akan dibayar = %d", totalbayar);

return 0;
} */


//NOMOR 3 A
// variabel yang benar yaitu int, char


//NOMOR 3 B
/* main()
{
char c, d;
c = 'd';
d = c;
printf("d = %c", d);
}
*/

//NOMOR 3 C
/* int main () {
    int x;

    printf ("Nilai x = ");
    scanf ("%d", &x);

    int Polynomial = (3 * x * x) - (5 * x) + 6 ;

    printf ("Polynomial = %d\n", Polynomial);
} */
