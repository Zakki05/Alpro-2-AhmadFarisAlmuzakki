/*** Program :  array14.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  29/3/2022
     Deskripsi : No 1 SRAND
*/

#include "stdio.h"

void main ()
{
    int A[100],B[100],C[100];
    int i,ukuran;

    printf("Masukkan Ukuran Array : ");
    scanf("%i",&ukuran);

    srand(time(NULL)); ///meminta angka acak ke komputer

    for (i=0;i<ukuran;i++)
    {
        A[i]=rand()/1000; ///mengisikan angka acak ke array
    }
    printf("Nilai Array A = ");

    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",A[i]);
    }
    printf("\n");

    for (i=0;i<ukuran;i++)
    {
        B[i]=rand()/1000;
    }
    printf("Nilai Array B = ");

    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",B[i]);
    }

    for (i=0;i<ukuran;i++)
    {
        if(A[i]>=B[i])
        {
            C[i]=A[i];
        }
        else
        {
            C[i]=B[i];
        }
    }
    printf("\n");
    printf("Nilai Array C = ");
    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",C[i]);
    }
}
