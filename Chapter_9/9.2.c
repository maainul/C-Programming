/*
Argument and no value
Write a program to incude the arguments in the funtion calls
*/
#include <stdio.h>
/*.....Function Decleration....*/
void printline(char C);
void value(float,float,int);
main()
{
float principal,inrate;
int period;
	printf("Enter the principal amount and Interest:\n");
	printf("Rate and period\n");
	scanf("%f %f %d",&principal,&inrate,&period);
	printline('Z');
	value(principal,inrate,period);
	printline('c');
}
/*......Functional1: printline()......*/
void printline(char ch)/*...Contains no argument.....*/
{
	int i;
	for (int i = 0; i < 40; ++i)
		printf("%c",'ch');
	printf("\n");
}
/*.....Function2:value().....*/
void value(float p,float r, int n)
{
	int year;
	float sum;

	/*.....Calculation.......*/
	sum=p;
	year=1;
	while(year<=n)
	{
		sum=sum+(1+r);
		year=year+1;
	}
	printf("\n%8.2f %5.2f %5d %12.2f\n",p,r,n,sum);
}
