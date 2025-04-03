// PRAKTIKUM 7

// SOAL PERCOBAAN NOMOR 1
/* #include <stdio.h>

int main () {
    int hari;

    printf ("1. Minggu\n");
    printf ("2. Senin\n");
    printf ("3. Selasa\n");
    printf ("4. Rabu\n");
    printf ("5. Kamis\n");
    printf ("6. Jumat\n");
    printf ("7. Sabtu\n");

    printf ("Masukkan pilihan hari anda: ");
    scanf ("%d", &hari);

    switch (hari){
    case 1:
        printf ("Anda memilih Minggu");
    break;

    case 2:
        printf ("Anda memilih Senin");
    break;

    case 3:
        printf ("Anda memilih Selasa");
    break;

    case 4:
        printf ("Anda memilih Rabu");
    break;

    case 5:
        printf ("Anda memilih Kamis");
    break;

    case 6:
        printf ("Anda memilih Jumat");
    break;

    case 7:
        printf ("Anda memilih Sabtu");
    break;

    default:
        printf ("Hari tidak valid");
    break;
    }
return 0;
}
*/

// SOAL PERCOBAN NOMOR 2

/* int main() {
    int valid_operator = 1;
    //valid_operator diinisialisasi dengan logika 1
    char operator;
    int number1, number2, result;

    printf("Masukkan 2 buah bilangan & sebuah operator\n");
    printf("dengan format : number1 operator number2\n\n");
    scanf("%d %c %d", &number1, &operator, &number2);

    switch (operator) {

    case '*' :
    result = number1 * number2;

    break;

    case '/' :
    result = number1 / number2;
        if (number2 == 0){
            printf ("Invalid Operator!");
        }
        else {
            printf ("valid operator");
        }
    break;

    case '+' :
    result = number1 + number2;
    break;

    case '-' :
    result = number1 - number2;
    break;

    default :
        if (operator == *) {
        printf ("");
        }

        else if (hari == 2) {
        printf ("Anda memilih Senin");
        }

        else if (operator == ) {
        printf ("Anda memilih Selasa");
        }

        else if (operator == /){
        printf ("Valid operator");
        }

        else {
        printf ("Invalid operator!");
        }
        valid_operator = 0;
        printf("\n%g %c %g is %g\n", number1, operator, number2, result );
    break;
    }
}


int main() {
    int valid_operator = 1;
    //valid_operator diinisialisasi dengan logika 1
    char operator;
    float number1, number2, result;

    printf("Masukkan 2 buah bilangan & sebuah operator\n");
    printf("dengan format : number1 operator number2\n\n");
    scanf("%f %c %f", &number1, &operator, &number2);

    switch (operator) {

    case '*' :
        result = number1 * number2;
        break;

    case '/' :
        result = number1 / number2;
        break;

    case '+' :
        result = number1 + number2;
        break;

    case '-' :
        result = number1 - number2;
        break;

    default :
        valid_operator = 0;
        break;

}
    if (valid_operator){
        printf("\n%g %c %g is %g\n", number1, operator, number2, result );
        }

    else {
    printf("Invalid operator!\n");
    }
} */
//SOAL PERCOBAAN NOMOR 3

#include <stdio.h>

int main () {
    int hitung, panjang, tinggi;

    printf ("Pilih opsi yang akan ditampilkan\n");
    printf ("1. Menghitung volume kubus\n");
    printf ("2. Menghitung luas lingkaran\n");
    printf ("3. Menghitung volume silinder\n");

    printf ("Masukkan pilihan = ");
    scanf("%d", &hitung);

    switch (hitung) {
    case 1:
        printf ("Masukkan panjang sisi kubus = ");
        scanf ("%d", &panjang);
        printf ("Volume kubus = %d", panjang * panjang * panjang);
        break;
    case 2:
        printf ("Masukkan jari-jari lingkaran = ");
        scanf ("%d", &panjang);
        printf ("Luas lingkaran = %.2f", 3.14 * panjang * panjang);
        break;
    case 3:
        printf ("Masukkan jari-jari lingkaran silinder = ");
        scanf ("%d", &panjang);
        printf ("Masukkan tinggi silinder = ");
        scanf ("%d", &tinggi);
        printf ("Volume silinder = %.2f", 3.14 * panjang * panjang * tinggi);
        break;
    default:
        printf ("Pesan kesalahan\n");
        break;
    }
return 0;
}








/* #include <stdio.h>

int main(){
    int kode;

    printf("Masukkan bilangan 1 - 7 : ");
    scanf("%d", &kode);

    switch (kode){
        case '1' :
            printf("Minggu");
            break;
        case '2' :
            printf("Senin");
            break;
        case '3' :
            printf("Selasa");
            break;
        case '4' :
            printf("Rabu");
            break;
        case '5' :
            printf("Kamis");
            break;
        case '6' :
            printf("Jumat");
            break;
        case '7' :
            printf("Sabtu");
            break;
        default:
            printf("Hari Tidak Valid");
    }
    return 0;
}
*/
