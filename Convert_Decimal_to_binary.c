#include <stdio.h>

int main()
{
   int n, rem,bin=0,i=1;
   printf("Enter a number:\n");
   scanf("%d", &n);
   while (n != 0)
   {
      rem = n % 2;  /o
      n=n/2;
      bin=bin+(rem*i);
      i=i*10;
   }
   printf("Binary Number of entered number is = %d\n", bin);
   return 0;
}
