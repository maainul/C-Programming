/*
Examples:
7 = 7^1
371 = 3^3 + 7^3 + 1^3 (27 + 343 +1)
8208 = 8^4 + 2^4 +0^4 + 8^4 (4096 + 16 + 0 + 4096).
1741725 = 1^7 + 7^7 + 4^7 + 1^7 + 7^7 + 2^7 +5^7 (1 + 823543 + 16384 + 1 + 823543 +128 + 78125)
*/

#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
/*
Armstrong number 1: 0
Armstrong number 2: 1
Armstrong number 3: 153
Armstrong number 4: 370
Armstrong number 5: 371
Armstrong number 6: 407
*/
