/*** Program :  array16.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  29/3/2022
     Deskripsi : soal no 1 buatlah program yang meminta input user untuk ukuran array A dimensi dinamis
                 input random. carilah nilai tertinggi dan terendah dari array tersebut
*/

#include "stdio.h"
#include "stdlib.h"

void main ()
{
    int *A;
    int i,ukuran,max,min;

    printf("Masukkan Ukuran Array : ");
    scanf("%i",&ukuran);

    srand(time(NULL));

    A=(int*)malloc(ukuran*sizeof(int));
    max = -999;
    min = 999;

    for (i=0;i<ukuran;i++)
    {
        A[i]=rand()/1000;
    }
    printf("Nilai Array A = ");

    for (i=0;i<ukuran;i++)
    {
        printf(" \t %i",A[i]);
    }

    for (i=0;i<ukuran;i++)
    {
            if(A[i]>max)
            {
                max=A[i];
            }
            if(A[i]<min)
            {
                min=A[i];
            }
    }

    printf("\nNilai Max nya adalah = %i \n",max);
    printf("Nilai Min nya adalah = %i",min);
    printf("\n");



    free((void*)A);
}
