#include "stdio.h"

void main()
{
    int A[100],i,n,tot;
    float rata2;

    printf("Masukkan ukuran array : ");
    scanf("%i",&n);

    for (i=0;i<n;i++)
    {
        printf("masukkan nilai array A indeks ke-%i : ",i);
        scanf("%i",&A[i]);
    }

    printf("Nilai array A adalah : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",A[i]);
    }

    tot = 0;
    for (i=0;i<n;i++)
    {
        tot = tot + A[i];
    }

    printf("\nTotal : %i",tot);
    rata2 = tot / n;
    printf("\nrata-rata : %0.02f ",rata2);
}
