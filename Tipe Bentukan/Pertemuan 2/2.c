/***
    2. Tampilkan data mahasiswa
*/

#include "stdio.h"

typedef struct { char nama[20];
                 char nobp[100];
                 char alamat[100];
                 int nilai;
}mahasiswa;

void main()
{
    mahasiswa mhs[100];
    int i, j, n, m, nilai,x;
    char ulang;
    do
    {
        printf("masukkan jumlah mahasiswa : ");
        scanf("%i",&n);
        printf("masukkan jumlah nilai : ");
        scanf("%i",&m);

        for(i=0;i<n;i++)
        {
            printf("\nNama Mahasiswa = ");
            fflush(stdin);
            scanf("%s",&mhs[i].nama);
            printf("No BP = ");
            fflush(stdin);
            scanf("%s",&mhs[i].nobp);
            printf("Alamat = ");
            fflush(stdin);
            scanf("%s",&mhs[i].alamat);

            for(j=0;j<m;j++)
            {
                printf("Nilai %i = ",j+1);
                scanf("%i",&nilai);
            }
        }

        for(i=0;i<n;i++)
        {
            printf("\n\nDATA MAHASISWA KE %i",i+1);
            printf("\n-------------------------");
            printf("\nNama mahasiswa \t : %s",mhs[i].nama);
            printf("\nNo BP \t\t : %s",mhs[i].nobp);
            printf("\nALAMAT \t\t : %s",mhs[i].alamat);
            for(j=0;j<m;j++)
            {
                printf("\nNilai %i \t : %i",j+1,nilai);
            }
        }

        printf("\n\n\napakah ingin mengulang ?\n");
        fflush(stdin);
        scanf("%c",&ulang);
        system("cls");
    }while(ulang == 'Y' || ulang == 'y');
}
