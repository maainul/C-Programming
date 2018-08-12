/*
   1. Write a C program to check whether a character is alphabet or not.
*/

#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter alphabet\n");
    scanf("%ch",&alphabet);

    if((alphabet>='a'&&alphabet<='z')||(alphabet>'A'&& alphabet<'Z'))
        printf("Alphabet");
    else
        printf("not Alphabet");
        return 0;

}
