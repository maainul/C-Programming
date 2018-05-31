#include <stdio.h>
int main()
{
    int x,y,z,b;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&x,&y,&z);
    b=((x>y)?((x>z)?x:z):(y>z)?y:z);
    printf("%d\n",b);
    return 0;
}
