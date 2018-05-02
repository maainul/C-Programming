#include <stdio.h>
/*....Function Decleration.....*/
float ratio(int x,int y,int z);
int difference(int x,int y);

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%f\n",ratio(a,b,c));
}
/*....Function 1: ratio.....*/
float ratio(int x, int y, int z)
{
	if(difference(y,z))
		return (x/y-z);
	else
		return (0,0);
}
/*....function 2:Difference.....*/
int difference(int p,int q)
{
	if(p!=q)
		return (1);
	else
		return (0);
}
