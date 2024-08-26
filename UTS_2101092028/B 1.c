/***
    B 1
*/

#include "stdio.h"
#include "stdlib.h"

void main()
{
    int A[100],C[100];
    int *B;
    int i,n;

    printf("masukkan ukuran array : ");
    scanf("%i",&n);

    srand(time(NULL));

    B=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        A[i]=rand()/1000;
    }

    printf("\nNilai Array A : ");
    for(i=0;i<n;i++)
    {
        printf("\t %i",A[i]);
    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Masukkan Nilai array B indeks ke-%i : ",i);
        scanf("%i",&B[i]);
    }

    printf("\nNilai Array B : ");
    for(i=0;i<n;i++)
    {
        printf("\t %i",B[i]);
    }

    for(i=0;i<n;i++)
    {
        if(A[i]>B[i])
        {
            C[i]=A[i]+B[i];
        }
        else if (A[i]==B[i])
        {
            C[i]=A[i]+B[i];
        }
        else if (A[i]<B[i])
        {
            C[i]=A[i]-B[i];
        }
    }

    printf("\nNilai array C : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",C[i]);
    }

}
