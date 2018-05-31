#include <stdio.h>

#include <math.h>

void main()
{
    float L,R,C,frequency;


    printf("\nEnter industance L:");
    scanf("%f",&L);

    printf("\nEnter resistance R:");
    scanf("%f",&R);

    printf("\nEnter capacitance C:");
    scanf("%f",&C);


    for(C=0.01;C<=0.1;C+=0.01)
    {
        frequency=sqrt((1/(L*C))-((R*R)/(4*C*C)));
        printf("\nFrequency is:%f",frequency);
        printf("\n");
    }

}
