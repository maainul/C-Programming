#include<stdio.h>
main()
{
float num;
int ip,rm;
printf("Enter a floating point numbe");
scanf("%f",&num);
ip=(int)num;
rm=ip%10;
printf("Right most digit of integral part=%d\n",rm);
return 0;
}
