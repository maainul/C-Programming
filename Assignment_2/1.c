#include <stdio.h>
int main()
{
	int x,y,z,temp;

	printf("Enter 3 Numbers\n");
    scanf("%d%d%d",&x,&y,&z);

    temp = x;
    x=y;
    y=z;
    z=temp;

    printf("%d\t%d\t%d\t",x,y,z);
	return 0;
}
