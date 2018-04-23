#include<stdio.h>
int main()
{
    //number[row][column]
    int i,j,num[4][3],total=0;
    printf("Enter 6 Values:\n");
    /*.....Reading and Printing Value......*/
    for(i=0;i<4;i++)//Number of Rows
    {
        printf("Enter %d Rows:\n",i+1);

        for(j=0;j<3;j++)
        {

            scanf("%d",&num[i][j]);
        }
    }
    /*....Printing Value......*/
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",num[i][j]);
        }
        printf("\n");
    }
    //Printing Total Amount
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            total=total+num[i][j];
        }
        printf("Salesgirl[%d]=%d",i+1,total);
        total=0;
        printf("\n");
    }
    return 0;
}
