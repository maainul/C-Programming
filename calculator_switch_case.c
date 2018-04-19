#include <stdio.h>
int main()
{
	float num1,num2,result;
	char ch;

	printf("Enter First Number:\n");
	scanf("%f",&num1);
	printf("Enter seconf Number:\n");
	scanf("%f",&num2);
 	printf("Choose operation to perform (+,-,*,/): ");
    scanf(" %c",&ch);
	result=0;

	switch(ch)
	{
		case '+':
			result=num1+num2;
			break;
		case '-':
			result=num1-num2;
			break;
		case '*':
			result=num1*num2;
			break;
		case '/':
			result=num1/num2;
			break;
		default:
			printf("Invalid Operation\n");
	}
	printf("Result: %.2f %c %.2f = %.2f\n",num1,ch,num2,result);
	return 0;
}
