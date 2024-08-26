#include "stdio.h"

void persegipanjang(int panjang, int lebar, int *luas, int *keliling)
{
    *luas = panjang * lebar;
    *keliling = 2 + (panjang + lebar);
}

void main()
{
    int i,n,p,l,L,K;
    printf("Masukkan Jumlah persegi panjang : ");
    scanf("%i",&n);
    for (i=0;i<n;i++)
    {
        printf("Persegi panjang ke %i ",i+1);
        printf("\nMasukkan Panjang : ");
        scanf("%i",&p);
        printf("Masukkan Lebar : ");
        scanf("%i",&l);
        persegipanjang(p,l,&L,&K);
        printf("Luas Persegi Panjang : %i ",L);
        printf("\n");
        printf("Keliling Persegi Panjang : %i ",K);
        printf("\n\n");
    }
}

