#define MAXGIRLS 4
#define MAXTERM 3
#include <stdio.h>
int main ()
{
    int value[MAXGIRLS][MAXTERM];
    int i,j,grand_total;
    int girl_total[MAXGIRLS],item_total[MAXTERM];
    /*..........READING OF VALUES AND COMPUTING GIRL_TOTAL...............*/
    printf("Input Data\n");
    printf("Enter Values, one at a time,row-wise\n\n");
    /*..........COMPUTE GIRLS TOTALS Row Value Addition...............*/
    for(i=0;i<MAXGIRLS;i++)
    {
        printf("Input %d Row\n",i+1);
        girl_total[i]=0;
        for(j=0;j<MAXTERM;j++)
        {
            scanf("%d",&value[i][j]);
            girl_total[i]=girl_total[i]+value[i][j];
        }
    }
    /*......print Matrix Line....*/
     for(i=0;i<MAXGIRLS;i++)
    {
        for(j=0;j<MAXTERM;j++)
        {
            printf("\t%d",value[i][j]);
        }
        printf("\n");
    }
    /*...........COMPUTE ITEMS TOTALS (Column Value ADDINTION)..............*/
    for(j=0;j<MAXTERM;j++)
    {
        item_total[j]=0;
        for(i=0;i<MAXGIRLS;i++)
        {
            item_total[j]=item_total[j]+value[i][j];
        }
    }
    /*.........COMPUTING GRAND TOTALS................*/
    grand_total=0;
    for(i=0;i<MAXGIRLS;i++)
        grand_total=grand_total+girl_total[i];
    /*.......PRINTING RESULT......*/
    printf("\n Girls TOTALS\n");
    /*.....GIRLS TOTALS.......*/
    for(i=0;i<MAXGIRLS;i++)
    {
        printf("SalesGirl[%d]=%d\n",i+1,girl_total[i]);
    }
      /*.....ITEMS TOTALS.......*/
    printf("\n ITEMS TOTALS\n");
    for(j=0;j<MAXTERM;j++)
        printf("ITEM[%d]=%d\n",j+1,item_total[j]);
        printf("GRAND TOTAL=%d\n",grand_total);

return 0;
}
