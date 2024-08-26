/*** Program :  array2.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  15/3/2022
     Deskripsi : buat program yang meminta input user untuk ukuran array dan nilai dalam array,
                 tampilkan input nilai tersebut
*/

#include "stdio.h"

void main ()
{
    int B [100];
    int i,ukuran;

    printf("Masukkan Ukuran Array : ");
    scanf("%i",&ukuran);

    for (i=0;i<ukuran;i++)
    {
        printf("Masukkan nilai array A indeks ke %i =  ",i);
        scanf("%i",&B[i]);
    }

    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",B[i]);
    }
}

