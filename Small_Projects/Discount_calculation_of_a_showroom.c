/*.............marketing of a showroom..................*/
#define MC1 0
#define MC2 0.05
#define MC3 0.075
#define MC4 0.10
#define HI1 0.05
#define HI2 0.075
#define HI3 0.10
#define HI4 0.15
#include<stdio.h>
int main ()
{
	//variable decleration
	int level,customerNumber;
	float price,basic,net,discount;
	//Input value
	input:
	printf("Enter level, customerNumber and Price\n");
	printf("Enter 0 for level to END\n");
	scanf("%d",&level);

	//check the level number of the products
	if(level==0) goto stop;
	scanf("%d %f",&customerNumber,&price);

	switch(level)
	{
		case 1:
			discount=MC1+HI1;
			break;
		case 2:
			discount=MC2+HI2;
			break;
		case 3:
			discount=MC3+HI3;
			break;
		case 4:
			discount=MC4+HI4;
			break;
		default:
			printf("Error in Level code\n");
			goto stop;

	}

	if(0<=price<=100)
		net=price-(price*discount);

	else if(101<=price<=200)
		net=price-(price*discount);

else if(201<=price<=300)
		net=price-(price*discount);

	else
		net=price-(price*discount);


		printf("Net amount=%f\n",net);
	goto input;

	stop:
		printf("End of the program\n");
}




/*.............marketing of a showroom..................*/
#define MC1 0
#define MC2 0.05
#define MC3 0.075
#define MC4 0.10
#define HI1 0.05
#define HI2 0.075
#define HI3 0.10
#define HI4 0.15
#include<stdio.h>
void main()
{
float price,net,discount;
int level,jobnumber;
input:
printf("Enter level jobnumber and purchase amount\n");
printf("Enter zero for level to End\n");
scanf("%d%d%f",&level,&jobnumber,&price);
if(level==0) goto stop;
if(0<=price<=100)
level=1;
else if(101<=price<=200)
level=2;
else if(201<=price<=300)
level=3;
else
level=4;
switch(level)
{
case 1:
discount=MC1+HI1;
break;
case 2:
discount=MC2+HI2;
break;
case 3:
discount=MC3+HI3;
break;
case 4:
discount=MC4+HI4;
break;
default:
printf("Error in level code\n");
goto stop;
}
net=price-(price*discount);
printf("Net amount=%f\n",net);
goto input;
stop:printf("\n\nEND OF THE PROGRAM");
}
