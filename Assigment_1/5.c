/*
5. Write a C program to input basic salary of an employee and
calculate its Gross salary according to following:
Basic Salary <= 10000: HRA = 20%, DA = 80%
Basic Salary <= 20000: HRA = 25%, DA = 90%
Basic Salary > 20000: HRA = 30%, DA = 95%
*/
# include<stdio.h>
int main()
    {
        int basic,gross_salary,loss,price;
        printf("Enter basic salary of the employee:\n");
        scanf("%d",& basic);

        if(basic<=10000)
            gross_salary=(basic+(basic*20/100)+(basic*80/100));
            printf("%d",gross_salary);

                else if (basic<=20000)
            gross_salary=(basic+(basic*20/100)+(basic*80/100));
            printf("%d",gross_salary);


    else if printf("Special character");
}
