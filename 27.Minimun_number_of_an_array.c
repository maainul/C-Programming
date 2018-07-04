#include<stdio.h>
int main()
{
    int i, n, lar,sm, elem;
    printf ("Enter total number of elements \n");
    scanf ("%d", &elem);
    printf ("Enter first number \n");
    scanf ("%d", &n);
    lar = n;
    sm=n;
    for (i=1; i<= elem -1 ; i++)
    {

        scanf ("%d",&n);
        if (n>lar)
        lar=n;
        if (n<sm)
        sm=n;
    }
    printf ("\n The largest number is %d", lar);
    printf ("\n The smallest number is %d", sm);
    return 0;
}



#include <stdio.h>
int main()
{
    int i,n,largest=0,smallest=n,A[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        /* code */
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        /* code */
        if(A[i]>largest)
            largest=A[i];
        if(A[i]<smallest)
            smallest=A[i];
    }
    printf("largest=%d\n",largest );
    printf("Smallest=%d",smallest);
}
