/*
    Write a C program to check whether a character is alphabet or digit or special character.

*/
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter number or special character\n");
    scanf("%ch",&alphabet);

    if((alphabet>='a'&&alphabet<='z')||(alphabet>='A'&&alphabet<='Z'))
        printf("Alphabet");
        else if
        (alphabet>='0'&& alphabet<='9')
            printf("Digit");
    else
        printf("Special character");
        return 0;

}
