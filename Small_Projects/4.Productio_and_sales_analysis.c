#include <stdio.h>
int main ()
{
	int M[5][6],S[5][6],C[6],Mvalue[5][6],Svalue[5][6];
	int Mweek[5],Sweek[5],Mproduct[6],Sproduct[6],Mtotal,Stotal,i,j,number;
	/*......INPUT DATA.........*/
	printf("Enter products manufactured week_wise\n");
	printf("M11,M12,___,M21,M22____etc\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			scanf("%d",&M[i][j]);
		}
	}
	/*.....INPUT COST OF PRODUCT........*/
	printf("Enter products sold week_wise\n");
	printf("S11,S12,___,S21,S22____etc\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			scanf("%d",&S[i][j]);
		}
	}
	/*......INPUT COST OF PRODUCTS.......*/
	printf("Enter Cost of each products\n");
		for(j=1;j<=5;j++)
		{
			scanf("%d",&C[j]);
		}
	/*.......VALUE OF MATRICES OF PRODUCTION AND SALES.....*/
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			Mvalue[i][j]=M[i][j]*C[j];
			Svalue[i][j]=S[i][j]*C[j];

		}
	}
	/*.....TOTAL VALUE OF WEEKLY PRODUCTION AND SALES......*/
	for(i=1;i<=4;i++)
	{
		Mweek[i]=0;
		Sweek[i]=0;
		for(j=1;j<=5;j++)
		{
			Mweek[i]+=Mvalue[i][j];
			Sweek[i]+=Svalue[i][j];
		}
	}

	/*.....TOTAL VALUE OF MONTHLY PRODUCTION AND SALES......*/
	for(j=1;j<=5;j++)
	{
		Mproduct[j]=0;
		Sproduct[j]=0;
		for(i=1;i<=4;i++)
		{
			Mproduct[j]+=Mvalue[i][j];
			Sproduct[j]+=Svalue[i][j];
		}
	}
	/*.....GRAND TOTAL OF PRODUCTION AND SALES VALUE.....*/
	Mtotal=Stotal=0;
	for(i=1;i<=4;i++)
	{
		Mtotal+=Mweek[i];
		Stotal+=Sweek[i];
	}
/**************************************************************
SELECTION AND PRINTING OF INFORMATION REQUIRED
***************************************************************/
	printf("\n\n");
	printf("Following is the list of things that you can \n");
	printf("Request for Enter Appropiate iteam number\n");
	printf("And Press Return Key\n");
	printf("1.Value of MATRICES of PRODUCTION and SALES\n");
	printf("2.Total value of weekly PRODUCTION and SALES\n");
	printf("3.PRODUCTIONwise MONTHLY value of PRODUCTION and SALES\n");
	printf("4.GRAND Total of productin and SALES\n");
	printf("5.Exit\n");
	number=0;
	while(1)
	{
		/*....BEGINING OF WHILE LOOP......*/
		printf("Enter Your choice:\n");
		scanf("%d",&number);
		printf("\n");

		if(number==5)
		{
			printf("GOOD BYE\n\n");
			break;
		}

		switch(number)
		{
			/*.....Production details......*/
			case 1:
			printf("VALUE MATRICES OF PRODUCTION\n");
			for(i=1;i<=4;i++)
			{
				printf("Week(%d)\t",i);
				for(j=1;j<=5;j++)

					printf("%7d\n",Mvalue[i][j]);

				printf("\n");
			}
			/*.....Sales details......*/
		    printf("VALUE MATRICES OF Sales\n");
			for(i=1;i<=4;i++)
			{
				printf("Week(%d)\t",i);
				for(j=1;j<=5;j++)

					printf("%7d\t",Svalue[i][j]);

				printf("\n");
			}
			break;
			case 2:
			/*.....WEEKLY ANALYSIS.......*/
			printf("Total weekly PRODUCTION and SALES\n");
			printf("           PRODUCTION     SALES\n");
			printf("            ___________    ________\n");
			for(i=1;i<=4;i++)
			{
				printf("week(%d)\t",i);
				printf("%7d\t%7d\n",Mweek[i],Sweek[i]);
			}
			break;
			/*....Product wise analysis.....*/
			case 3:
			printf("Product wise total production and sales\n");
			printf("              PRODUCTION     SALES\n");
			printf("              ___________    ________\n");
			for(j=1;j<=5;j++)
			{
				printf("product(%d)\t",j);
				printf("%7d\t%7d\n",Mproduct[j],Sproduct[j]);
			}
			break;

			/*......GRAND TOTALS.......*/
			case 4:
			printf("GRAND TOTALS of the PRODUCTION and SALES\n");
			printf("Total production =%d\n",Mtotal);
			printf("Total SALES=%d\n",Stotal);
			break;
			default :
			printf("Wrong choice,select again\n\n");
			break;
		}/*........End of switch............*/
	}/*............End of while loop..............*/
}/*........End of main......*/
