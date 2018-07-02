#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if((num%5==0) && (num%11==0))
	{
		printf("Divisible\n");
	}
	else
	{
		printf("Not\n");
	}


	return 0;
}
