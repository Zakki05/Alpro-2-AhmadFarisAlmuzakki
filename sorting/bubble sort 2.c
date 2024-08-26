#include "stdio.h"
#include "stdlib.h"

void main()
{
    int *A;
    int n,i,d,swap;
    printf("Masukkan banyak isi tabel : ");
    scanf("%i",&n);

    srand(time(NULL));
    A=(int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++)
    {
        A[i]=rand()/1000;
    }

    for (i=0;i<n;i++)
    {
         printf("%i \t",A[i]);
    }

    for(i=1;i<n;i++)
    {
        for(d=n-1;d>=i;d--)
        {
            if(A[d]<A[d-1])
            {
                swap = A[d];
                A[d] = A[d-1];
                A[d-1] = swap;
            }
        }
    }

    printf("\nIsi tabel terurut dari kecil ke besar : ");
    for (i=0;i<n;i++)
    {
        printf("%d \t",A[i]);
    }
}
