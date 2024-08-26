#include "stdio.h"

void main()
{
    int A[100];
    int i,n,x;

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

    i=0;
    printf("\nMasukkan Nilai yang mau dicari : ");
    scanf("%i",&x);
    printf("\n");

    while((x != A[i]) && (i<n))
    {
        i++;
    }

    if(A[i]==x)
    {
        printf("Ketemu");
    }
    else
    {
        printf("Tidak Ketemu");
    }

}
