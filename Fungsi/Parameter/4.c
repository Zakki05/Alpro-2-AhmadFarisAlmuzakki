#include "stdio.h"
#define pi 3.14

void balok ()
{
    int p,l,t,v;
    printf("Masukkan panjang balok : ");
    scanf("%i",&p);
    printf("Masukkan lebar balok : ");
    scanf("%i",&l);
    printf("Masukkan tinggi balok : ");
    scanf("%i",&t);
    v = p * l * t;
    printf("Volume Balok : %i",v);
}

void kubus (int sisi, int *volume)
{
    *volume = sisi * sisi * sisi;
}

void bola (int jari)
{
    float volume;
    volume = 1.33 * pi * jari * jari * jari;
    printf("Volume Bola : %0.2f",volume);
}

void tabung ()
{
    int r,t;
    float v;
    printf("Masukkan jari-jari tabung : ");
    scanf("%i",&r);
    printf("Masukkan tinggi tabung : ");
    scanf("%i",&t);
    v = pi * r * r * t;
    printf("Volume Tabung : %0.02f",v);
}

void menu ()
{
    printf("Menu Bangun Ruang ");
    printf("\n 1. Balok");
    printf("\n 2. Kubus");
    printf("\n 3. Bola");
    printf("\n 4. Tabung\n");
    printf("======================\n");
}

void main()
{
    int pil,s,V,j;
    menu();
    printf("\nMasukkan Pilihan Menu : ");
    scanf("%i",&pil);
    printf("\n");
    switch (pil)
    {
        case 1 : /* Tanpa parameter */
                 printf("Menu yang anda pilih adalah Balok");
                 printf("\n");
                 balok();
                 break;
        case 2 : /* Parameter (input & output) */
                 printf("Menu yang anda pilih adalah Kubus");
                 printf("\nMasukkan sisi Kubus : ");
                 scanf("%i",&s);
                 kubus(s,&V);
                 printf("Volume Kubus adalah : %i",V);
                 break;
        case 3 : /* Parameter (input) */
                 printf("Menu yang anda pilih adalah Bola");
                 printf("Masukkan jari-jari : ");
                 scanf("%i",&j);
                 bola(j);
                 break;
        case 4 : /* Tanpa Parameter */
                 printf("Menu yang anda pilih adalah Tabung");
                 printf("\n");
                 tabung();
                 break;
        default : printf("PILIHAN MENU ANDA SALAH !!!");
    }
    printf("\n\n");
}

