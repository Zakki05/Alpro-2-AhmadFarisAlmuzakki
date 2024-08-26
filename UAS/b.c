/**
    Nama :
    No Bp :
    Kelas :
    Kode Soal :
*/
#include "stdio.h"

typedef struct
{
    int jam,menit,detik;
}waktu;

void main()
{
    waktu t1,t2,t3;
    int n,i;

    printf("Masukkan banyak penumpang : ");
    scanf("%i",&n);

    for (i=0;i<n;i++)
    {
        printf("\nPenumpang %i\n",i+1);
        printf("==Waktu Awal==\n");
        printf("Jam : ");
        scanf("%i",&t1.jam);
        printf("Menit : ");
        scanf("%i",&t1.menit);
        printf("Detik : ");
        scanf("%i",&t1.detik);

        printf("==Waktu Akhir==\n");
        printf("Jam : ");
        scanf("%i",&t2.jam);
        printf("Menit : ");
        scanf("%i",&t2.menit);
        printf("Detik : ");
        scanf("%i",&t2.detik);
    }

    if(t1.menit>t2.menit)
    {
         t3.jam=(t2.jam-t1.jam)-1;
         if(t1.detik>t2.detik)
        {
            t3.menit=(t2.menit+60-t1.menit)-1;
            t3.detik=(t2.detik+60-t1.detik);
        }
        else
        {
            t3.menit=(t2.menit-t1.menit);
            t3.detik=(t2.detik-t1.detik);
        }
    }

    else
    {
        t3.jam=(t2.jam-t1.jam);
        if(t1.detik>t2.detik)
        {
            t3.menit=(t2.menit-t1.menit)-1;
            t3.detik=(t2.detik+60-t1.detik);
        }
        else
        {
            t3.menit=(t2.menit-t1.menit);
            t3.detik=(t2.detik-t1.detik);
        }
    }

    printf("\n\nNO \t Jam Awal \t Jam Akhir \t Durasi \n");

    for (i=0; i<n; i++)
    {
        printf("%i ",i+1);
        printf("\t %i:%i:%i",t1.jam,t1.menit,t1.detik);
        printf("\t %i:%i:%i",t1.jam,t1.menit,t1.detik);
        printf("\t %i:%i:%i",t3.jam,t3.menit,t3.detik);
        printf("\n");
    }
}
