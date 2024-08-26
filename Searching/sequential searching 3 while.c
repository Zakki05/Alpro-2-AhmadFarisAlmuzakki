#include "stdio.h"

void main()
{
    int *A;
    int i,n,x,idx;

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

    i=0;
    printf("\nMasukkan Nilai yang mau dicari : ");
    scanf("%i",&x);
    printf("\n");

     while((x != A[i]) && (i<n))
    {
        i++;
        idx = i;
    }

    if(A[i] == x)
    {
        printf("Ketemu, angka %i di indeks ke %i",x,idx);
    }
    else
    {
        printf("Tidak Ketemu");
    }

    fflush(stdin);
}
