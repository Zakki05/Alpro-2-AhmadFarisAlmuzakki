void main()
{
    int A[100],n,i,j,imax,swap;
    printf("Masukkan banyak isi tabel : ");
    scanf("%d",&n);

    printf("Masukkan array sebelum terurut =\n");
    for (i=0;i<n;i++)
    {
         scanf("%i",&A[i]);
    }

    for(i=0;i<n-1;i++)
    {
        imax = i;
        for(j=i+1;j<n;j++)
        {
            if(A[imax]<A[j])
            {
                imax = j;
            }
        }

        swap = A[imax];
        A[imax] = A[i];
        A[i] = swap;
    }

    printf("\nIsi tabel terurut dari besar ke kecil : ");
    for (i=0;i<n;i++)
    {
        printf("%i \t",A[i]);
    }
}

