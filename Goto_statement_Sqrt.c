#include<stdio.h>
#include<math.h>
int main()
 {
    int num;
    float answer;

  Label:
    printf ("Enter a number:\n");
    scanf("%d",&num);

    if(num>0)
    answer = sqrt(num);
    printf("Square root of %d is %.3f\n",num,answer);
    goto Label;
    return 0;
}
