#include "stdio.h"

void main()
{
    int umur;
    char huruf,nama[15];
    float nilai;

    printf ("Masukkan Huruf = ");
    scanf ("%c",&huruf);
    printf ("Masukkan Nilai = ");
    scanf ("%f",&nilai);
    printf ("Masukkan Nama = ");
    fflush(stdin); /// digunakan untuk membersihkan memory
    scanf ("%s",&nama);
    printf ("Masukkan Umur = ");
    scanf ("%i",&umur);

    printf ("\n\nHuruf Yang Diinputkan : %c\n",huruf);
    printf ("Nilai Anda : %0.2f\n",nilai);
    printf ("Nama Anda : %s\n",nama);
    printf ("Umur Anda : %i\n",umur);
}
