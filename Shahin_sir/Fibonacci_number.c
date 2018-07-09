/******************************************************************************
The Fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
... The next number is found by adding up the two numbers ... 

*******************************************************************************/

#include <stdio.h>

int main() {
  int n, i, x = 0, y = 1, z;
  printf("Enter any number n:");
  scanf("%d", &n);

  printf("%d\t%d\t",x,y);
  /*logic*/
  for (i = 2; i <= n; i++)
  {
      z = x + y;
      printf("%d\t",z);
      x=y;
      y=z;
  }
  return 0;
}
