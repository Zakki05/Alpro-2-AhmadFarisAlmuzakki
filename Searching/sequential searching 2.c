#include "stdio.h"

void main()
{
    int A[100];
    int i,n,x,ketemu;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    for (i=0;i<n;i++)
    {
        printf("Nilai Array A indeks %i = ",i);
        scanf("%i",&A[i]);
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
        }
    }

    if(ketemu == 1)
    {
        printf("Ketemu");
    }
    else
    {
        printf("Tidak Ketemu");
    }

}
