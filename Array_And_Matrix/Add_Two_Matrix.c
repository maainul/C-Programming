#include <stdio.h>
int main ()
{
	int i,j,Row,Column;
	int First[10][10],Second[10][10],Additon_Row_Wise[10][10];
	/*READING NUMBER OF ROW AND COLUMN.....*/
	printf("Enter How many Row and column you want to add:\n");
	scanf("%d %d",&Row,&Column);
	/*....READING 1st MATRIX ELEMENTS........*/
	printf("Enter elements of First Matrix\n");
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Column;j++)
		{
			scanf("%d",&First[i][j]);
		}
	}
	/*....READING 2nd MATRIX ELEMENTS........*/
	printf("Enter elements of 2nd Matrix\n");
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Column;j++)
		{
			scanf("%d",&Second[i][j]);
		}
	}
	/* .........PRINTING 1ST MATRIX value.......*/ 
	printf("Values of Matrix A:\n");
	printf("______________________\n\n");
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Column;j++)
		{
			printf("%d\t",First[i][j]);
		}
		printf("\n");
	}
	/* .........PRINTING 2ST MATRIX.......*/ 
	printf("Values of Matrix B:\n");
	printf("______________________\n\n");
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Column;j++)
		{
			printf("%d\t",Second[i][j]);
		}
		printf("\n");
	}
	/*.......MATRIX ADDITION IN ROW WISE.....*/ 
	printf("ADDITION OF A+B:\n");
	printf("______________________\n\n");
	for(i=0;i<Row;i++)
	{
		Additon_Row_Wise[i][j]=0;
		for(j=0;j<Column;j++)
		{
			Additon_Row_Wise[i][j]=First[i][j]+Second[i][j];
			printf("%d\t",Additon_Row_Wise[i][j]);
		}
		printf("\n");
	}
	return 0;
}
