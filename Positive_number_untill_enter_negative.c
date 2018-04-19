#include<stdio.h>
int main()
{
	int num;
Read:
	printf("Enter a number:\n");
	scanf("%d",&num);

	if(num>0)
	{
		printf("Enterd number is %d\n",num);
		goto Read;
	}
	return 0;
}
