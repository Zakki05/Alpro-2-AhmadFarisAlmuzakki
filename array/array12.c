/** Program     : array12.c
    pembuat     : Ahmad Faris Almuzakki
    Tangal      : 22/3/2022
    deskripsi   : no 6 menginputkan dan menampilkan niali dalam array
*/

#include"stdio.h"
void main()
{
    int A[100],B[100];
    int ukuran,i,j,k;
    j=0;

    printf("Masukan nilai = ");
    scanf("%i",&ukuran);

    for(i=0;i<ukuran;i++)
    {
        printf("Masukan ukuran array A indeks ke %i = ",i);
        scanf("%i",&A[i]);
    }
    for (i=0;i<ukuran;i++)
    {
        printf("\t %i ",A[i]);
    }

    k=A[ukuran-1];

    for(i=0;i<ukuran;i++)
    {
        B[i+1]=A[i];
        B[0]=k;
    }
    printf("\n");

    for(i=0;i<ukuran;i++)
    {
        printf("\t %i ",B[i]);
    }
}
