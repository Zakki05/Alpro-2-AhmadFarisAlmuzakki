/***
    Nama : Ahmad Faris Almuzakki
    No Bp : 2101092028
    Kelas : MI 1A
    soal : 3. Perkalian Matriks
*/

#include "stdio.h"
void main()
{
    int A[100][100];
    int B[100][100];
    int C[100][100];
    int i, j, k, m, n, p, q, jumlah;

    jumlah=0;

    printf("==PERKALIAN MATRIKS==\n\n");

    printf("Masukkan ukuran baris matriks A: ");
    scanf("%i",&m);
    printf("Masukkan ukuran kolom matriks A: ");
    scanf("%i",&n);
    printf("Masukkan ukuran baris matriks B: ");
    scanf("%i",&p);
    printf("Masukkan ukuran kolom matriks B: ");
    scanf("%i",&q);

    if(m == p && n==q )
    {
        printf("Masukkan nilai matriks A: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("Nilai Matriks A[%i][%i] : ",i,j);
                scanf("%i", &A[i][j]);
            }
        }

        printf("\nNilai Matriks A : \n");
        for (i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("\t %i",A[i][j]);
            }
            printf("\n");
        }

        printf("\nMasukkan nilai matriks B: \n");
        for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf("Nilai Matriks B[%i][%i] : ",i,j);
                    scanf("%i",&B[i][j]);
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

        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                for(k=0;k<p;k++)
                {
                    jumlah = jumlah + A[i][k] * B[k][j];
                }
                C[i][j] = jumlah;
                jumlah = 0;
            }
        }

        printf("\nHasil perkalian matriks A&B : \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("\t %i", C[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Inputan Anda Salah!!");
    }
}
