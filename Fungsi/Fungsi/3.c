#include "stdio.h"
#include "math.h"

long int hasil (int a, int b);

void main()
{
    int x,y;

    printf("Masukkan Nilai X : ");
    scanf("%i",&x);
    printf("Masukkan Nilai Y : ");
    scanf("%i",&y);

    printf("Hasil : %li",hasil(x,y));
}

long int hasil (int a, int b)
{
    int H;
    H = pow(a,3) + 3*pow(a,2)*b + 6*a*pow(b,2) + pow(b,3);
    return H;
}
