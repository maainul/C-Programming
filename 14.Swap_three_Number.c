###Swap 3 number###
#include<stdio.h>
int main()
{
    int x,y,z,temp;
    printf("Enter value of x y and z\n");
    scanf("%d %d %d",&x,&y,&z);

    printf("Before swapping\n x=%d\n y=%d\n z=%d\n",x,y,z);

    temp=x;
    x=y;
    y=z;
    z=temp;

    printf("After swapping\n x=%d\n y=%d\n z=%d",x,y,z);
    return 0;

}
