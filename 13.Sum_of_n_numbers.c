#include <stdio.h>
int main()
{
	int i,n,sum=0,num;
	printf("Enter numbers of elements\n");
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		sum=sum+i;
	}
	printf("Sum of %d number is=%d\n",n,sum );
	return 0;
}
