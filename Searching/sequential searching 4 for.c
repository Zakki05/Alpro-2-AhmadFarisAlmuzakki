#include "stdio.h"

void main()
{
    int *A;
    int i,n,x,ketemu,idx,jumlah;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    srand(time(NULL));

    A=(int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++)
    {
        printf("Masukkan Nilai array indeks ke %i : ",i);
        scanf("%i",&A[i]);
    }

    printf("\nNilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("%i \t",A[i]);
    }

    jumlah = 0;
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
            jumlah = jumlah+1;
            printf("Ketemu, angka %i ketemu di indeks ke-%i \n",x,idx);
        }
    }

    if(ketemu == 0)
    {
        printf("Tidak Ketemu");
    }

    printf("Jumlahnya : %i",jumlah);
    fflush(stdin);
}
