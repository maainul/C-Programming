#include <stdio.h>
#include <math.h>
int main()
{
    int s,side1, side2, side3;
    float area;

    /* Input all three sides of a triangle */
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        s=(side1+side2+side3)/2;
        area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        printf("Area of a triangle = %f \n", area);
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}
