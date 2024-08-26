/*** Program :  array8.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  22/3/2022
     Deskripsi : no 5
*/

#include "stdio.h"

void main ()
{
    int A[100],B[100];
    int i,ukuran,j,x;

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

    printf("Masukkan Nilai tambahan awal : ");
    scanf("%i",&x);

    j=1;
    for (i=0;i<ukuran;i++)
    {
        B[j]=A[i];
        j++;
        B[0]=x;
    }

    printf("Nilai Array A = ");

    for (i=0;i<ukuran+1;i++)
    {
        printf(" \t %i",B[i]);
    }
}
