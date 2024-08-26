#include "stdio.h"
#include "stdlib.h"

main()
{
int a[100],n,i,j[100],d,b,f;
char an;
printf("==============================================================================================");
printf("\n1. Delete indeks awal array");printf("\n2.Menambah indeks dalam Array");printf("\n3.Menggeser indeks akhir Array menjadi indeks awal");
printf("\n4.Menggeser indeks awal array mejadi indeks ahir");
printf("\n==============================================================================================");
printf("\ninput pilihan = ");scanf("%d",&n);
b=0;
do{
        switch (n)
{
    case 1 :{printf("\n1.INPUT JUMLAH ARRAY OLEH USER");printf("\n2.INPUT JUMLAH ARRAY OLEH SISTEM");
            printf("\ninput pilihan =");scanf("%d",&n);
            switch(n)


{
        case 1 : {printf("\ninput array = ");scanf("%d",&d);
                for (i=0;i<d;i++)
                {
                printf("input nilai ke %d = ",i);scanf("%d",&a[i]);
                }
                printf("\n");

                for (i=0;i<d;i++)
                {printf("\tarray a %d",a[i]);}
                printf("\n");

                for (i=0;i<d;i++)

                {  a[b]=a[i+1];
                b++;}
                for (i=0;i<b-1;i++)

                {printf("\tarray a %d",a[i]);}break;}

        case 2 : {
                srand(time(NULL));
                printf("\nmasukkan ukuran = ");scanf("%d",&d);
                     for (i=0;i<d;i++)
                    {
                         a[i]=rand()/10000;
                    }
                    printf("\n");
                    for (i=0;i<d;i++)
                    {   printf("\tarray a %d",a[i]);
                    }
                    printf("\n");
                        for (i=0;i<d;i++)
                        {   a[b]=a[i+1];
                             b++;
                        }
                        for (i=0;i<b-1;i++)
                        {printf("\tarray a %d",a[i]);
                        }
                        break;}}break;}

        case 2 :{printf("\n1.INPUT JUMLAH ARRAY OLEH USER");printf("\n2.INPUT JUMLAH ARRAY OLEH SISTEM");
             printf("\ninput pilihan =");scanf("%d",&n);
                    switch(n)
            {
            case 1 :{printf("\ninput array = ");scanf("%d",&d);
            for (i=0;i<d;i++)
                {
                printf("input nilai ke %d = ",i);scanf("%d",&a[i]);
                }
                printf("\n");

            for (i=0;i<d;i++)
                {printf("\tarray a %d",a[i]);}
                printf("\n");
                    printf("\ninput nilai =");
                    scanf("%d",&n);

            for (i=0;i<d;i++)

                {   j[i+1]=a[i];
                j[0]=n;}

            for (i=0;i<d+1;i++)
                {
                printf("\tarray a %d",j[i]);
                }break;}

            case 2 : { srand(time(NULL));
                printf("\nmasukkan ukuran = ");scanf("%d",&d);
                     for (i=0;i<d;i++)
                    {
                         a[i]=rand()/10000;
                    }
                    printf("\n");
                    for (i=0;i<d;i++)
                    {   printf("\tarray a %d",a[i]);
                    }printf("\n");
                    printf("\ninput nilai =");
                    scanf("%d",&n);

                    for (i=0;i<d;i++)

                    {   j[i+1]=a[i];
                    j[0]=n;}

                    for (i=0;i<d+1;i++)
                    {
                    printf("\tarray a %d",j[i]);
                    } break;}}break;}

        case 3 :{printf("\n1.INPUT JUMLAH ARRAY OLEH USER");printf("\n2.INPUT JUMLAH ARRAY OLEH SISTEM");
            printf("\ninput pilihan =");scanf("%d",&n);
                switch(n)
                {
                case 1 :{ printf("\ninput jumlah indeks =");scanf("%d",&d);
                         for (i=0;i<d;i++)
                        {
                        printf("input nilai ke %d = ",i);scanf("%d",&a[i]);
                        }
                        printf("\n");
                        for (i=0;i<d;i++)
                        {
                        printf("\tarray a %d",a[i]);
                        }
                        printf("\n");
                        f=a[d-1];
                        for (i=0;i<d;i++)
                        {
                        j[i+1]=a[i];
                        j[0]=f;
                        }
                        for (i=0;i<d;i++)
                        {
                        printf("\tarray a %d",j[i]);}break;}

                case 2 : {srand(time(NULL));
                    printf("\nmasukkan ukuran = ");scanf("%d",&d);
                     for (i=0;i<d;i++)
                    {
                         a[i]=rand()/10000;
                    }
                    printf("\n");
                    for (i=0;i<d;i++)
                    {   printf("\tarray a %d",a[i]);
                    }printf("\n");
                     f=a[d-1];
                    for (i=0;i<d;i++)
                    {
                    j[i+1]=a[i];
                    j[0]=f;
                    }
                    for (i=0;i<d;i++)
                    {
                    printf("\tarray a %d",j[i]);}break;}}break;}

            case 4 :{printf("\n1.INPUT JUMLAH ARRAY OLEH USER");printf("\n2.INPUT JUMLAH ARRAY OLEH SISTEM");
                printf("\ninput pilihan =");scanf("%d",&n);
                    switch(n)
                    {
                case 1 :{ printf("\ninput nilai array =");scanf("%d",&d);
                            for (i=0;i<d;i++)
                        {
                        printf("input nilai ke %d = ",i);scanf("%d",&a[i]);
                        }
                        printf("\n");
                        for (i=0;i<d;i++)
                        {
                        printf("\tarray a %d",a[i]);
                        }printf("\n");
                        f=a[0];
                        for (i=0;i<d;i++)
                        {
                        j[i]=a[i+1];
                        j[d-1]=f;
                        }
                        for (i=0;i<d;i++)
                        {
                        printf("\tarray a %d",j[i]);
                        }break;}

                case 2 : {srand(time(NULL));
                    printf("\nmasukkan ukuran = ");scanf("%d",&d);
                     for (i=0;i<d;i++)
                    {
                         a[i]=rand()/10000;
                    }
                    printf("\n");
                    for (i=0;i<d;i++)
                    { printf("\tarray a %d",a[i]);}
                    printf("\n");
                    f=a[0];
                    for (i=0;i<d;i++)
                    {
                    j[i]=a[i+1];
                    j[d-1]=f;}
                    for (i=0;i<d;i++)
                    {
                    printf("\tarray a %d",j[i]);}break;}
                    break;}}
            default :{ printf("masukan anda salah");}break;}


    printf("\nulang ? ");printf("\nyes/Yes\n");fflush(stdin);
    scanf("%c",&an);system("cls");}
    while (an=='Y' || an=='y');}



