/***
    A 2
*/

#include "stdio.h"
#include "stdlib.h"

void main()
{
    int A[100];
    int i,n,ada,x,idx,jumlah,swap,d,j;

    printf("Masukkan ukuran array : ");
    scanf("%i",&n);

    srand(time(NULL));

    for (i=0;i<n;i++)
    {
        A[i]=rand()/1000;
    }

    printf("Nilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",A[i]);
    }

    jumlah = 0;
    ada = 0;
    printf("\n\nMasukkan Nilai yang dicari : ");
    scanf("%i",&x);

    for (i=0;i<n;i++)
    {
        if(x==A[i])
        {
            ada = 1;
            idx = i;
            jumlah = jumlah+1;
            printf("ada, Nilai %i ada pada indeks ke-%i ",x,idx);
        }
    }

    if (ada == 0)
    {
        printf("Nilai dari %i tidak ditemukan",x);
    }

    printf("\njumlah dari nilai %i ada : %i",x,jumlah);

    for(i=1;i<n;i++)
    {
        for(d=n-1;d>=i;d--)
        {
            if(A[d]<A[d-1])
            {
                swap = A[d];
                A[d] = A[d-1];
                A[d-1] = swap;
            }
        }
    }

    printf("\n\nNilai Array A yang sudah diurutkan : ");
    for (i=0;i<n;i++)
    {
        printf("\t %i",A[i]);
    }

    printf("\n\nNilai yang akan di hapus : %i",x);

    j=0;
    for (i=0;i<n;i++)
    {
        if (x!=A[i])
        {
            A[j]=A[i];
            j++;
        }
    }

    printf("\nNilai Array A sesudah penghapusan : ");
    for(i=0;i<n-jumlah;i++)
    {
        printf("\t %i",A[i]);
    }

    printf("\n\n");
}
