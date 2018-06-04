#include <stdio.h>
int main()
{
	int a=100;
	int *p;
	p=&a;
	printf("Value of A:%d\n",a);
	printf("Address of A:%d\n",*p);
	printf("%p\n",&a);
	printf("%p",&p);
	return 0;
}
