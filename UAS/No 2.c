/***
    Nama : Ahmad Faris Almuzakki
    No Bp : 2101092028
    Kelas : MI 1A
    soal : No 2 UAS PAKET B
*/

#include "stdio.h"

typedef struct { char nama[20];
                 long int uas;
                 long int tugas;
                 long int uts;
                 long int total;
                 char huruf [5];
}mahasiswa;

void main()
{
    mahasiswa mhs[100];
    int i, n;
    char ulang;
    do
    {
        printf("masukkan jumlah mahasiswa : ");
        scanf("%i",&n);

        for(i=0;i<n;i++)
        {
            printf("Nama Mahasiswa : ");
            fflush(stdin);
            scanf("%s",&mhs[i].nama);
            printf("Nilai UTS = ");
            scanf("%li",&mhs[i].uts);
            printf("Nilai tugas = ");
            scanf("%li",&mhs[i].tugas);
            printf("Nilai UAS = ");
            scanf("%li",&mhs[i].uas);
            printf("\n");
        }

        for(i=0;i<n;i++)
        {
            mhs[i].total = mhs[i].uts*0.3 + mhs[i].tugas*0.4 + mhs[i].uas*0.3;
        }



        printf("\nNo \t Nama \t UTS \t Tugas \t UAS \t Total \tKriteria\n");

        for(i=0;i<n;i++)
        {
            printf("%i",i+1);
            printf("\t %s",mhs[i].nama);
            printf("\t %li",mhs[i].uts);
            printf("\t %li",mhs[i].tugas);
            printf("\t %li",mhs[i].uas);
            printf("\t %li",mhs[i].total);
            printf("\n");
        }

        printf("\n\n\n apakah ingin mengulang ?\n");
        fflush(stdin);
        scanf("%c",&ulang);
        system("cls");
    }while(ulang == 'Y' || ulang == 'y');
}
