#include "stdio.h"
#include "stdlib.h"

void main()
{
    int *A;
    int n,i,j,imax,swap;
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

    for(i=0;i<n-1;i++)
    {
        printf("\n\nFase ke-%i\n",i);
        imax = i;
        for(j=n-1;j>i;j--)
        {
            if(A[imax]>A[j])
            {
                imax = j;
            }
        }

        swap = A[imax];
        A[imax] = A[i];
        A[i] = swap;

        for(j=0;j<n;j++)
        {
            printf("%i \t",A[j]);
        }
        printf("\n");
    }

    printf("\nIsi tabel terurut dari kecil ke besar : ");
    for (i=0;i<n;i++)
    {
        printf("%i \t",A[i]);
    }
}

