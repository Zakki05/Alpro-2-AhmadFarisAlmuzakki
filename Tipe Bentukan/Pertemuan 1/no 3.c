/***
Nama : Ahmad Faris Almuzakki
Kelas : MI 1A
No Bp : 2101092028
Soal : Buatlah program yang menampilkan hasil penjumlahan,pengurangan,perkalian,pembagian dari dua pecahan, dimana pembilang dan penyebut
masing-masing pecahan diinputkan oleh user
*/

#include "stdio.h"

typedef struct
{
    int x;
    int y;
}pecahan;

void main()
{
    char ulang;
    do
    {
    pecahan p1,p2,p3;
    int menu;


    printf("\t===PILIHAN MENU===\n\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n\n");

    printf("Masukkan pembilang pecahan 1 : ");
    scanf("%i",&p1.x);
    printf("Masukkan penyebut pecahan 1 : ");
    scanf("%i",&p1.y);

    printf("Masukkan pembilang pecahan 2 : ");
    scanf("%i",&p2.x);
    printf("Masukkan penyebut pecahan 2 : ");
    scanf("%i",&p2.y);

    printf("\nMasukkan Pilihan Menu : ");
    scanf("%i",&menu);

    switch(menu)
    {
        case 1 : printf("\nMENU 1 : PENJUMLAHAN\n");
                 p3.y=(p1.y*p2.y);
                 p3.x=(p1.x*(p3.y/p1.y))+(p2.x*(p3.y/p2.y));

                 printf("\nPecahan pertama (%i/%i)",p1.x,p1.y);
                 printf("\nPecahan Kedua (%i/%i)",p2.x,p2.y);
                 printf("\nHasil Penjumlahan pecahan adalah (%i/%i)",p3.x,p3.y);
                 break;

        case 2 : printf("\nMENU 2 : PENGURANGAN\n");
                 p3.y=(p1.y*p2.y);
                 p3.x=(p1.x*(p3.y/p1.y))-(p2.x*(p3.y/p2.y));

                 printf("\nPecahan pertama (%i/%i)",p1.x,p1.y);
                 printf("\nPecahan Kedua (%i/%i)",p2.x,p2.y);
                 printf("\nHasil Penjumlahan pecahan adalah (%i/%i)",p3.x,p3.y);
                 break;

        case 3 : printf("\nMENU 3 : PERKALIAN\n");
                 p3.x=(p1.x*p2.x);
                 p3.y=(p1.y*p2.y);

                 printf("\nPecahan pertama (%i/%i)",p1.x,p1.y);
                 printf("\nPecahan Kedua (%i/%i)",p2.x,p2.y);
                 printf("\nHasil Perkalian pecahan adalah (%i/%i)",p3.x,p3.y);
                 break;

        case 4 : printf("\nMENU 4 : PEMBAGIAN\n");
                 p3.x = p1.x * p2.y;
                 p3.y = p1.y * p2.x;

                 printf("\nPecahan pertama (%i/%i)",p1.x,p1.y);
                 printf("\nPecahan Kedua (%i/%i)",p2.x,p2.y);
                 printf("\nHasil Penjumlahan pecahan adalah (%i/%i)",p3.x,p3.y);
                 break;
    }
    printf("\n\nApakah Mau Mengulang (Y/N)\n");
    fflush(stdin);
    scanf("%c",&ulang);
    system("cls");
    }while(ulang=='Y' || ulang=='y');


}
