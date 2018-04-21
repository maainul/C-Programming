#include<stdio.h>
void main()
{
    int math,phy,chem,sum,b;

    printf("Enter  Number of Math=");
    scanf("%d",&math);
    printf("Enter  Number of Physics=");
    scanf("%d",&phy);
    printf("Enter Number of Chemistry=");
    scanf("%d",&chem);
    printf("\n\n");
    sum=math+phy+chem;
    b=math+phy;

    if(math>=60&&phy>=50&&chem>=40&&sum>=200&&b>=150)
        printf("The candidate is eligible");
    else
        printf("The candidate is not eligible");

return 0;
}

