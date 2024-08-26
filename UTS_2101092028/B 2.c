/***
    B 2
*/

#include "stdio.h"
#include "stdlib.h"
void main()
{
    int A[100],B[100];
    int i,n,j,x,ketemu,swap;

    printf("Masukkan ukuran Array= ");
    scanf("%i",&n);

    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        A[i]=rand()/1000;
    }

    printf("Array A=\n");
    for (i=0;i<n;i++)
    {
        printf(" %i",A[i]);
    }

    printf("\nInput sebuah nilai array yang ingin dicari=");
    scanf("%i",&x);

    ketemu=0;
    for(i=0;i<n;i++)
    {
        if (x==A[i])
        {
            ketemu=1;
            printf("\nKetemu. Ada nila %i ada pada array ke-%i\n",x,i);
        }
    }

    if(ketemu==0)
    {
        printf("Tidak ketemu");
    }
    for (i=1;i<=(n-1);i++)
    {

        for(j=n-1;j>=i;j--)
        {
            if(A[j]<A[j-1])
            {
                swap=A[j];
                A[j]=A[j-1];
                A[j-1]=swap;
            }
        }
    }

    printf("\n\nUrutkan Array=\n");
    for(i=0;i<n;i++)
    {
        printf(" %i",A[i]);
    }

    printf("\n\nTambahkan nilai yang ditemukan dari array yang sudah diurutkan ");
    for(i=0;i<=n;i++)
    {
        B[i+1]=A[i];
        B[0]=x;
    }

    printf("\nArray Akhir=\n");
    for(i=0;i<(n+1);i++)
    {
        printf(" %i",B[i]);
    }
}
