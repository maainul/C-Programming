#include<stdio.h>
int main()
{
  int days,month,day;
  printf("Enter Days:");
  scanf("%d",&days);
  month=days/30;
  day=days%30;
  printf("%d Month and %d Days",month,day);
  return 0;
}
