/***buat program yang meminta input ukuran dua buah array, array a diinputkan nilainya,
salin nilai dalam array a ke b, tampilkan array b dengan nilai b kebalikan dari nilai a */

#include "stdio.h"

void main()
{
    int A[100],B[100];
    int i,n,j;

    printf("Masukkan ukuran array : ");
    scanf("%i",&n);

    for (i=0;i<n;i++)
    {
        printf("masukkan nilai array ke-%i : ",i);
        scanf("%i",&A[i]);
    }

    printf("Nilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",A[i]);
    }

    j=n-1;
    for (i=0;i<n;i++)
    {
        B[j]=A[i];
        j--;
    }

    printf("\nNilai Array B : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",B[i]);
    }
}
