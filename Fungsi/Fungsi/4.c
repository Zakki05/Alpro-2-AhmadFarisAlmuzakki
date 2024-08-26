#include "stdio.h"

long int faktorial(int a)
{
    long int F;
    int i;

    F=1;
    for (i=0;i<a;i++)
    {
        F = F * i;
    }
    return F;
}

long int permutasi (int a, int b)
{
    long int perm;
    perm = faktorial(a) / faktorial(a-b);
    return perm;
}

long int kombinasi (int a, int b)
{
    long int kom;
    kom = faktorial(a) / faktorial(b)*faktorial(a-b);
    return kom;
}

void main()
{
    int x,y;

    printf("Masukkan Nilai X : ");
    scanf("%i",&x);
    printf("Masukkan Nilai Y : ");
    scanf("%i",&y);

    printf("\nNilai Faktorial dari %i = %li",x,faktorial(x));
    printf("\nNilai Faktorial dari %i = %li",y,faktorial(y));
    printf("\nNilai permutasi = %li",permutasi(x,y));
    printf("\nNilai kombinasi = %li",kombinasi(x,y));
}
