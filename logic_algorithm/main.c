#include <stdio.h>
#include <string.h>
#define MAX 15

struct data {
    char judul[30];
    char penulis[30];
    int terbit;
    int harga;
    int stock;
} buku[MAX] = { {"No Longer Human", "Osamu Dazai", 2020, 70000, 50},
                {"The Human Chair", "Edogawa Ranpo", 2016, 100000, 20},
                {"River Mist And Other Stories", "Doppo Kunikida", 1983, 4799000, 3},
                {"Hell Screen", "Ryuunosuke Akutagawa", 2022, 170000, 50},
                {"World After the Fall", "Singnsong", 2022, 375000, 3},
                {"Omniscient Reader's Viewpoint", "Singnsong", 2022, 145000, 30},
                {"Laskar Pelangi", "Andrea Hirata", 2005, 79000, 15},
                {"Violet Evergarden", "Kana Akatsuki", 2015, 149000, 20},
                {"The Apothecary Diaries", "Natsu Hyūga", 2011, 119000, 15},
                {"86 -Eighty Six-", "Asato Asato", 2017, 149000, 15},
                {"Beyond the Boundary", "Nagomu Torii", 2012, 119000, 15},
                {"To Me, the One Who Loved You", "Yomoji Otono", 2016, 119000, 13},
                {"Three Days of Happiness", "Sugaru Miaki", 2013, 179000, 7},
                {"Strike the Blood", "Gakuto Mikumo", 2011, 129000, 5},
                {"Weathering with You", "Makoto Shinkai", 2019, 189000, 15}};

void classTable(void);
void list(void);
void beli(void);
void cariJudul(void);
void cariPenulis(void);
void cekStok(void);
void printTable(int);

int main() {
    int opsi;
    char ans;
    while(1) {
        list();
        printf("\nLayanan :\n");
        printf("(1) Beli Buku\n(2) Cari Judul Buku\n(3) Cari Penulis\n(4) Cek Stok Buku\n(5) Keluar\n");
        printf("\nMasukkan opsi : ");
        scanf("%d", &opsi);
        fflush(stdin);

        switch (opsi)
        {
        case 1:
            beli();
            break;
        case 2:
            cariJudul();
            break;
        case 3:
            cariPenulis();
            break;
        case 4:
            cekStok();
            break;
        case 5:
            printf("\nTerima Kasih Sudah Berkunjung, Jangan Lupa Baca Buku :)\n\n");
            return 0;
        default:
            printf("\nMohon Maaf, menu tidak ada :(");
            break;
        }

        int ask = 1;
        while (ask != 0) {
            printf("\nkembali ke menu utama [y/t] ? ");
            scanf("%c", &ans);
            fflush(stdin);
            printf("\n");
            if (ans == 'y') {
                ask = 0;
                continue;
            } else if (ans == 't') {
                printf("Terima Kasih Sudah Berkunjung, Jangan Lupa Baca Buku :)\n\n");
                return 0;
            } else {
                printf("input salah, coba lagi");
            }
        }
    }
}

void classTable() {
    printf("=============================================================================================\n");
    printf("Judul\t\t\t\tPenulis\t\t\tTahun Terbit\tHarga\t\tStok\n");
    printf("=============================================================================================\n");
}

void printTable(int i) {
    int tlen = strlen(buku[i].judul);
    char tspace[10] = "\t";
    char wspace[10] = "\t";
    int j = 28;
    while (tlen < j) {
        strcat(tspace, "\t");
        j -= 12;
    }
    int wlen = strlen(buku[i].penulis);
    int k = 20;
    while (wlen < k) {
        strcat(wspace, "\t");
        k -= 12;
    }

    printf("%s%s%s%s    %d\tRp %d\t %d\n", buku[i].judul, tspace, buku[i].penulis, wspace, buku[i].terbit, buku[i].harga, buku[i].stock);
    printf("---------------------------------------------------------------------------------------------\n");
}

void list() {
    printf("\n\t\t\t\t\tToko Buku\n\n");
    classTable();
    for (int i = 0; i < MAX; i++) {
        printTable(i);
    }
}

void beli() {
    int found, index;
    char in_buku[30];
    printf("\nJudul buku : ");
    fgets(in_buku, sizeof in_buku, stdin);
    in_buku[strcspn(in_buku, "\n")] = 0;
    found = 0;

    for (int i = 0; i < MAX; i++) {
        if (strcasecmp(buku[i].judul, in_buku) == 0) {
            found++;
            index = i;
        }
    }
    if (found != 0) {
        char yesno;
        classTable();
        printTable(index);
        printf("\nIngin beli buku ini [y/t] ? ");
        scanf("%c", &yesno);
        fflush(stdin);
        if (yesno == 'y' || yesno == 'Y') {
            if (buku[index].stock > 0) {
                buku[index].stock -= 1;
            } else {
                printf("\nMaaf, Stock untuk buku ini Habis :(\n");
            }
        }
    } else {
        printf("\nBuku tidak ada :(\n");
    }
}

void cariJudul() {
    int found, index;
    char in_buku[30];
    printf("\nJudul buku : ");
    fgets(in_buku, sizeof in_buku, stdin);
    in_buku[strcspn(in_buku, "\n")] = 0;
    found = 0;

    for (int i = 0; i < MAX; i++) {
        if (strcasecmp(buku[i].judul, in_buku) == 0) {
            found++;
            index = i;
        }
    }

    if (found != 0) {
        printf("\nBuku Ditemukan\n");
        classTable();
        printTable(index);
        printf("\n");
    } else {
        printf("\nBuku tidak ada :(\n");
    }
}

void cariPenulis() {
    int found;
    char in_writer[30];
    printf("\nNama Penulis : ");
    fgets(in_writer, sizeof in_writer, stdin);
    in_writer[strcspn(in_writer, "\n")] = 0;
    found = 0;

    for (int i = 0; i < MAX; i++) {
        if (strcasecmp(buku[i].penulis, in_writer) == 0) {
            found++;
            printTable(i);
        }
    }

    if (found == 0) {
        printf("\nPenulis Tidak Ditemukan :(\n");
    }
}


void cekStok() {
    int found, index;
    char in_buku[30];
    printf("\nJudul buku : ");
    fgets(in_buku, sizeof in_buku, stdin);
    in_buku[strcspn(in_buku, "\n")] = 0;
    found = 0;

    for (int i = 0; i < MAX; i++) {
        if (strcasecmp(buku[i].judul, in_buku) == 0) {
            found++;
            index = i;
        }
    }

    if (found != 0) {
        printf("Judul : %s\n", buku[index].judul);
        if (buku[index].stock > 0) {
            printf("Stock : %d", buku[index].stock);
        } else {
            printf("Stock : Habis :(\n");
        }
        printf("\n");
    } else {
        printf("\nBuku tidak ada :(\n");
    }
}
