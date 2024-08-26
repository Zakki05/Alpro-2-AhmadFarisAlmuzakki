#include "stdio.h"

void main()
{
    int *A;
    int i,n,x,ketemu,idx;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    srand(time(NULL));

    A=(int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++)
    {
        A[i]=rand()/1000;
    }

    printf("\nNilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("%i \t",A[i]);
    }

    ketemu = 0;
    printf("\nMasukkan Nilai yang mau dicari : ");
    scanf("%i",&x);
    printf("\n");

    for (i=0;i<n;i++)
    {
        if(x==A[i])
        {
            ketemu = 1;
            idx = i;
        }
    }

    if(ketemu == 1)
    {
        printf("Ketemu, angka %i ketemu di indeks ke-%i",x,idx);
    }
    else
    {
        printf("Tidak Ketemu");
    }

    fflush(stdin);
}
