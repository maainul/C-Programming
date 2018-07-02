#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("Number is positive");
	}
	else if (num==0)
	{
        printf("0");
	}
	else
	{
		printf("Number is negative");
	}


	return 0;
}
