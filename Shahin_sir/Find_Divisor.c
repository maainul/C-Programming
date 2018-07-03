/*
 * C Program to Check whether a given Number is Perfect Number
 */

#include <stdio.h>
int main()
{
    int i,rem;
    for(i=1;i<10;i++)
    {
        rem=20%i;
        if(rem == 0){
            printf("%d\n\n",i);
        }

    }

return 0;
}

