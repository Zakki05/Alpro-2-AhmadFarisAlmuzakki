/** Program     : array13.c
    pembuat     : Ahmad Faris ALmuzakki
    Tangal      : 22/3/2022
    deskripsi   : no 7 menginputkan dan menampilkan niali dalam array
*/

#include"stdio.h"
void main()
{
    int a[100],b[100];
    int nilai,i,j,k;
    j=0;

    printf("Masukan nilai = ");
    scanf("%i",&nilai);

    for(i=0;i<nilai;i++)
    {
        printf("Masukan nilai array A indeks ke %i =",i);
        scanf("%i",&a[i]);
    }
    for (i=0;i<nilai;i++)
    {
        printf("%i ",a[i]);
    }
    ///index yang ingin dipindahkan simpan di sebuah variabel
    k=a[0];
    for(i=0;i<nilai;i++)
    {
        b[i]=a[i+1];
        b[nilai-1]=k;
    }
    for(i=0;i<nilai;i++)
    {
        printf("%i ",b[i]);
    }
}
