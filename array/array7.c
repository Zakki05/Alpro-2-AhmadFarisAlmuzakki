/*** Program :  array7.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  22/3/2022
     Deskripsi : mo 1 buatlah program yang meminta user input ukuran dan nilai array
                 carilah total dan rata nilai array tersebut
*/

#include "stdio.h"

void main ()
{
    int A[100];
    int i,ukuran,tot;
    float rata2;

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

    tot = 0;
    for (i=0;i<ukuran;i++)
    {
            tot = tot+A[i];
    }

    printf("\nTotal : %i",tot);
    rata2 = tot / ukuran;
    printf("\nrata-rata : %0.02f",rata2);
}
