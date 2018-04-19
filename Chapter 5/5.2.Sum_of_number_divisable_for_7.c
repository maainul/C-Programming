#include<stdio.h>
int main()
{
	int sum,i;
	sum=0;

	for(i=100;i<=200;i++)
	{
	if(i%7==0)
		{
		sum=sum+i;
		printf(" Values=%d\n",i);
		}
	}

	printf("Numbers=%d\n",sum);
	return 0;
}
