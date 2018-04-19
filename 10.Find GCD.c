#include<stdio.h>
	int GCD(int m,int n);

	int main()
{
	int num1,num2;
	printf("Enter 2 Number\n");
	scanf("%d %d",&num1,&num2);

	printf("GCD is=%d\n",GCD(num1,num2));
}
int GCD(int a,int b)
{
	if(b>a)
		return GCD(b,a);
	if(b==0)
		return a;
	else
		return GCD(b,a%b);
}
