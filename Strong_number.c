#include <stdio.h>

int main()
{
   int n, rem= 0,sum=0,f,i,t;

   printf("Enter a number to reminder\n");
   scanf("%d", &n);
    t=n;
   while (t != 0)
   {
    rem = t%10;
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
    t= t/10;
   }

    printf("Sum of Factorial: %d\n",sum);
    if(n==sum)
        printf("%d is strong Number",n);
    else
        printf("%d is not a strong number",n);
    return 0;
}
