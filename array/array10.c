/*** Program :  array10.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  22/3/2022
     Deskripsi : no 4
*/

#include "stdio.h"

void main ()
{
    int A[100];
    int i,ukuran,j;

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

    j=0;
    for (i=0;i<ukuran;i++)
    {
        A[j]=A[j+1];
        j++;
    }

    printf("Nilai Array A = ");

    for (i=0;i<j-1;i++)
    {
        printf(" \t %i",A[i]);
    }
}
