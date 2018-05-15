	/*
    Function with no arguments no return value
*/
#include <stdio.h>
void add (void);
 void sub(void);
 void mul (void);
 void div (void);
main()
{
    char operator;
    printf("Enter Operator:[+,-,*,/] \n");
    scanf("%s", &operator);
    switch(operator)
    {
    case '+':add();
        break;
    case '-': 	sub();
        break;
    case '*': mul();
        break;
    case '/': 	div();
        break;
    default : printf("Error in operationn");
        break;
    }
}
void add (void)
{
	int a,b,s;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	s=a+b;
	printf("addition of two number=%d",s);
	printf("\n");
}
void sub (void)
{
	int a,b,s;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	s=a-b;
	printf("Subtraction of two number=%d",s);
    printf("\n");
}
void mul (void)
{
	int a,b,s;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	s=a*b;
	printf("multiplication of two number=%d",s);
    printf("\n");
}
void div (void)
{
	int a,b,s;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	s=a/b;
	printf("Division of two number=%d",s);
    printf("\n");
}
