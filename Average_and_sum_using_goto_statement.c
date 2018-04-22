#include <stdio.h>
int main()
{

	int i,maxnum=5;
	float ave;
	double number,sum=0;
	//Loop starts 
	for(i=1;i<=maxnum;i++)
	{

		printf("%d. Enter Number:\n",i);
		scanf("%lf",&number);
		//Condition check if number is smaller then o it will goto jump statement
		if(number<0)
			goto jump;
		sum=sum+number;

	}

	jump:
		ave=sum/(i-1);
		printf("Average =%f\n",ave);
		printf("Sum=%lf\n",sum);
		return 0;
	
}