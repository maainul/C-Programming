--------------------------------
Program :1
OUTPUT:
*
**
***
****
*****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

        End of First Program
---------------------------------
 
--------------------------------
Program 2:
OUTPUT:
*****
****
***
**
*

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

        End Of Second Program
---------------------------------


----------------------------------
Program 3:
OUTPUT:
*****
 ****
  ***
   **
    *

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<i)
            printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
        End of third Program 
-----------------------------------

-----------------------------------
Program 4:
OUTPUT: 
    *
   **
  ***
 ****
*****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=4;j>=0;j--)
        {
            if(j>i)
            printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
        End of fourth Program 
---------------------------------

---------------------------------
Program 5:
OUTPUT:
    *
   * *
  * * *
 * * * *
* * * * *

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=4;j>=0;j--)
        {
            if(j>i)
            printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}
        End of fifth Program
---------------------------------


-----------------------------------
Extra Program:

* * * * *
 * * * *
  * * *
   * *
    *


#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<i)
            printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}

-----------------------------------

