/*** Program :  array1.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  15/3/2022
     Deskripsi : menginputkan dan menampilkan
                 nilai dalam array
*/

#include "stdio.h"

void main ()
{
    int B [7];
    int i;

    for (i=0;i<=6;i++)
    {
        printf("Masukkan nilai array A indeks ke %i =  ",i);
        scanf("%i",&B[i]);
    }

    for (i=0;i<=6;i++)
    {
        printf(" \n %i",B[i]);
    }
}
