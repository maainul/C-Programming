#define MAXLOAN 50000
#include<stdio.h>
int main(){

	long int loan1,loan2,loan3,sanction,sum23;

	printf("Enter the value of previous two loans:\n");
	scanf("%ld %ld",&loan1,&loan2);
	printf("Enter new loan amount:\n");
	scanf("%ld",&loan3);

	sum23=loan2+loan3;

	sanction=(loan1>0)? 0:((sum23>MAXLOAN)? MAXLOAN-loan2:loan3);

	printf("\n\n");
	printf("Previous loans panding:\n%ld %ld\n",loan1,loan2);
	printf("Loan requested=%ld\n",loan3);
	printf("Loan sanctioned=%ld\n",sanction);
	return 0;
}
