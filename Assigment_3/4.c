/*

4. Write a C program to calculate profit or loss.

*/
# include<stdio.h>
int main()
    {
        int amount,profit,loss,price;
        printf("Enter Main price of product\n");
        scanf("%d",& amount);
        printf("Enter price");
        scanf("%d",& price);
        if(amount<price)
            printf("profit=%d",amount-price);
        else
            printf("Loss= %d",price-amount);

        return 0;

    }
