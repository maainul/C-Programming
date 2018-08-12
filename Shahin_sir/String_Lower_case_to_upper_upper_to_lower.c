#include<stdio.h>
#include<string.h>
void main()
{
    char m[100];
    int i;
    gets(m);
    for(i=0;i<strlen(m);i++)
    {
        if((m[i]>=65)&&(m[i]<90))
        {
            m[i]=m[i]+32;
        }
        else if ((m[i]>=97 && m[i]<=122))
        {
            m[i]=m[i]-32;
        }
    }
    printf("\n");
    puts(m);
    return 0;

}
