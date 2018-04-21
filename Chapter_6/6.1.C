#include <stdio.h>
int main()
{
	int n,count;
	float x,y;
	printf("Enter the values of x and n:\n");
	scanf("%f %d",&x,&n);
	y=1;
	count=1;		/*Initialization */
	/*Loop begain*/
	while(count<=n)	/*Testing */
	{
		y=y*x;
		count++;
	}
	/*End of Loop */
	printf("x =%f; n=%d;x to the power of=%f\n",x,n,y);
	return 0;
}
