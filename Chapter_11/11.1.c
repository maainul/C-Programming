//Find address of a variable

#include<stdio.h>
main()
{
    char a;
    int x;
    float p,q;

    a='A';
    x=125;
    p=10.25;
    q=18.76;
    printf("%c is stored at address= %u.\n",a,&a);
    printf("%d is stored at address= %u.\n",x,&x);
    printf("%f is stored at address= %u.\n",p,&p);
    printf("%f is stored at address= %u.\n",q,&q);
    return 0;

}
//Answer
A is stored at address= 6356751.
125 is stored at address= 6356744.
10.250000 is stored at address= 6356740.
18.760000 is stored at address= 6356736.




