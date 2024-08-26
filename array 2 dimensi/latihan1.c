/***
    Nama : Ahmad Faris Almuzakki
    No Bp : 2101092028
    Kelas : Mi 1A
    soal : 1. Buatlah program yang meminta input user untuk ukuran matrik A dan B
    kemudian isi matriks A dengan input user manual dan matriks B random
    tampilkan nilai matriks A dan B
*/

#include "stdio.h"

void main()
{
    int A[100][100];
    int B[100][100];
    int i,j,n,m;

    printf("Masukkan ukuran baris : ");
    scanf("%i",&m);

    printf("Masukkan ukuran kolom : ");
    scanf("%i",&n);

    srand(time(NULL));

    printf("\n");

    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Masukkan nilai array A[%i][%i] : ",i,j);
            scanf("%i",&A[i][j]);
        }
    }

    printf("\nNilai Array A : \n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %i",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            B[i][j]=rand()/1000;
        }
    }

    printf("\nNilai Array B : \n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %i",B[i][j]);
        }
        printf("\n");
    }
}

