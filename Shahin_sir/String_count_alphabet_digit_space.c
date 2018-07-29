#include<stdio.h>
#include<string.h>
void main()
{
char m[900];
int Alpha=0,Space=0,Digit=0,i;
gets(m);
for(i=0;i<strlen(m);i++)
{
if((m[i]>=65&&m[i]<=90)||(m[i]>=97&&m[i]<=122))
{
Alpha++;
}
else if(m[i]>=48&&m[i]<=57)
{
Digit++;
}
else if(m[i]==32)
{
Space++;
}
}
printf("Alphabet=%d\nDigit=%d\nSpace=%d\n",Alpha,Digit,Space);
}
