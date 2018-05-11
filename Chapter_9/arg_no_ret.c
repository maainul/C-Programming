/*
    Function with  arguments no return value
*/

#include <stdio.h>
void add (int,int);//function declearation
main()
{
	int a,b;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	add(a,b);//formal function
}
void add (int x,int y)//actual function//function defination
{
	int s;
	s=x+y;
	printf("addition of two number=%d",s);
}

