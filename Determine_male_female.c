#include<stdio.h>
int main ()
{
	char gender;
	printf("Enter (M/F)\n");
	scanf("%c",&gender);
	switch(gender)
	{
		case 'M':
		case 'm':
			printf("Male\n");
			break;
		case 'F':
		case 'f':
			printf("Female\n");
			break;
		default:
			printf("Unsupported\n");
	}
	printf("\n");
	return 0;
}
