#include <stdio.h>
int main()
{
	int A[10],i,n,temp,j;

	printf("Enter Number of Elements\n");
	scanf("%d",&n);
	printf("Enter Elements of A\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
	for(j=0;j<n;j++)
	{
    	for(int i = 0; i < n; ++i)
		{
			if(A[i]>A[i+1])
			{
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",A[i]);
	}

	return 0;

}
