#include "stdio.h"

void main()
{
    do
    {
    int A[100][100];
    int i,j,m,n,idx;
    char ulang;

    printf("Masukkan Baris Matriks A : ");
    scanf("%i",&m);
    printf("Masukkan Kolom Matriks A : ");
    scanf("%i",&n);

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

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            A[i][n] = A[i][n] + A[i][j];
        }
    }

    for(j=0;j<m;j++)\
    {
        for(i=0;i<n;i++)
        {
            A[m][i] = A[m][i] + A[j][i];
        }
    }

    printf("\nNilai Array A sesudah ditambahkan : \n");
    for (i=0;i<m+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("\t %i",A[i][j]);
        }
        printf("\n");
    }

        printf("Apakah Mau Mengulang\n");
        fflush(stdin);
        scanf("%c",&ulang);
        system("cls");
    }while(ulang==Y || ulang==YES);

}
