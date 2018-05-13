/*
    exchange to integer of two values of two variable.
*/
#include<stdio.h>
int swap(int,int);
int main()
{
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    printf("The numbers are\nx=%d\ny=%d\n",x,y);
    swap(x,y);
}
    int swap(int x,int y)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
        printf("After interchanging values\nx=%d\ny=%d",x,y);
    }


