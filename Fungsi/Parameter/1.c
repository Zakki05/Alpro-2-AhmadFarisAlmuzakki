#include "stdio.h"

void persegipanjang()
{
    int p,l,luas;
    printf("\nMasukkan Panjang : ");
    scanf("%i",&p);
    printf("Masukkan Lebar : ");
    scanf("%i",&l);
    luas = p * l;
    printf("Luas Persegi panjang : %i ",luas);
}

void main()
{
    int i,n;
    printf("Masukkan Jumlah persegi panjang : ");
    scanf("%i",&n);
    for (i=0;i<n;i++)
    {
        printf("Persegi panjang ke %i ",i+1);
        persegipanjang();
        printf("\n\n");
    }
}
