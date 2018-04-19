#include<stdio.h>
int main()
{
	int num1,d,n,i;

	printf("Enter Number of digits:\n");
	scanf("%d",&d);
	for(n=1;n<=d;n++)
	{
    printf("Enter Number\n");
    scanf("%d",&num1);
    for(i=1;i<=num1;i++)
    {
      for (i=1;i<=num1;i++)
          if (num1%i==0)
              printf("%d\n",i);
    }
}
return 0;
}
