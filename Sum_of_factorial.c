#include <stdio.h>

int main()
{
   int n, rem= 0,sum=0,f,i;

   printf("Enter a number to reminder\n");
   scanf("%d", &n);

   while (n != 0)
   {
    rem = n%10;
    {
    f=1;
    i=1;
    while(i<=rem)
    {
        f = f * i;
        i++;
    }
    }
    sum=sum+f;
    n= n/10;
   }
    printf("Sum of Factorial: %d\n",sum);
    return 0;
}
