#include <stdio.h>
int main()
{
	char line[81],ctr;
	int c,i,end=0,characters=0,words=0,lines=0;
	printf("Key in the text\n");
	printf("Give one space after each word.\n\n");
	while(end == 0)
	{
		/*....Reading a line of text....*/
		c=0;
		while((ctr=getchar())!='\n')
			line[c++]=ctr;
		line[c]='\0';
		/*....Counting the words in a line....*/
		if(line[0]=='\0')
			break;
		else
		{
			words++;
			for(i=0;line[i]!='\0';i++)
				if(line[i]==' '||line[i]=='\t')
	 			  words++;
		}
		/*....Counting lines and characters....*/
		lines=lines+1;
		characters=characters+strlen(line);
	}
	printf("\n");
	printf("Number of Linea=%d\n",lines);
	printf("Number of words=%d\n",words);
	printf("Number of characters=%d\n",characters);
}
