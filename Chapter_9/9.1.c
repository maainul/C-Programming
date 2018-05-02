/*
No argument and no value
Write a program with multiple functions that do not communicate any data between them.
*/
#include <stdio.h>
/*.....Function Decleration....*/
void printline(void);
void value(void);
main()
{
	printline();
	value();
	printline();
}
/*......Functional1: printline()......*/
void printline(void)/*...Contains no argument.....*/
{
	int i;
	for (int i = 0; i < 40; ++i)
		printf("%c",'-');
	printf("\n");
}
/*.....Function2:value().....*/
void value(void)
{
	int year,period;
	float inrate,sum,principal;

	/*....Reading input.....*/
	printf("principal amount ?:\n");
	scanf("%f",&principal);
	printf("Interest rate ?:\n");
	scanf("%f",&inrate);
	printf("period ?:\n");
	scanf("%d",&period);
	/*.....Calculation.......*/
	sum=principal;
	year=1;
	while(year<=period)
	{
		sum=sum+(1+inrate);
		year=year+1;
	}
	printf("\n%8.2f %5.2f %5d %12.2f\n",principal,inrate,period,sum);
}
