###Output###
Enter Code, Quantity and Rate:
a11
215
102
Enter Code, Quantity and Rate:
ar3
123
546.02
Enter Code, Quantity and Rate:
t556y
567
980.67
Enter Code, Quantity and Rate:
ty7u
56
768.098


       Inventory Report
---------------------------------------
Code       Quantity      Rate     Value
---------------------------------------
  a11        215     102.00   21930.00
  ar3        123     546.02   67160.46
t556yty7u    567     980.67  556039.88
 ty7u         56     768.10   43013.49
--------------------------------------
            Total value =688143.812500
----------------------------------------

#define ITEMS 4
#include<stdio.h>
int main ()
{
    int i,quantity[5];
    float rate[5],value,total_value;
    char code[5][5];
    /*-----Reading values-----*/
    i=1;
    while(i<=ITEMS){
        printf("Enter Code, Quantity and Rate:\n");
        scanf("%s",code[i]);
        scanf("%d",&quantity[i]);
        scanf("%f",&rate[i]);
        i++;
    }
    /*----Printing of table and column heading---*/
    printf("\n\n");
    printf("       Inventory Report      ");
    printf("\n");
    printf("-----------------------------------\n");
    printf("Code       Quantity      Rate     Value\n");
    printf("------------------------------------\n");
    /*------Preparation of inventory position-------*/
    total_value=0;
    i=1;
    while(i<=ITEMS){
        value=quantity[i]*rate[i];
        printf("%5s %10d %10.2f %10.2f\n",code[i],quantity[i],rate[i],value);
        total_value=total_value+value;
        i++;
    }
    /*---------Printing End of table--------*/
    printf("--------------------------------------\n");
    printf("                    Total value =%10.2f\n",total_value);
    printf("----------------------------------------\n");
    return 0;
}
