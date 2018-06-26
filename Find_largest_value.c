#include <stdio.h>
int main()
{
	int A[10],i,n,largest=0;

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
	for (int i = 0; i < n; ++i)
	{
		if(A[i]>largest)
			largest=A[i];
	}
	printf("\nlargest value of A is = %d\n",largest);

	return 0;
}
