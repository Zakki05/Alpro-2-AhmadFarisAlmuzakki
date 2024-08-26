/*** 1. buat program yang meminta input sejumlah barang kemudian tampilkan
total harga barang
*/

#include "stdio.h"

typedef struct { char kode[5];
                 char nama[20];
                 int jumlah;
                 long int harga;
                 long int total;
}barang;

void main()
{
    barang brg[100];
    int i, n,tot_jumlah;
    long int tot,uang,kembalian;
    char ulang;
    do
    {
        printf("masukkan jumlah barang : ");
        scanf("%i",&n);

        for(i=0;i<n;i++)
        {
            printf("Kode barang = ");
            fflush(stdin);
            scanf("%s",&brg[i].kode);
            printf("Nama barang = ");
            fflush(stdin);
            scanf("%s",&brg[i].nama);
            printf("Jumlah barang = ");
            scanf("%i",&brg[i].jumlah);
            printf("Harga barang = ");
            scanf("%li",&brg[i].harga);
            printf("\n");
        }

        for(i=0;i<n;i++)
        {
            brg[i].total = brg[i].jumlah * brg[i].harga;
        }

        printf("\nNo \t Kode \t Nama Barang \t Jumlah \tHarga \tTotal\n");

        for(i=0;i<n;i++)
        {
            printf("%i",i+1);
            printf("\t %s",brg[i].kode);
            printf("\t %s",brg[i].nama);
            printf("\t\t %i",brg[i].jumlah);
            printf("\t\t%li",brg[i].harga);
            printf("\t%li",brg[i].total);
            printf("\n");
        }

        tot_jumlah = 0;
        tot = 0;

        for(i=0;i<n;i++)
        {
            tot_jumlah = tot_jumlah + brg[i].jumlah;
            tot = tot + brg[i].total;
        }
        printf("-----------------------------------------------------------------\n");
        printf("Jumlah Keseluruhan = %i",tot_jumlah);
        printf("\nJumlah Harga = %i",tot);

        printf("\n\nMasukkan Jumlah Uang Anda : ");
        scanf("%li",&uang);

        if(uang>tot)
        {
            kembalian = uang - tot;
            printf("Kembalian Anda adalah : %li",kembalian);
        }
        else
        {
            printf("UANG ANDA KURANG !!");
        }

        printf("\n\n\n apakah ingin mengulang ?\n");
        fflush(stdin);
        scanf("%c",&ulang);
        system("cls");
    }while(ulang == 'Y' || ulang == 'y');
}
