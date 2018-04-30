

---------------
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
----------------
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
|CProgramming|
------------------
#include <stdio.h>
int main()
{
	int c,d;
	char string[]="CProgramming";
	printf("\n\n");
	printf("---------------\n");
	for (int i = 0; i < 11; ++i)
	{
		d=c+1;
		printf("|%-12.*s|\n",d,string);
	}
	printf("----------------\n");
	for (int i = 11; i > 1; --i)
	{
		printf("|%-12.*s|\n",d,string);
	}
	printf("------------------\n");
}
