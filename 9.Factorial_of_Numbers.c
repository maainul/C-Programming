#include <stdio.h>
int main()
{
  int c, n, fact = 1;
 
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c; 
  printf("Factorial of %d = %d\n", n, fact);
  return 0;
}

## Using while loop

# include<stdio.h>
int main()
{
	int number,fact=1,c;
	scanf("%d",&number);
	c=1;
	while(c<=number)
	{
		fact=fact*c;
		c++;
	}
	printf("%d factorial is %d\n",number,fact);
	return 0;
}
