#include <stdio.h>
#include<math.h>
int main()
{
	//variable decleration
	int count,negative;
	double number,sqroot;

	printf("Enter 9999 to stop:\n");
	//initialization
	count=0;
	negative=0;
	/*Loop Start*/
	while(count<=100)
	{
		printf("Enter a number:\n");
		scanf("%lf",&number);

		if(number==9999)
			break;//Exit From the loop
		if(number<0)
		{
			printf("Number is Negative:\n");
			negative++;
			continue;//Continue loop
		}

		sqroot=sqrt(number);
		printf("\n\n\Negative items =%lf\n Sqr root =%lf\n",number,sqroot);
		count++;
	}
    printf("Number of items done=%d",count);
    printf("Negative items=%d",negative);
	printf("End of the data\n");
	return 0;

}
