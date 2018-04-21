#include<stdio.h>
int main()
{
	int x;

	for(x=1;x<=100;x++)
	{
		if((x%4!=0)&&(x%6==0))//This condition states that number is divisable by 6 but not divisable by 4
			printf("%d\n",x);
	}
	return 0;
}