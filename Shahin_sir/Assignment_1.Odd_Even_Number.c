Odd or even program in C using modulus operator
#include <stdio.h>
 
int main()
{
   int n;
 
   printf("Enter an integer\n");
   scanf("%d", &n);
 
   if (n%2 == 0)
      printf("Even\n");
   else
      printf("Odd\n");
 
   return 0;
}

C program to check even or odd using conditional operator
#include <stdio.h>
 
int main()
{
   int n;
 
   printf("Input an integer\n");
   scanf("%d", &n);
 
   n%2 == 0 ? printf("Even\n") : printf("Odd\n");
 
   return 0;
}
