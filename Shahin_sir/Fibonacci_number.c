/******************************************************************************
The Fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
... The next number is found by adding up the two numbers ... 

STEPS:
  1.First input a nunber.
  2.We have to print 0 and 1 before the execusion is start.
  3.That means that o and 1 will be static number.
  4.loop will be start from 2 because 0 and 1 is static.
  5.after one iteration is over then value of x and y will be replace or changed.

*******************************************************************************/

#include <stdio.h>

int main() 
{
  int n, i, x = 0, y = 1, z;
  //Enter a number for findind fibonacci series up to this number
  printf("Enter any number n:");
  scanf("%d", &n);
//Print 0 1 before the for loop.
// 0 1 will be constant
  printf("%d\t%d\t",x,y);
//loop will be start from 2 because 0 and 1 is constant
  for (i = 2; i <= n; i++)
  {
    //after one itteraton add x and y
      z = x + y;
      printf("%d\t",z);
    //after printing value value will be replaced for next time iteration
      x=y;
      y=z;
  }
  return 0;
}
