#include <stdio.h>
int main()
{
	char str[30];
	int vol=0,cons=0,i=0;
	printf("Enter a string:\n");
	gets(str);
	while(str[i] !='\0')
	{
		if
			(str[i]='a'||str[i]='A'||str[i]='e'||str[i]='E'||
			str[i]='i'||str[i]='I'||str[i]='o'||str[i]='O' ||
			str[i]='u'||str[i]='U')
		vol++;
		else
			cons++;
		i++;
	}
	printf("\nNumber of vowels:%d",vol);
	printf("\nNumber of consonant:%d",cons);
	getch();
	return 0;
}
