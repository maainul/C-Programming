#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180
int main(){
    int angle;
    float x,y;
    angle=0;
    printf("  Angel         Cos(Angel)\n\n");
    while(angle<=MAX){
        x=(PI/MAX)*angle;
        y=cos(x);
    printf("  %d          %f\n",angle,y);
     angle=angle+10;
    }
    return 0;
    }
