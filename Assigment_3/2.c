/*
   2. Write a C program to input any alphabet and check whether it is vowel or consonant.
*/
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter alphabet\n");
    scanf("%ch",&alphabet);

    if((alphabet>='a'|| alphabet<='e'||alphabet>='i'|| alphabet<='o'||alphabet>='u')||(alphabet>='A'|| alphabet<='E'||alphabet>='I'|| alphabet<='O'||alphabet>='U'))
        printf("Vowel");
    else
        printf("Consonant");
    }
        return 0;

}
