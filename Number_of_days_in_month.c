#include <stdio.h>
int main()
{
	int m,d;

	printf("Enter Month Number:\n");
	scanf("%d",&m);

	switch(m)
	{
		case 4:
		case 6:
		case 9:
		case 11:
			d=30;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			d=31;
			break;
		case 2:
			d=28;
			break;
		default:
			d=0;
			break;
		
	}

	if(d)
		printf("Number of days in %d month is:%d\n",m,d);
	else
		printf("You have enter invalid number!!!\n");
	return 0;
}
