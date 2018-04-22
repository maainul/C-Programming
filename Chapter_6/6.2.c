#define COLMAX 10
#define ROWMAX 12

#include <stdio.h>
int main()
{
	int row,colum,y;
	row=1;
	
	printf("  				Multiplication Table\n");		
	printf("---------------------------------------------------\n");
	//Outer Loop
	do
	{
		colum=1;
		do
		{
			y=row*colum;
			printf("%4d\n",y);
			colum=colum+1;
		}






	}
	return 0;
}
