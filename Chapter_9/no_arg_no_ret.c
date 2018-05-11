/*
    Function with no arguments no return value
*/

#include <stdio.h>
void add (void);
main()
{
	add();
}
void add (void)
{
	int a,b,s;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	s=a+b;
	printf("addition of two number=%d",s);

}
