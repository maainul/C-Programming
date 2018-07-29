#include<stdio.h>
#include<string.h>
int main()
{
	char m[100],c;
	int i,count=0;
	gets(m);
	printf("Which character you want search?\n");
	scanf("%c",&c);

	for(i=0;m[i]!='\0';i++)
	{
		if(c==m[i])
		{
			count++;
		}

	}
	if(count==0)
	{
		printf("character is not found\n");
	}
	else
	{
		printf("%c found in %d times\n",c,count);
	}
	
	return 0;
}
