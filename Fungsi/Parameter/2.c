#include "stdio.h"

void persegipanjang(int panjang, int lebar)
{
    int luas;
    luas = panjang * lebar;
    printf("Luas Persegi panjang : %i ",luas);
}

void main()
{
    int i,n,p,l;
    printf("Masukkan Jumlah persegi panjang : ");
    scanf("%i",&n);
    for (i=0;i<n;i++)
    {
        printf("Persegi panjang ke %i ",i+1);
        printf("\nMasukkan Panjang : ");
        scanf("%i",&p);
        printf("Masukkan Lebar : ");
        scanf("%i",&l);
        persegipanjang(p,l);
        printf("\n\n");
    }
}

