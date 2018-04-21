#include<stdio.h>
int main()
{
  int number;
  float amount;
  number=100;
  amount=45.5+23.6;
  printf("number=%d\n",number);
  printf("amount=%f\n",amount);
  printf("amount=%5.2f",amount);/* 5.2%f tells the compiler that 5 place in all and two int right side after decimal point*/
  return 0;
}
