#include <stdio.h>

main() {
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  /*logic*/  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
  printf("%d is a Prime number",n);
  }
  else {
  printf("%d is not a Prime number",n);
  }
  return 0;
}


#include<stdio.h>
int main()
{
      int num,i=1,c=0;
      printf("/*To Check Number Prime or Not*/\n\nEnter Number : ");
      scanf("%d",&num);
      while(i<=num)
      {
            if(num%i==0)
            c++;
            i++;
      }
      if(c==2)
            printf("\n%d is Prime Number",num);
      else
            printf("\n%d is Not Prime Number",num);
      return 0;
}
