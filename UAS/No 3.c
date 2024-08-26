/***
    Nama : Ahmad Faris Almuzakki
    No Bp : 2101092028
    Kelas : MI 1A
    soal : No 3 UAS PAKET B
*/

#include "stdio.h"
#define pi 3.14

void persegi ()
{
    int s,L;
    printf("Masukkan sisi persegi : ");
    scanf("%i",&s);
    L = s * s;
    printf("Lebar Persegi : %i",L);
}

void segitiga ()
{
    int a,t,L;
    printf("Masukkan alas segitiga : ");
    scanf("%i",&a);
    printf("Masukkan tinggi segitiga : ");
    scanf("%i",&t);
    L = 0.5 * a * t;
    printf("Luas Segitiga : %i",L);
}

void Persegipanjang ()
{
    int p,l,L;
    printf("Masukkan panjang persegi : ");
    scanf("%i",&p);
    printf("Masukkan lebar persegi : ");
    scanf("%i",&l);
    L = p * l ;
    printf("Lebar Persegi : %i",L);
}

void menu ()
{
    printf("Menu Bangun Ruang ");
    printf("\n 1. persegi");
    printf("\n 2. segitiga");
    printf("\n 3. persegipanjang\n");
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
        case 1 : printf("Menu yang anda pilih adalah persegi");
                 printf("\n");
                 persegi();
                 break;

        case 2 : printf("Menu yang anda pilih adalah persegi");
                 printf("\n");
                 segitiga();
                 break;

        case 3 : printf("Menu yang anda pilih adalah persegi");
                 printf("\n");
                 Persegipanjang();
                 break;

        default : printf("PILIHAN MENU ANDA SALAH !!!");
    }
    printf("\n\n");
}

