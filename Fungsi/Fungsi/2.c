#include "stdio.h"

long int tambah (int a, int b);
long int kurang (int a, int b);
long int kali (int a, int b);
float bagi (int a, int b);
long int div (int a, int b);
long int mod (int a, int b);

void main()
{
    char ulang;
    int pil;
    int x,y;

    do
    {
        printf("\t==MASUKKAN PILIHAN MENU==\n\n");
        printf("1. Tambah\n");
        printf("2. Kurang\n");
        printf("3. Kali\n");
        printf("4. Bagi\n");
        printf("5. Div\n");
        printf("6. mod\n");

        printf("\nMasukkan Pilihan : ");
        scanf("%i",&pil);

        printf("Masukkan nilai 1 : ");
        scanf("%i",&x);
        printf("Masukkan nilai 2 : ");
        scanf("%i",&y);

        switch(pil)
        {
            case 1 : {
                        printf("\nTambah : %i + %i = %li",x,y,tambah(x,y));
                     }break;

            case 2 : {
                        printf("\nKurang : %i - %i = %li",x,y,kurang(x,y));
                     }break;

            case 3 : {
                        printf("\nKali : %i * %i = %li",x,y,kali(x,y));
                     }break;
            case 4 : {
                        printf("\nBagi : %i : %i = %0.2f",x,y,bagi(x,y));
                     }break;
            case 5 : {
                        printf("\nDiv : %i : %i = %li",x,y,div(x,y));
                     }break;
            case 6 : {
                        printf("\nMod : %i (%) %i = %li",x,y,mod(x,y));
                     }break;
        }
        printf("\n\n\napakah ingin mengulang ?\n");
        fflush(stdin);
        scanf("%c",&ulang);
        system("cls");
    }while(ulang == 'Y' || ulang == 'y');
}

long int tambah(int a,int b)
{
    int Tambah;
    Tambah = a + b;
    return Tambah;
}

long int kurang(int a, int b)
{
    int Kurang;
    Kurang = a - b;
    return Kurang;
}

long int kali (int a, int b)
{
    int Kali;
    Kali = a * b;
    return Kali;
}

float bagi (int a, int b)
{
    float Bagi;
    Bagi = a / b;
    return Bagi;
}

long int div(int a, int b)
{
    int Div;
    Div = a / b;
    return Div;
}

long int mod(int a, int b)
{
    int Mod;
    Mod = a % b;
    return Mod;
}






