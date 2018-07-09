/*
 * C Program to Check whether a given Number is Perfect Number
 Perfect number, a positive integer that is equal to the sum of
 its proper divisors. The smallest perfect number is 6, which is the sum of 1, 2, and 3.
 15 is divisible by 1,3,5
 so =1+3+5=9
 if number is equal to sum of its divisor is called perfect number
 here sum of divisor is not the given number so it is not perfect number.
 */
#include <stdio.h>
 
int main()
{
    int number, rem, sum = 0, i;
 
    printf("Enter a Number\n");
    scanf("%d", &number);
    for (i = 1; i <= (number - 1); i++)
    {
        rem = number % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("Entered Number is perfect number");
    else
        printf("Entered Number is not a perfect number");
    return 0;
}
