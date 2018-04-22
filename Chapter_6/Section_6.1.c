#include <stdio.h>
int main()
{
	int n,sum=0;
	n=1;
	while(n<=10)
	{
		sum=sum+n*n;
		n=n+1;
	}
	printf("sum =%d\n",sum);
	return 0;
}