#include "stdio.h"

long int luas (int panjang, int lebar)
{
    int L;

    L = panjang * lebar;
    return L;
}

long int keliling(int panjang, int lebar)
{
    int K;

    K = 2 * (panjang+lebar);
    return K;
}

long int volume (int panjang, int lebar, int tinggi)
{
    int V;

    V = panjang * lebar * tinggi;
    return V;
}

void main()
{
    int p,l,t;

    printf("Masukkan Panjang : ");
    scanf("%i",&p);
    printf("Masukkan Lebar : ");
    scanf("%i",&l);
    printf("Masukkan Tinggi : ");
    scanf("%i",&t);

    printf("luas = %li",luas(p,l));
    printf("\nkeliling = %li",keliling(p,l));
    printf("\nvolume = %li",volume(p,l,t));
}


