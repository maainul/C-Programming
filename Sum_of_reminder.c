#include <stdio.h>

int main()
{
   int n, rem= 0,sum=0;

   printf("Enter a number to reminder\n");
   scanf("%d", &n);

   while (n != 0)
   {
    rem = n%10;
    sum=sum+rem;
    printf("Reverse of entered number is = %d\n", rem);
    n= n/10;

   }
   printf("sum of numbers:%d",sum);
    return 0;
}
