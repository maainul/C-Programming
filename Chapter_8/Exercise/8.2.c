#include <stdio.h>
int main()
{
	char string1[20],string2[20]="Anik";
	int x;
	printf("Who is the inventor of c?\n");
	scanf("%s",string1);
	/*comparing two string.....*/
	x=strcmp(string1,string2);
	if(x!=0)
		printf("Try  again\n");
	else
		printf("Good\n");
	return 0;
}
