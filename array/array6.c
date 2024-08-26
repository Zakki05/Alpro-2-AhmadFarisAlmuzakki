/*** Program :  array3.c
     pembuat :  Ahmad Faris Almuzakki
     Tanggal :  15/3/2022
     Deskripsi : buat program yang meminta input ukuran dua buah array, jika indeks yang bernilai genap
                 berisi angka (angkanya mulai dari 1), indeks yang bernilai ganjil berisikan dengan huruf
                 {hurufnya dimulai dari karakter a), 0 dianggap genap
*/

#include "stdio.h"

void main()
{
    int A[100];
    int i,ukuran,angka;
    char huruf;

    printf("Ukuran Array A : ");
    scanf("%i",&ukuran);

    angka=1;
    huruf='a';

    printf("Array A : ");
    for(i=0;i<ukuran;i++)
    {
        if(i%2==0)
        {
            A[i]=angka;
            printf(" %i",A[i]);
            angka++;
        }
        else
        {
            A[i]=huruf;
            printf(" %c",A[i]);
            huruf++;
        }
    }

}
