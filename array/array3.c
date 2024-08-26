/*** Program :  array3.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  15/3/2022
     Deskripsi : buat program yang meminta input ukuran dua buah array, array a diinputkan nilainya,
                 salin nilai dalam array a ke b, tampilkan array b
*/

#include "stdio.h"

void main ()
{
    int A[100],B[100];
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
        B[i]=A[i];
    }
    printf("Nilai Array B = ");

    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",B[i]);
    }
}
