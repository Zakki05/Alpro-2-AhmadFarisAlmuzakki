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
    int i,j,k,m,n,p,q,identik;

    printf("Masukkan ukuran baris matriks A: ");
    scanf("%i",&m);
    printf("Masukkan ukuran kolom matriks A: ");
    scanf("%i",&n);

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

    printf("Masukkan ukuran baris matriks B: ");
    scanf("%i",&p);
    printf("Masukkan ukuran kolom matriks B: ");
    scanf("%i",&q);

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
    for (i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("\t %i",B[i][j]);
        }
        printf("\n");
    }

    identik = 0;

    if(m == p && n==q )
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if (A[i][j] == B[i][j])
                {
                    identik=1;
                }
                else
                {
                    identik=0;
                }
            }
        }
    }
    else
    {
        identik=0;
    }

    if (identik==1)
    {
        printf("Nilai A dan B identik !!");
    }
    else
    {
        printf("Nilai A dan B tidak identik !!");
    }
}
