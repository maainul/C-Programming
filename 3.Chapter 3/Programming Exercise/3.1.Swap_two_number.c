#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter value of x and y\n");
    scanf("%d %d",&x,&y);

    printf("Before swapping\n x=%d\n y=%d\n",x,y);

    temp=x;
    x=y;
    y=temp;

    printf("After swapping\n x=%d\n y=%d",x,y);
    return 0;

}
