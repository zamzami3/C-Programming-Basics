        // Praktikum 16
// nomor 4 a
/* int OddEvenTest(int);
main()
{
int a, hasil;
a = 5;
hasil = OddEvenTest(a);
printf("a=%d; hasil=%d\n",a,hasil);
}
OddEvenTest(int b)
{
int a;
a = b % 2;
return a;
} */

// nomor 4 b
void demo(void);
main()
{
int i=0;
while(i < 3) {
demo();
i++;
}
}
void demo(void)
{
auto int var_auto = 0;
static int var_static = 0;
printf("auto = %d, static = %d\n",
var_auto, var_static);
++var_auto;
++var_static;
}

// nomor 4 c
/* void fung_a(void);
void fung_b(void);
int x = 20;
main()
{
x += 2;
fung_a();
fung_a();
printf("\nNilai x dalam main() = %d\n\n",x);
}
void fung_a(void)
{
static x = 5;
x++;
printf("Nilai x dalam fung_a() = %d\n", x);
fung_b();
}
void fung_b(void)
{
x--;
printf("Nilai x dalam fung_b() = %d\n", x);
}
*/

// nomor 5 prak 16
/* #include <stdio.h>
void masukan(int banyakdata, int data[]) {
    for (int i = 0; i < banyakdata; i++) {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }
}
int average(int banyakdata, int data[]) {
    int jmldata = 0;
    for (int i = 0; i < banyakdata; i++) {
        jmldata += data[i];
    }
    return jmldata / banyakdata;
}
int main() {
    int banyakdata;

    printf("Masukkan jumlah data: ");
    scanf("%d", &banyakdata);

    int data[banyakdata];

    masukan(banyakdata, data);

    int rata_rata = average(banyakdata, data);

    printf("Data yang dimasukkan adalah: ");
    for (int i = 0; i < banyakdata; i++) {
        printf("%d ", data[i]);
    }
    printf("\nRata-rata dari seluruh data adalah: %d\n", rata_rata);
    return 0;
} */
// nomor 6 praktikum
/* #include <stdio.h>
float f_to_i(float kaki){
    return kaki * 12;
}
float i_to_cm(float inchi) {
    return inchi * 2.54;
}
float cm_to_m(float cm){
    return cm * 0.01;
}
float main () {
    float kaki;

    printf ("Masukkan ukuran dalam satuan kaki: ");
    scanf ("%f", &kaki);

    float inchi = f_to_i(kaki);

    float cm = i_to_cm(inchi);

    float m = cm_to_m(cm);

    printf("Ukuran dalam meter: %.2f\n", m);

    return 0;
} */
