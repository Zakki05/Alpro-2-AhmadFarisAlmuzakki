/***
    Nama : Ahmad Faris Almuzakki
    No Bp : 2101092028
    Kelas : Mi 1A
    soal : Konversikan Array 1 Dimensi menjadi 2 dimensi !!
*/

#include "stdio.h"

void main()
{
    int A[100];
    int B[100][100];
    int i,j,m,n,ukuran,x;

    printf("Masukkan Baris Array A : ");
    scanf("%i",&m);
    printf("Masukkan Kolom Array A : ");
    scanf("%i",&n);
    printf("====================================\n");

    ukuran=m*n;
    printf("\nUkuran Array A adalah %i",ukuran);
    printf("\n");

    for(i=0;i<ukuran;i++)
    {
        printf("Masukkan Ukuran Array A[%i] : ",i);
        scanf("%i",&A[i]);
    }

    printf("\n");
    printf("Nilai Array A 1 Dimensi Adalah : \n");
    for(i=0;i<ukuran;i++)
    {
        printf("\t %i",A[i]);
    }

    x=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            B[i][j]=A[x];
            x++;
        }
    }

    printf("\n\n");
    printf("Nilai Array A 2 Dimensi Adalah : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %i",B[i][j]);
        }
        printf("\n");
    }
}
