#include "stdio.h"

typedef struct
{
    int x;
    int y;
}titik;

void main()
{
    titik t1;

    printf("Masukkan Koordinat X = ");
    scanf("%i",&t1.x);
    printf("Masukkan Koordinat Y = ");
    scanf("%i",&t1.y);

    printf("Koordinat titik yang diinputkan adalah (%i,%i)",t1.x,t1.y);

}
