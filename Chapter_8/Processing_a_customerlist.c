#define CUSTOMER 5
#include <stdio.h>
int main()
{
	char first_name[20][10],
		 second_name[20][10],
		 surname[20][10],
		 name[20][20],
		 telephone[20][10],
		 dummy[20];

	int i,j;
printf("Input name and telephone number:\n");
printf("?");
for(i=0;i<CUSTOMER;i++)
{
	scanf("%s %s %s %s",first_name[i],second_name[i],surname[i],telephone[i]);
	/*.....Converting full name to surname with initials......*/
	strcpy(name[i],surname[i]);
	strcat(name[i], ",");
	dummy[0]=first_name[i][0];
	dummy[1]='\0';
	strcat(name[i],dummy);
	strcat(name[i],".");
	dummy[0]=second_name[i][0];
	dummy[1]='\0';
	strcat(name[i],dummy);
}
/*......Alphabetical ordering of surname......*/
for (int i = 1; i <=CUSTOMER-1; ++i)
	for(j=1;j<=CUSTOMER-1;j++)
		if(strcmp(name[j-1],name[j])>0)
		{
		/*...Swaping names..*/
		strcpy(dummy,name[j-1]);
		strcpy(name[j-1],name[j]);
		strcpy(name[j],dummy);
		/*...Swaping names..*/
		strcpy(dummy,telephone[j-1]);
		strcpy(telephone[j-1],telephone[j]);
		strcpy(telephone[j],dummy);
		}
	/*......Printing alphabet list....*/
		printf("\n CUSTOMER list in Alphabetical order:\n\n");
		for (int i = 0; i < CUSTOMER; ++i)
		{
			printf("%-20s\t %-10s\n",name[i],telephone[j]);
		}
	return 0;
}
