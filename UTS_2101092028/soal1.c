/*** Nama : Ahmad Faris Almuzakki
     No BP : 2101092028
     Tanggal : Selasa/24-05-2022
*/

srand(time(null))

A=(int*)malloc(ukuranA*sizeof(int));

B[i]=rand()/1000;

free((void)*A);

swap = A[d];
A[d] = A[d-1];
A[d-1] = swap;

imax = j;
swap = A[imax];
A[imax] = A[i];
A[i] = swap;

searching 4
#include "stdio.h"

void main()
{
    int *A;
    int i,n,x,ketemu,idx,jumlah;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    srand(time(NULL));

    A=(int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++)
    {
        printf("Masukkan Nilai array indeks ke %i : ",i);
        scanf("%i",&A[i]);
    }

    printf("\nNilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("%i \t",A[i]);
    }

    jumlah = 0;
    ketemu = 0;
    printf("\nMasukkan Nilai yang mau dicari : ");
    scanf("%i",&x);
    printf("\n");

    for (i=0;i<n;i++)
    {
        if(x==A[i])
        {
            ketemu = 1;
            idx = i;
            jumlah = jumlah+1;
            printf("Ketemu, angka %i ketemu di indeks ke-%i \n",x,idx);
        }
    }

    if(ketemu == 0)
    {
        printf("Tidak Ketemu");
    }

    printf("Jumlahnya : %i",jumlah);
    fflush(stdin);
}

searching 3
#include "stdio.h"

void main()
{
    int *A;
    int i,n,x,ketemu,idx;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    srand(time(NULL));

    A=(int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++)
    {
        A[i]=rand()/1000;
    }

    printf("\nNilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("%i \t",A[i]);
    }

    ketemu = 0;
    printf("\nMasukkan Nilai yang mau dicari : ");
    scanf("%i",&x);
    printf("\n");

    for (i=0;i<n;i++)
    {
        if(x==A[i])
        {
            ketemu = 1;
            idx = i;
        }
    }

    if(ketemu == 1)
    {
        printf("Ketemu, angka %i ketemu di indeks ke-%i",x,idx);
    }
    else
    {
        printf("Tidak Ketemu");
    }

    fflush(stdin);
}

searching 2
#include "stdio.h"

void main()
{
    int A[100];
    int i,n,x,ketemu;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    for (i=0;i<n;i++)
    {
        printf("Nilai Array A indeks %i = ",i);
        scanf("%i",&A[i]);
    }

    printf("\nNilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("%i \t",A[i]);
    }

    ketemu = 0;
    printf("\nMasukkan Nilai yang mau dicari : ");
    scanf("%i",&x);
    printf("\n");

    for (i=0;i<n;i++)
    {
        if(x==A[i])
        {
            ketemu = 1;
        }
    }

    if(ketemu == 1)
    {
        printf("Ketemu");
    }
    else
    {
        printf("Tidak Ketemu");
    }

}

searching 1
#include "stdio.h"

void main()
{
    int A[100];
    int i,n,x;

    printf("Masukkan Batas : ");
    scanf("%i",&n);

    for (i=0;i<n;i++)
    {
        printf("Nilai Array A indeks %i = ",i);
        scanf("%i",&A[i]);
    }

    printf("\nNilai Array A : ");
    for (i=0;i<n;i++)
    {
        printf("%i \t",A[i]);
    }

    i=0;
    printf("\nMasukkan Nilai yang mau dicari : ");
    scanf("%i",&x);
    printf("\n");

    while((x != A[i]) && (i<n))
    {
        i++;
    }

    if(A[i]==x)
    {
        printf("Ketemu");
    }
    else
    {
        printf("Tidak Ketemu");
    }

}
buble kecil besar
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
buble besar kecil
for(i=0;i<=(n-1);i++)
    {
        for(d=i;d<n;d++)
        {
            if(A[d]<A[d+1])
            {
                swap = A[d];
                A[d] = A[d+1];
                A[d+1] = swap;
            }
        }
    }
selection besar kecil
for(i=0;i<n-1;i++)
    {
        printf("\n\nFase ke-%i\n",i);
        imax = i;
        for(j=i+1;j<n;j++)
        {
            if(A[imax]<A[j])
            {
                imax = j;
            }
        }

        swap = A[imax];
        A[imax] = A[i];
        A[i] = swap;

        for(j=0;j<n;j++)
        {
            printf("%i \t",A[j]);
        }
        printf("\n");
    }
selection kecil besar
for(i=0;i<n-1;i++)
    {
        printf("\n\nFase ke-%i\n",i);
        imax = i;
        for(j=n-1;j>i;j--)
        {
            if(A[imax]>A[j])
            {
                imax = j;
            }
        }

        swap = A[imax];
        A[imax] = A[i];
        A[i] = swap;

        for(j=0;j<n;j++)
        {
            printf("%i \t",A[j]);
        }
        printf("\n");
    }



