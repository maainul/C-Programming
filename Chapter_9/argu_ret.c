/*
    Function with  arguments return value
*/

#include <stdio.h>
int add (int,int);//function declearation
main()
{
	int a,b,ans;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	ans=add(a,b);//formal function
	printf("Addition=%d",ans);
}
int add (int x, int y)//actual function//function defination
{
	int c;
	c=x+y;
	return c;
}

