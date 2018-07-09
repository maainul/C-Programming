#include <stdio.h>

main() {
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);
  /*logic*/  
  for (i = 2; i < n/2; i++) {
      if (n % i == 0) {
         c=1;
        break;
      }
  }
/*Condition Check*/
  if (c == 1) {
  printf("%d is Not Prime number",n);
  }
  else {
  printf("%d is a Prime number",n);
  }
  return 0;
}
