#include <stdio.h>
int main()
{
	int i,j,A[100],n,temp;
	printf("Enter number of Elements:\n");
	scanf("%d",&n);
	printf("Elements are:\n");

		for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
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
			printf("%d\t",A[i]);
		}
	return 0;
}
