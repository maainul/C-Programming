#include <stdio.h>
#include<math.h>
void perameter(void);
void area(void);

int main()
{
    perameter();
    area();

}
void perameter(void)
{
    int a,b,c,per;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    per=a+b+c;
    printf("perimeter %d:",per);
    printf("\n");
    return 0;
}
void area(void)
{
    int a,b,c,s;
     float A;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
  A=sqrt((s-a)*(s-b)*(s-c));

    printf("Area is  %f:",A);
    return 0;
}


