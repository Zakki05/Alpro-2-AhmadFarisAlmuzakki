/***
    Nama    : Ahmad Faris Almuzakki
    No BP   : 2101092028
    Kelas   : MI 1A
    tanggal : 12/04/2022
    Desc    : 2. buat program meminta input nilai array A yang dinamis dan array B yang bersifat statis.
              buat tampilan array dengan pilihan menu sebagai berikut
              a. Array Dinamis diinput user dari besar ke kecil dengan bubble sort
              b. Array Dinamis diinput random dari kecil ke besar dengan bubble sort
              c. Array Statis diinput random dari besar ke kecil dengan selection sort
              d. Array Statis diinput user dari kecil ke besar dengan selection sort
*/

#include "stdio.h"
#include "stdlib.h"

void main()
{
    int *A;
    int B[100],n,i,j,d,imax,swap,pilihan;
    char ulang;

    do
    {
    printf("\t==PILIHAN MENU==\n\n");
    printf("1. Array Dinamis diinput user dari besar ke kecil dengan bubble sort\n");
    printf("2. Array Dinamis diinput random dari kecil ke besar dengan bubble sort\n");
    printf("3. Array Statis diinput random dari besar ke kecil dengan selection sort\n");
    printf("4. Array Statis diinput user dari kecil ke besar dengan selection sort\n");
    printf("========================================================================\n");
    printf("Masukkan Pilihan : ");
    scanf("%i",&pilihan);
    printf("\nMasukkan isi tabel : ");
    scanf("%i",&n);

    srand(time(NULL));

    A=(int*)malloc(n*sizeof(int));

    switch (pilihan)
    {
        case 1 :printf("Masukkan isi Tabel sebelum terurut : ");
                for (i=0;i<n;i++)
                {
                    scanf("%i",&A[i]);
                }

                printf("\nIsi tabel sebelum terurut : ");
                for (i=0;i<n;i++)
                {
                    printf("%i \t",A[i]);
                }

                for(i=1;i<n;i++)
                {
                    for(d=i;d<n;d++)
                    {
                        if(A[d]>A[d-1])
                        {
                            swap = A[d];
                            A[d] = A[d-1];
                            A[d-1] = swap;
                        }
                    }
                }

                printf("\nIsi tabel terurut dari besar ke kecil : ");
                for (i=0;i<n;i++)
                {
                    printf("%i \t",A[i]);
                }
                break;

        case 2 :for (i=0;i<n;i++)
                {
                    A[i]=rand()/1000;
                }

                printf("\nIsi tabel sebelum terurut : ");
                for(i=0;i<n;i++)
                {
                    printf("\t %i",A[i]);
                }

                for(i=1;i<=(n-1);i++)
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

                printf("\nIsi tabel terurut dari kecil ke besar : ");
                for (i=0;i<n;i++)
                {
                    printf("%i \t",A[i]);
                }
                break;

        case 3 :for (i=0;i<n;i++)
                {
                    A[i]=rand()/1000;
                }

                printf("isi tabel sebelum terurut : ");
                for (i=0;i<n;i++)
                {
                     printf("%i \t",A[i]);
                }

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

                printf("\nIsi tabel terurut dari besar ke kecil : ");
                for (i=0;i<n;i++)
                {
                    printf("%i \t",A[i]);
                }
                break;

        case 4 :printf("Masukkan isi tabel sebelum terurut : ");
                for (i=0;i<n;i++)
                {
                    scanf("%i",&B[i]);
                }

                printf("\nIsi tabel sebelum terurut : ");
                for (i=0;i<n;i++)
                {
                    printf("%i \t",B[i]);
                }

                for(i=0;i<n-1;i++)
                {
                    printf("\n\nFase ke-%i\n",i);
                    imax = i;
                    for(j=n-1;j>i;j--)
                    {
                        if(B[imax]>B[j])
                        {
                            imax = j;
                        }
                    }

                swap = B[imax];
                B[imax] = B[i];
                B[i] = swap;

                for(j=0;j<n;j++)
                {
                    printf("%i \t",B[j]);
                }
                printf("\n");
                }

                printf("\nIsi tabel terurut dari kecil ke besar : ");
                for (i=0;i<n;i++)
                {
                    printf("%i \t",B[i]);
                }
                break;
    }
    fflush(stdin);
    printf("\n\napakah mau mengulang ? ");
    printf("\nY atau N\n");
    scanf("%c",&ulang);
    system("cls");
    }

    while (ulang == 'Y' || ulang == 'y');
}
