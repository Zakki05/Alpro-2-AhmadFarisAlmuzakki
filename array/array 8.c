/*** Program :  array8.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  15/3/2022
     Deskripsi : no 2
*/

#include "stdio.h"

void main ()
{
    int A[100],B[100],C[100];
    int i,ukuran;

    printf("Masukkan Ukuran Array : ");
    scanf("%i",&ukuran);

    for (i=0;i<ukuran;i++)
    {
        printf("Masukkan nilai array A indeks ke %i =  ",i);
        scanf("%i",&A[i]);
    }
    printf("Nilai Array A = ");

    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",A[i]);
    }
    printf("\n");

    for (i=0;i<ukuran;i++)
    {
        printf("Masukkan nilai array B indeks ke %i =  ",i);
        scanf("%i",&B[i]);
    }
    printf("Nilai Array B = ");

    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",B[i]);
    }

    for (i=0;i<ukuran;i++)
    {
            C[i] = A[i]+B[i];
    }

    printf("\n\nNilai Array C = ");

    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",C[i]);
    }

}
