#define COL 5
#define ROW 5
#include<stdio.h>
int main ()
{
    int i,j,row,column,pro[ROW][COL];
    printf("\t\tMULTIPLICATION TABLE\n\n");
    for(j=1;j<=COL;j++)
    {
        printf("%4d",j);
    }
    printf("\n");
    printf("----------------------------------------------\n");
    for(i=0;i<ROW;i++)
    {
        row=i+1;
        printf("%2d |",row);
        for(j=1;j<=COL;j++)
        {
          column=j;
          pro[i][j]=row*column;
          printf("\t%4d",pro[i][j]);
        }
        printf("\n");
    }
    return 0;
}
