#include <stdio.h>
int main()
{
	int n,p,i ,A[100];
	printf("Enter a number\n");
	scanf("%d",&n);
	//input array
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",&A[i]);
	}
	//input array
	for ( i = 0; i < n; ++i)
	{
		printf("%d\t",A[i]);
	}

	printf("\nEnter which position value you want to delete:\n");
	scanf("%d",&p);
	if(p>=n+1)
        printf("Deletion is not possible");
    else
        for(i=p-1;i<n-1;i++)
    {
        A[i]=A[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("\n%d\t",A[i]);
    }
	return 0;

}
