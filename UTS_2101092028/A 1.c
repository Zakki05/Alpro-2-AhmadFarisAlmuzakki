/***
    A 1
*/

#include "stdio.h"
#include "stdlib.h"

void main()
{
    int A[100],C[100];
    int *B;
    int i,n;

    printf("Masukkan Ukuran array : ");
    scanf("%i",&n);

    srand(time(NULL));

    B=(int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++)
    {
        A[i]=rand()/1000;
    }

    printf("\nNilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",A[i]);
    }

    printf("\n\n");
    for (i=0;i<n;i++)
    {
        printf("Masukkan nilai Array B indeks ke-%i : ",i);
        scanf("%i",&B[i]);
    }

    printf("\nNilai Array B : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",B[i]);
    }

    for (i=0;i<n;i++)
    {
        if (A[i]>B[i])
        {
            C[i]=1;
        }
        else if (A[i]==B[i])
        {
            C[i]=1;
        }
        else
        {
            C[i]=0;
        }
    }

    printf("\nNilai Array C : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",C[i]);
    }
}
