/***
Nama : Ahmad Faris Almuzakki
Kelas : MI 1A
No Bp : 2101092028
Soal : Buat program yang meminta user menginputkan koordinat titik, kemudian tampilkan
hasil pencerminan terhadap sumbu X dan sumbu Y
*/

#include "stdio.h"

typedef struct
{
    int x;
    int y;
}titik;

void main()
{
    titik t1;

    printf("Masukkan Koordinat X : ");
    scanf("%i",&t1.x);
    printf("Masukkan Koordinat Y : ");
    scanf("%i",&t1.y);

    printf("\nKoordinat titik X dan Y adalah (%i,%i)",t1.x,t1.y);
    printf("\nKoordinat terhadap sumbu X (%i,%i)",t1.x,-t1.y);
    printf("\nKoordinat terhadap sumbu Y (%i,%i)",-t1.x,t1.y);

}
