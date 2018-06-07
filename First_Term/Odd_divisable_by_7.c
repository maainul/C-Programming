#include<stdio.h>
int main()
{
    int i,num;
    i=1;
    s:
        if(i%7==0)
        printf("%d\n",i);
        i++;
    if(i<=100)
    {
        goto s;
    }
    return 0;
}
