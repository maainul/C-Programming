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
# 2.Using if else lader

#include <stdio.h>
int main(void){
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); // printing outputs

if(num >= 80){
printf(" You got A grade"); // printing outputs
}
else if ( num >=60){ // Note the space between else & if
printf(" You got B grade");
}
else if ( num >=40){
printf(" You got C grade");
}

else if ( num < 40){
printf(" You Failed in this exam");
}
return 0;
}
