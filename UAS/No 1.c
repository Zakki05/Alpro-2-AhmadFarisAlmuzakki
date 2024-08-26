/***
    Nama : Ahmad Faris Almuzakki
    No Bp : 2101092028
    Kelas : MI 1A
    soal : No 1 UAS PAKET B
*/

#include "stdio.h"
#define pi 3.14

long int luasbalok (int p, int l, int t);
long int volumebalok (int p, int l, int t);
long int luaskerucut (int r, int s);
long int volumekerucut (int r, int t);
long int luaskubus (int s);
long int volumekubus (int s);

void main()
{
    int w,x,y,z,h;

    printf("Masukkan panjang : ");
    scanf("%i",&w);
    printf("Masukkan lebar : ");
    scanf("%i",&x);
    printf("Masukkan tinggi : ");
    scanf("%i",&y);
    printf("Masukkan sisi : ");
    scanf("%i",&z);
    printf("Masukkan jari-jari : ");
    scanf("%i",&h);

    printf("\n\n==Bangunan Balok==\n\n");
    printf("Luas Balok : %li ",luasbalok(w,x,y));
    printf("\nVolume Balok : %li ",volumebalok(w,x,y));

    printf("\n\n==Bangunan Kerucut==\n\n");
    printf("Luas Kerucut : %li ",luaskerucut(h,z));
    printf("\nVolume Kerucut : %li ",volumekerucut(h,y));

    printf("\n\n==Bangunan Kubus==\n\n");
    printf("Luas Kubus : %li ",luaskubus(z));
    printf("\nVolume Kubus : %li ",volumekubus(z));

    printf("\n\n");

}

long int luasbalok (int p, int l, int t)
{
    int LB;

    LB = 2 * ( p * t + p * l + l * t);
    return LB;
}

long int volumebalok (int p, int l, int t)
{
    int VB;
    VB = p * l * t;
    return VB;
}

long int luaskerucut (int r, int s)
{
    int L;
    L = (pi * r * s) + (pi * r * r);
    return L;
}

long int volumekerucut (int r, int t)
{
    int V;
    V = 0.33 * pi * r * r * t;
    return V;
}

long int luaskubus (int s)
{
    int L;
    L = 6 * s * s;
    return L;
}

long int volumekubus (int s)
{
    int V;
    V = s * s * s;
    return V;
}
