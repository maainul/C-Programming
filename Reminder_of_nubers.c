#include <stdio.h>

int main()
{
   int n, rem= 0;

   printf("Enter a number to reminder\n");
   scanf("%d", &n);

   while (n != 0)
   {
    rem = n%10;
    printf("Reverse of entered number is = %d\n", rem);
    n= n/10;
   }
    return 0;
}
