
#include <stdio.h>
int main()
{
	int i,j,A[100],Elements,Biggest=0;
	printf("Enter number of Elements:\n");
	scanf("%d",&Elements);
	printf("Elements are:\n");
	for (i = 0; i < Elements; ++i)
	{
		scanf("%d",&A[i]);
	}
	//Print the result
	for (i = 0; i < Elements; ++i)
	{
		printf("%d\t",A[i]);
	}

	//Biggest Elements
	for (int i = 0; i <Elements; ++i)
	{
		if (A[i]>Biggest)
		{
			Biggest=A[i];
		}
	}
	printf("\nBiggest number is:%d\n",Biggest);
	return 0;
}
