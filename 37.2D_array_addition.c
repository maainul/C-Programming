#include<stdio.h>
int main()
{
    int i,j,num[2][3],total=0;
    printf("Enter 6 Values:\n");
    /*.....Reading and Printing Value......*/
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    /*....Printing Value......*/
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",num[i][j]);
            total=total+num[i][j];
        }
    /*.....Showing Result......*/
        printf("\t%d",total);
        total=0;
        printf("\n");
    }
    return 0;
}
