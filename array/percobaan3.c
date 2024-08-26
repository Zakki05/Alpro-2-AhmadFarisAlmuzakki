/*** buat program yang meminta input ukuran dua buah array, array a diinputkan nilainya,
salin nilai dalam array a ke b, tampilkan array b */

#include "stdio.h"

void main()
{
    int A[100],B[100];
    int i,n;

    printf("Masukkan Jumlah array : ");
    scanf("%i",&n);

    for (i=0;i<n;i++)
    {
        printf("Nilai array dari %i : ",i);
        scanf("%i",&A[i]);
    }

    printf("Nilai dari array A : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",A[i]);
    }

    for (i=0;i<n;i++)
    {
        B[i]=A[i];
    }

    printf("\nNilai dari array B : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",B[i]);
    }


}
