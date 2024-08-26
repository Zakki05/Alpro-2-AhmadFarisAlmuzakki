/***
    Nama : Ahmad Faris Almuzakki
    No Bp : 2101092028
    Kelas : MI 1A
    soal : Konversikan Array 2 Dimensi menjadi 1 dimensi
*/

#include "stdio.h"

void main()
{
    int A[100][100];
    int B[100];
    int i,j,m,n,x;

    printf("Masukkan ukuran baris pada array A : ");
    scanf("%i",&m);
    printf("Masukkan ukuran kolom pada array A : ");
    scanf("%i",&n);
    printf("=======================================\n\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Masukkan Nilai Array A[%i][%i] : ",i,j);
            scanf("%i",&A[i][j]);
        }
    }

    printf("\n");
    printf("Nilai Array A 2 Dimensi Adalah : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %i",A[i][j]);
        }
        printf("\n");
    }

    x=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            B[x] = A[i][j];
            x++;
        }
    }

    printf("\n");
    printf("Nilai Array A 1 Dimensi Adalah : \n");
    for(i=0;i<m*n;i++)
    {
        printf("\t %i",B[i]);
    }
    printf("\n");
}
