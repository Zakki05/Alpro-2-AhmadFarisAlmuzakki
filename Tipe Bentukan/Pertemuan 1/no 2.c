/***
Nama : Ahmad Faris Almuzakki
Kelas : MI 1A
No Bp : 2101092028
Soal : Buatlah program yang menampilkan hasil penjumlahan dari dua pecahan, dimana pembilang dan penyebut
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
    pecahan p1,p2,p3;

    printf("Masukkan pembilang pecahan 1 : ");
    scanf("%i",&p1.x);
    printf("Masukkan penyebut pecahan 1 : ");
    scanf("%i",&p1.y);

    printf("Masukkan pembilang pecahan 2 : ");
    scanf("%i",&p2.x);
    printf("Masukkan penyebut pecahan 2 : ");
    scanf("%i",&p2.y);

    p3.y=(p1.y*p2.y);
    p3.x=(p1.x*(p3.y/p1.y))+(p2.x*(p3.y/p2.y));

    printf("\nPecahan pertama (%i/%i)",p1.x,p1.y);
    printf("\nPecahan Kedua (%i/%i)",p2.x,p2.y);
    printf("\nHasil Penjumlahan pecahan adalah (%i/%i)",p3.x,p3.y);

}
