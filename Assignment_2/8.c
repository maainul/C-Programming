#include <stdio.h>
int main()
{
   int x,y,z,sum,smallest,b;
   float ave;

   printf("Enter 3  integer number\n");
   scanf("%d %d %d", &x,&y,&z);

   sum=x+y+z;
   ave=sum/3;
   smallest=((x<y)?((x<z)?x:z):(y<z)?y:z);
    b=((x>y)?((x>z)?x:z):(y>z)?y:z);
   printf("Sum of number= %d\n",sum);
   printf("Average of number= %f\n",ave);
   printf("Smallest  number= %d\n",smallest);
    printf("Biggest  number= %d\n",b);
   return 0;
}
