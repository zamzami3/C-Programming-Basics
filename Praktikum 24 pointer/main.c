//PRAKTIKUM 24 POINTER 1

//Nyoba
/*#include <stdio.h>
// Fungsi rekursif untuk menghitung penjumlahan bilangan hingga n
int sum(int n) {
    // Base case: jika n adalah 0, maka hasilnya adalah 0
    if (n == 0) {
        return 0;
    } else {
        // Rekursi: panggil sum dengan nilai n - 1, kemudian tambahkan n
        return sum(n - 1) + n;
    }
}
int main() {
    int n;
    printf("Masukkan bilangan n: ");
    scanf("%d", &n);

    // Panggil fungsi sum
    int hasil = sum(n);

    printf("Hasil penjumlahan bilangan hingga %d adalah %d\n", n, hasil);

    return 0;
}*/

// Nomor 1
/*main () {
int y, x = 87;
int *px;

px = &x;
y = *px;

printf("Alamat x = %p\n", &x);
printf("Isi px = %p\n", px);
printf("Isi x = %d\n", x);
printf("Nilai yang ditunjuk oleh px = %d\n", *px);
printf("Nilai y = %d\n", y);
} */

//Nomor 2
/*main () {
float *pu, nu;
double u = 1234.0;

pu = &u;
nu = *pu;

printf("Alamat dari u = %p\n", &u);
printf("Isi pu = %p\n", pu);
printf("Isi u = %lf\n", u);
printf("Nilai yang ditunjuk oleh pu = %f\n", *pu);
printf("Nilai nu = %f\n", nu);
} */

//Nomor 3
/*main () {
float d = 54.5f, *pd;

printf ("Isi d mula-mula = %g\n", d);

pd = &d;
*pd += 10;

printf ("Isi d sekarang = %g\n", d);
} */

//Nomor 4
/*main () {
int z = 20, s = 30, *pz, *ps;

pz = &z;
ps = &s;
*pz += *ps;
printf ("z = %d\n", z);
printf ("s = %d\n", s);
} */
//Nomor 5
/*main () {
char c = 'Q', *cp = &c;

printf("%c %c\n", c, *cp);
c = '/';
printf ("%c %c\n", c, *cp);
*cp = '(';
printf ("%c %c\n", c, *cp);
} */

//Nomor 6
/*main() {
int x = 1, y = 2, *ip;
ip = &x;
y = *ip;
*ip = 3;
printf("x = %d, y = %d", x, y);
} */

//Nomor 7
/*main(){
int i1, i2, *p1, *p2;
i1 = 9;
p1 = &i1;
i2 = *p1 / 2 - 2 * 3;
p2 = p1;
printf("i1=%d,i2=%d,*p1=%d,*p2=%d\n",i1,i2,*p1,*p2);
}*/

//NOmor 8
/*main() {
int count = 10, *temp, sum = 7;
temp = &count;
*temp = 32;
temp = &sum;
*temp = count;
sum = *temp * 4;
printf("count=%d, *temp=%d, sum=%d\n", count,*temp, sum );
} */

// nomor 9
/*main(){
int count = 13, sum = 9, *x, *y;
x = &count;
*x = 27;
y = x;
x = &sum;
*x = count;
sum = *x / 2 * 3;
printf("count=%d, sum=%d, *x=%d, *y=%d\n", count,sum,*x,*y);
} */

//nomor 10
/*int r, q = 7;
int go_crazy(int *, int *);
main() {
int *ptr1 = &q;
int *ptr2 = &q;
r = go_crazy(ptr1, ptr2);
printf("q=%d, r=%d, *ptr1=%d,*ptr2=%d\n",q,r,*ptr1,*ptr2);
ptr2 = &r;
go_crazy(ptr2, ptr1);
printf("q=%d, r=%d, *ptr1=%d, *ptr2=%d\n",q,r,*ptr1,*ptr2);
}
int go_crazy(int *p1, int *p2){
int x = 5;
r = 12;
*p2 = *p1 * 2;
p1 = &x;
return *p1 * 3;
}*/


main () {
    int y, x = 87;
    int *px;

    px = &x;
    y = *px;

    printf ("Alamat x = %p\n", &x);
    printf ("Isi px = %p\n", px);
    printf ("Isi x = %d\n", x);
    printf ("Nilai yang ditunjuk oleh px = %d\n", *px);
    printf ("Nilai y = %d\n", y);
}
