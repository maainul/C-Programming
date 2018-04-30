--------------
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
--------------
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
--------------
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

--------------
|C           |
|CP          |
|CPr         |
|CPro        |
|CProg       |
|CProgr      |
|CProgra     |
|CProgram    |
|CProgramm   |
|CProgrammi  |
|CProgrammin |
|CProgrammi  |
|CProgramm   |
|CProgram    |
|CProgra     |
|CProgr      |
|CProg       |
|CPro        |
|CPr         |
|CP          |
|C           |
--------------
#include <stdio.h>
int main()
{
	int c,d;
	char string[]="CProgramming";
	printf("\n\n");
	printf("---------------\n");
	for (int c = 0; c < 11; ++c)
	{
		d=c+1;
		printf("|%-12.*s|\n",d,string);
	}
	for (int c = 11; c> 1; --c)
	{
	    d=c-1;
		printf("|%-12.*s|\n",d,string);
	}
	printf("------------------\n");
}

--------------
|           C|
|          CP|
|         CPr|
|        CPro|
|       CProg|
|      CProgr|
|     CProgra|
|    CProgram|
|   CProgramm|
|  CProgrammi|
| CProgrammin|
|  CProgrammi|
|   CProgramm|
|    CProgram|
|     CProgra|
|      CProgr|
|       CProg|
|        CPro|
|         CPr|
|          CP|
|           C|
--------------


#include <stdio.h>
int main()
{
	int c,d;
	char string[]="CProgramming";
	printf("\n\n");
	printf("---------------\n");
	for (int c = 0; c < 11; ++c)
	{
		d=c+1;
		printf("|%12.*s|\n",d,string);
	}
	for (int c = 11; c> 1; --c)
	{
	    d=c-1;
		printf("|%12.*s|\n",d,string);
	}
	printf("------------------\n");
}


--------------
|C|
|CP|
|CPr|
|CPro|
|CProg|
|CProgr|
|CProgra|
|CProgram|
|CProgramm|
|CProgrammi|
|CProgrammin|
|CProgrammi|
|CProgramm|
|CProgram|
|CProgra|
|CProgr|
|CProg|
|CPro|
|CPr|
|CP|
|C|
--------------
#include <stdio.h>
int main()
{
	int c,d;
	char string[]="CProgramming";
	printf("\n\n");
	printf("---------------\n");
	for (int c = 0; c < 11; ++c)
	{
		d=c+1;
		printf("|%.*s|\n",d,string);
	}
	for (int c = 11; c> 1; --c)
	{
	    d=c-1;
		printf("|%.*s|\n",d,string);
	}
	printf("------------------\n");
}


---------------
|C|
| C|
|  C|
|   C|
|    C|
|     C|
|      C|
|       C|
|        C|
|         C|
|          C|
|         C|
|        C|
|       C|
|      C|
|     C|
|    C|
|   C|
|  C|
| C|
|C|
------------------
	
#include <stdio.h>
int main()
{
	int c,d;
	char string[]="CProgramming";
	printf("\n\n");
	printf("---------------\n");
	for (int c = 0; c < 11; ++c)
	{
		d=c+1;
		printf("|%*.1s|\n",d,string);
	}
	for (int c = 11; c> 1; --c)
	{
	    d=c-1;
		printf("|%*.1s|\n",d,string);
	}
	printf("------------------\n");
}

