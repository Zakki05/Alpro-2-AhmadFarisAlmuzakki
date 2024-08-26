/*** Program :  array3.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  15/3/2022
     Deskripsi : buat program yang meminta input ukuran dua buah array, array a diinputkan nilainya,
                 salin nilai dalam array a ke b, tampilkan array b dengan nilai b kebalikan dari nilai a
*/

#include "stdio.h"

void main ()
{
    int A[100],B[100];
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
    j=ukuran-1;

    for (i=0;i<ukuran;i++)
    {
        B[j]=A[i];
        j--;
    }
    printf("Nilai Array B = ");

    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",B[i]);
    }

}
