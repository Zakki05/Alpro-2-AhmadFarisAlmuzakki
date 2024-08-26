#include "stdio.h"

void main()

{
    int pilih,fakt,n,i,j,k,l,m;
    char ulang;

    do {
    printf("\t==Masukkan Menu Pilihan==\n\n");
    printf("1. Faktorial\n");
    printf("2. Pola Jajar Genjang\n");
    printf("3. Pola Segitiga\n\n");

    printf("Masukkan Pilihan Menu : ");
    scanf("%i",&pilih);

    switch (pilih)
    {
     case 1 :   printf ("\n =Menu Faktorial= \n");
                printf ("Masukkan Angka : ");
                scanf("%i",&n);
                fakt = 1;

                for (i=1;i<=n;i++)
                {
                    fakt = fakt * i;
                }
                printf("Nilai Faktorialnya %i! = %i",n,fakt);
                break;

     case 2 :   printf ("\n =Menu Pola Jajaran Genjang= \n");
                printf ("Masukkan Batas : ");
                scanf ("%i",&n);
                for (i=1;i<=n;i++)
                {
                    for (j=1;j<=i;j++)
                    {
                        printf(" ");
                    }
                    for (k=1;k<=i;k++)
                    {
                        printf("* ");
                    }
                    for (l=1;l<=n;l++)
                    {
                        printf("* ");
                    }
                    for (m=5;m>=i;m--)
                    {
                        printf ("* ");
                    }
                    printf("\n");
                }
                break;
     case 3 : printf ("==Menu Segitiga Siku-Siku==\n");
                for (i=1;i<=5;i++)
                {
                    for (j=i;j>=1;j--)
                    {
                        printf("* ");
                    }
                }

     default : printf ("Input Yang Anda Masukkan Salah");
    }
    printf ("\n\nMau Mengulang Atau Tidak (y/t) == ");
    fflush (stdin); /// untuk membersihkan memory
    scanf ("%c",&ulang);
    system ("cls"); /// untuk membersihkan layar

    }while (ulang == 'y' || ulang == 'Y');

}
