#include <stdio.h>
int main()
{
	int number,index;
  
 	printf("Enter Marks");
    scanf(" %d",&number);
    index=number/10;
    if(number<=100)
    {
        
       	switch(index)
        	{
        		case 10:
        		case 9:
        			printf("A");
        			break;
        		case '8':
        			printf("B");
        			break;
        		case 7:
        			printf("C");
        			break;
        		case 6:
        			printf("D");
        			break;
        		default:
        			printf("You are Failed\n");
        			break;
        	} 
        
    }
    else
    printf("Invalid NUmber");

	
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
