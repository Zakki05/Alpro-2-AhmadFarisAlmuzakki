void main()
{
    int A[100],n,i,d,swap;
    printf("Masukkan banyak isi tabel : ");
    scanf("%d",&n);

    printf("Masukkan %d buah angka \n",n);
    for (i=0;i<n;i++)
    {
         scanf("%d",&A[i]);
    }

    for(i=1;i<=(n-1);i++)
    {
        for(d=n-1;d>=i;d--)
        {
            if(A[d]<A[d-1])
            {
                swap = A[d];
                A[d] = A[d-1];
                A[d-1] = swap;
            }
        }
    }

    printf("\nIsi tabel terurut dari kecil ke besar : ");
    for (i=0;i<n;i++)
    {
        printf("%d \t",A[i]);
    }
}
