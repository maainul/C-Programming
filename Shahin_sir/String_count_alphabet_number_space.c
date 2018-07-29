#include<stdio.h>
#include<string.h>
int main()
{
	char m[100],c;
	int i,alphabet=0,digit=0,space=0,special=0;
	gets(m);

	for(i=0;m[i]!='\0';i++)
	   {
        if((m[i] >= 'a' && m[i] <= 'z') || (m[i] >= 'A' && m[i] <= 'Z'))
        {
            //printf("'%c' is alphabet.", ch);
            alphabet++;
        }

        else if(m[i] >= '0' && m[i] <= '9')
        {
            digit++;
            //printf("'%c' is digit.", ch);
        }
        else if(m[i]== ' ')
        {
            space++;
            //printf("'%c' is special character.", ch);
        }
        else
        {
            special++;
        }


	}

	if(alphabet==0)
        {
            printf("alphabet is not found\n");
        }
	else
        {
            printf("Alphabet is found in %d times\n",alphabet);
        }
	if(digit==0)
        {
            printf("Digit is not found\n");
        }
	else
        {
            printf("Digit is found in %d times\n",digit);
        }

    if(space==0)
        {
            printf("space is not found\n");
        }
    else
        {
            printf("space is found in %d times\n",space);
        }
    if(special==0)
        {
            printf("special character is not found\n");
        }
    else
        {
            printf("special character is found in %d times\n",special);
        }


	return 0;
}
