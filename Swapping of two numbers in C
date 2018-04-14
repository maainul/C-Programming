
#include <stdio.h>
 
int main()
{
   int x, y, temp;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
 
   printf("Before Swapping\nx = %d\ny = %d\n",x,y);
 
   temp = x;
   x    = y;
   y    = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n",x,y);
 
   return 0;
}

Method 2 for swipping a number
#include <stdio.h>
 
int main()
{
   int n, reverse = 0;
 
   printf("Enter a number to reverse\n");
   scanf("%d", &n);
 
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
 
   printf("Reverse of entered number is = %d\n", reverse);
 
   return 0;
}
