#include<stdio.h>
main()
{
float u,a,distance,t

printf("Enter U: (meter per second)  :");
scanf("%f",&u);


printf("Enter a: (meter per second square)  :");
scanf("%f",&a);

again:
printf("Enter t: (Second)  :");
scanf("%f",&t);

distance=((u*t)+((a*t*t)/2));
printf("Distance=%f\n",distance);

goto again;
return 0;

}

