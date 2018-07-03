#include<stdio.h>
int main()
{
  char ch;
 
  printf("Enter a character\n");
  scanf("%c", &ch);
 
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    printf("%c is a vowel.\n", ch);
  else
    printf("%c isn't a vowel.\n", ch);
 
  return 0;
}

####Check vowel using switch statement
#include <stdio.h>
 
int main()
{
  char ch;
 
  printf("Input a character\n");
  scanf("%c", &ch);
 
  switch(ch)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("%c is a vowel.\n", ch);
      break;
    default:
      printf("%c isn't a vowel.\n", ch);
  }              
 
  return 0;
}
