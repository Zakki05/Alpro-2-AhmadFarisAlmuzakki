/*** buat program yang meminta input ukuran dua buah array, array a diinputkan nilainya,
salin nilai dalam array a ke b, tampilkan array b dengan nilai b nilai genap dari a */

#include "stdio.h"

void main()
{
    int A[100],B[100];
    int i,n,j;

    printf("masukkan ukurann array : ");
    scanf("%i",&n);

    for (i=0;i<n;i++)
    {
        printf("Masukkan nilai array A ke-%i : ",i);
        scanf("%i",&A[i]);
    }

    printf("Nilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",A[i]);
    }

    j=0;
    for (i=0;i<n;i++)
    {
        if (A[i]%2==0)
        {
            B[j]=A[i];
            j++;
        }
    }

    printf("\nNilai array B : ");
    for (i=0;i<j;i++)
    {
        printf("\t %i",B[i]);
    }
}
