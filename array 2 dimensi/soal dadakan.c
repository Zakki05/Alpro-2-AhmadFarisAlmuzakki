/*** Buatlah program yang meminta input user untuk ukuran matrik A dan B
     kemudian isi matriks A dengan input user manual dan matriks B random
     tampilkan nilai matriks A dan B
*/

#include "stdio.h"

void main()
{
    int A[100][100];
    int B[100][100];
    int C[100][100];
    int i,j,ma,na,mb,nb;

    printf("Masukkan ukuran baris array A : ");
    scanf("%i",&ma);

    printf("Masukkan ukuran kolom Array A : ");
    scanf("%i",&na);

    printf("Masukkan ukuran baris array B : ");
    scanf("%i",&mb);

    printf("Masukkan ukuran kolom Array B : ");
    scanf("%i",&nb);

    srand(time(NULL));

    printf("\n");

    if (ma==mb && na==nb)
    {
        for (i=0;i<ma;i++)
        {
            for(j=0;j<na;j++)
            {
                printf("Masukkan nilai array A[%i][%i] : ",i,j);
                scanf("%i",&A[i][j]);
            }
        }

        printf("\nNilai Array A : \n");
        for (i=0;i<ma;i++)
        {
            for(j=0;j<na;j++)
            {
                printf("\t %i",A[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        for (i=0;i<mb;i++)
        {
            for(j=0;j<nb;j++)
            {
                B[i][j]=rand()/1000;
            }
        }

        printf("\nNilai Array B : \n");
        for (i=0;i<mb;i++)
        {
            for(j=0;j<nb;j++)
            {
                printf("\t %i",B[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        for (i=0;i<ma;i++)
        {
            for(j=0;j<na;j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        printf("\nNilai Array C : \n");
        for (i=0;i<ma;i++)
        {
            for(j=0;j<na;j++)
            {
                printf("\t %i",C[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Maaf, Program anda salah !!");
    }

}

