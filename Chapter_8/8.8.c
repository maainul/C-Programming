#include <stdio.h>
int main()
{
	int i,j,k;
	char first_name[10]="Mainul";
	char second_name[10]="Hasan";
	char last_name[10]="Anik";
	char name[30];
	/*.....Copy first name into name.......*/
	for(i=0;first_name[i]!='\0';i++)
	{
		name[i]=first_name[i];
	}
	/*....End first name with whitespace...*/
	name[i]=' ';
	/*.....Copy second name into name......*/
	for(j=0;second_name[j]!='\0';j++)
	{
		name[i+j+1]=second_name[j];
	}
	/*...End second name with whitespace...*/
	name[i+j+1]=' ';
	/*.....Copy last name into name........*/
	for(j=0;last_name !='\0';k++)
	{
		name[i+j+k+2]=last_name[k];
	}
	/*.....End with a null character.......*/
	name[i+j+k+2]='\0';
	printf("\n\n");
	printf("%s\n",name);
	return 0;
}
