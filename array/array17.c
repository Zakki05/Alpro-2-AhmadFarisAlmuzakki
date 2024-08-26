/*** Program :  array16.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  29/3/2022
     Deskripsi : soal no 2 buatlah program yang meminta input nilai dan ukuran array A 1 dimensi dinamis,
                 array B yang merupakan array 1 dimensi statis input random dengan ukuran yang sama dengan array A.
                 lakukan [engecekan diawal jika ukuran array A dan B sama. jika pada indeks yang sama antara array A dan B
                 bernilai sama-sama ganjil atau sama-sama genap, maka array C 1 dimensi dinamis yang ukurannya sama dengan
                 array A dan B merupakan pejumlahan antara isi array A dan B. jika berbeda maka hasil array C hasil pengurangan
                 antara isi array A dan B. jika ukuran array A dan B tidak sama maka proses tidak dapat dilakukan.

*/

#include "stdio.h"
#include "stdlib.h"

void main ()
{
    int *A;
    int *C;
    int B[100];
    int i,ukuranA,ukuranB;

    printf("Masukkan Ukuran Array A : ");
    scanf("%i",&ukuranA);

    printf("Masukkan Ukuran Array B : ");
    scanf("%i",&ukuranB);

    srand(time(NULL));

    A=(int*)malloc(ukuranA*sizeof(int));
    C=(int*)malloc(ukuranA*sizeof(int));

    if(ukuranA == ukuranB)
    {
        for (i=0;i<ukuranA;i++)
        {
            printf("Array A indeks ke %i = ",i);
            scanf("%i",&A[i]);
        }
        printf("Nilai array A = ");

        for (i=0;i<ukuranA;i++)
        {
            printf("%i \t",A[i]);
        }

        for (i=0;i<ukuranB;i++)
        {
            B[i]=rand()/1000;
        }
        printf("\nNilai array B = ");

        for (i=0;i<ukuranB;i++)
        {
            printf("%i \t",B[i]);
        }

        for (i=0;i<ukuranA;i++)
        {
            if (A[i]%2==0 && B[i]%2==0 || A[i]%2==1 && B[i]%2==1)
            {
                C[i]=A[i]+B[i];
            }
            else
            {
                C[i]=A[i]-B[i];
            }
        }
        printf("\nNilai Array C = ");

        for (i=0;i<ukuranA;i++)
        {
            printf("%i \t",C[i]);
        }

    }
    else
    {
        printf("PROGRAM TIDAK DAPAT DI PROSES...");
    }

    free((void*)A);
}
