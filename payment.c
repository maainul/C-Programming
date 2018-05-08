#include<stdio.h>
int main()
{
    int h,r,p;
    printf("Enter hours:");
    scanf("%d",&h);
    printf("Enter rates:");
    scanf("%d",&r);
    if(h>40)
    {
        p=h*r+(r*1.5);
        printf("Pay=%d",p);
        printf("\n");
    }
    else
    {
        p=h*r;
        printf("Pay=%d",p);
        printf("\n");
    }
    return 0;
}

