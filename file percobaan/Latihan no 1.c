/***
    Nama    : Ahmad Faris Almuzakki
    No BP   : 2101092028
    Kelas   : MI 1A
    tanggal : 12/04/2022
    Desc    : 1. buat program meminta input nilai array A yang dinamis dan input user serta
              array B yang bersifat statis random. buat tampilan array
              a. jika nilai array A lebih besar dari nilai array B maka Nilai array C sama dengan array A
              b. jika nilai array B lebih besar dari nilai array A maka nilai array C sama dengan array B
              c. jika nilai array A sama dengan array B maka nilai array C sama dengan array A ditambah array B
*/

#include "stdio.h"
#include "stdlib.h"

void main()
{
    int *A;
    int B[100],C[100];
    int n,i;

    printf("1. buat program meminta input nilai array A yang dinamis dan input user serta array B yang bersifat statis random. buat tampilan array\n");
    printf("a. jika nilai array A lebih besar dari nilai array B maka Nilai array C sama dengan array A\n");
    printf("b. jika nilai array B lebih besar dari nilai array A maka nilai array C sama dengan array B\n");
    printf("c. jika nilai array A sama dengan array B maka nilai array C sama dengan array A ditambah array B\n\n");
    printf("Masukkan ukuran array : ");
    scanf("%i",&n);

    srand(time(NULL));

    A=(int*)malloc(n*sizeof(int));

    printf("\n");

    for (i=0;i<n;i++)
    {
        printf("Masukkan ukuran array A indeks ke %i : ",i);
        scanf("%i",&A[i]);
    }
     printf("\nNilai Array A = ");

    for (i=0;i<n;i++)
    {
        printf("\t %i",A[i]);
    }

    for(i=0;i<n;i++)
    {
        B[i]=rand()/10000;
    }

    printf("\nNilai Array B = ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",B[i]);
    }

    for(i=0;i<n;i++)
    {
        if (A[i]>B[i])
        {
            C[i]=A[i];
        }
        else if (A[i]<B[i])
        {
            C[i]=B[i];
        }
        else if (A[i]==B[i])
        {
            C[i]=A[i]+B[i];
        }
    }
    printf("\nNilai Array C = ");

    for(i=0;i<n;i++)
    {
        printf("\t %i",C[i]);
    }

    fflush(stdin);
}
