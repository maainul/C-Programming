#include<stdio.h>
int main()

{
  int x,y,z;

  printf("Enter 3 number:\n");
  scanf("%d%d%d",&x,&y,&z);

  if(x > y)
  {
     if(x > z)
       printf("Largest number=%d",x);
     else
       printf("Largest number=%d",z);
  }
  else
  {
     if(y > z)
       printf("Largest number=%d",y);
     else
       printf("Largest number=%d",z);
  }
}
