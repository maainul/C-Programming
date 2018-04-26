#include <stdio.h>
int main ()
{
	int i,j,Row,Column;
	int num[10][10],Additon_Row_Wise=0,Additon_Column_Wise=0;
	/*READING NUMBER OF ROW AND COLUMN.....*/
	printf("Enter How many Row and column you want to add:\n");
	scanf("%d %d",&Row,&Column);
	/*....READING  MATRIX ELEMENTS........*/
	printf("Enter elements of First Matrix\n");
	for(i=0;i<Row;i++)
	{
	printf("Enter %d Row:\n",i+1);
		for(j=0;j<Column;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	/* .........PRINTING MATRIX AND RESULT.......*/
	printf("Values of Matrix A:\n");
	printf("______________________\n\n");
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Column;j++)
		{
			printf("%d\t",num[i][j]);
			Additon_Row_Wise=Additon_Row_Wise+num[i][j];
		}
	/*.....PRINT RESULT.....*/
		printf("%d\n",Additon_Row_Wise);
		printf("\n");
		Additon_Row_Wise=0;
	}

	/* .........PRINTING RESULT.......*/
	printf("Values of Matrix A:\n");
	printf("______________________\n\n");
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Column;j++)
		{
			printf("%d\t",num[i][j]);	
		}
		printf("\n");
	}
	/* .........PRINTING RESULT.......*/
	printf("______________________\n\n");
	for(j=0;j<Column;j++)
	{
		for(i=0;i<Row;i++)
		{		
			Additon_Column_Wise=Additon_Column_Wise+num[i][j];
		}
	/*.....PRINT RESULT  OF COLUMN ADDITION.....*/
		printf("%d    ",Additon_Column_Wise);	
		Additon_Column_Wise=0;
	}
	return 0;
}

