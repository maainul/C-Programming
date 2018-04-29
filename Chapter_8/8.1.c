/*...
Write a program to read a series of words from a terminal using scanf function
..*/
#include<stdio.h>
int main ()
{
    char word1[20],word2[20],word3[20],word4[20];
    printf("Enter Text:\n");
    scanf("%s",word1);
    scanf("%s",word2);
    scanf("%s",word3);
     scanf("%s",word4);
    printf("\n");
    printf("Word1= %s\nWord2= %s\n",word1,word2);
    printf("Word3= %s\nWord4= %s\n",word3,word4);
    return 0;
}
