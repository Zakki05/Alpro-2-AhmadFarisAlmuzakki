/*** Program :  array16.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  29/3/2022
     Deskripsi : soal no 3 buatlah program yang meminta input user untuk ukuran array 1 dimensi dinamis dan
                 user dapat memilih menu
*/

#include "stdio.h"
#include "stdlib.h"

void main()
{
    int *A;
    int *B;
    int i,ukuran,k;
    char menu;

    printf("\t==Pilihan menu==\n\n");
    printf("A : Memasuukan nilai dengan nilai array A sama dengan array B \n");
    printf("B : memasukkan nilai array dengan nilai B kebalikan dari nilai A \n");
    printf("C : Menggeser nilai akhir array menjadi nilai awal\n");
    printf("D : Menggeser nilai awal array menjadi nilai akhir\n");
    printf("======================================================================\n\n");

    printf("masukkan pilihan menu A/B/C/D : ");
    scanf("%c",&menu);

    printf("\n======================================================================\n");
    printf("\nMasukkan ukuran array :");
    scanf("%i",&ukuran);

    srand(time(NULL));

    A=(int*)malloc(ukuran*sizeof(int));
    B=(int*)malloc(ukuran*sizeof(int));

    for (i=0;i<ukuran;i++)
    {
        A[i]=rand()/1000;
    }

    switch (menu)
    {
        case 'A' :  printf("Nilai Array A : ");
                    for (i=0;i<ukuran;i++)
                    {
                        printf("%i \t",A[i]);
                    }

                    for (i=0;i<ukuran;i++)
                    {
                        B[i]=A[i];
                    }

                    printf("\nNilai Array B : ");
                    for (i=0;i<ukuran;i++)
                    {
                        printf("%i \t",B[i]);
                    }
                    break;

        case 'B' :  printf("Nilai Array A : ");
                    for (i=0;i<ukuran;i++)
                    {
                        printf("%i \t",A[i]);
                    }

                    for (i=0;i<ukuran;i++)
                    {
                        B[i]=A[ukuran-1-i];
                    }

                    printf("\nNilai Array B : ");
                    for (i=0;i<ukuran;i++)
                    {
                        printf("%i \t",B[i]);
                    }
                    break;

        case 'C' :  printf("Nilai Array A : ");
                    for (i=0;i<ukuran;i++)
                    {
                        printf("%i \t",A[i]);
                    }

                    k=A[ukuran-1];
                    for (i=0;i<ukuran;i++)
                    {
                        B[i+1]=A[i];
                        B[0]=k;
                    }

                    printf("\nNilai Array B : ");
                    for (i=0;i<ukuran;i++)
                    {
                        printf("%i \t",B[i]);
                    }
                    break;

        case 'D' :  printf("Nilai Array A : ");
                    for (i=0;i<ukuran;i++)
                    {
                        printf("%i \t",A[i]);
                    }

                    k=A[0];
                    for (i=0;i<ukuran;i++)
                    {
                        B[i]=A[i+1];
                        B[ukuran-1]=k;
                    }

                    printf("\nNilai Array B : ");
                    for (i=0;i<ukuran;i++)
                    {
                        printf("%i \t",B[i]);
                    }
                    break;


    }
}
