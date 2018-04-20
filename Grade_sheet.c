#include <stdio.h>
int main()
{
	int number,index;
	char grade;

 	printf("Enter Marks");
    scanf(" %d",&number);
    index=number/10;
	switch(index)
	{
		case 10:
			grade='A';
			break;
		case 9:
			grade='B';
			break;
		case '8':
			grade='C';
			break;
		case 7:
		case 6:
			grade='D';
			break;
		default:
			printf("Invalid Operation\n");
			break;
	}
	printf("Grade is=%c",grade);
	return 0;
}
