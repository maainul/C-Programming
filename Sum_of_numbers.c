#include <stdio.h> 
int main()
{
  int n, sum = 0, c, value;
  printf("How many numbers you want to add?\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 1; c <= n; c++)
  {
    scanf("%d", &value);
    sum = sum + value;
  }
  printf("Sum of the integers = %d\n", sum);
  return 0;
}


###C program to calculate sum of n numbers using array
#include <stdio.h>
 
int main()
{
   int n, sum = 0, c, array[100];
 
   scanf("%d", &n);
 
   for (c = 0; c < n; c++)
   {
      scanf("%d", &array[c]);
      sum = sum + array[c];
   }
 
   printf("Sum = %d\n", sum);
 
   return 0;
}
