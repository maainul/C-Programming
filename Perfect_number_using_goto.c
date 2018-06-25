#include <stdio.h>

int main()
{
  int n,i=1,sum=0;

	//enter the value of n (range)
	printf("Enter the value of n: ");
	scanf("%d",&n);
a:
 if(n%i==0)
           sum=sum+i;
            i++;

if(i<n){
     goto a;
}

  if(sum==n)
      printf("%d is a perfect number",i);
  else
      printf("%d is not a perfect number",i);

	return 0;
}

