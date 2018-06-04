#include <stdio.h>
int main()
{
	int a=100;
	int *p;
	p=&a;
	printf("Value of A:\n",a);
	printf("Address of A:\n",*p);
	return 0;


}
