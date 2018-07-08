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

    
-----------------------------------
 OUTPUT :
12345
1234
123
12
1
 
#include <stdio.h>
int main()
{
    int i, j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
        End of The Program
----------------------------------

----------------------------------
12345
2345
345
45
5

#include <stdio.h>

int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
------------------------------------
 
    
 -----------------------------------
54321
4321
321
21
1

#include <stdio.h>

int main()
{
    int i, j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

--------------------------------
    
    
 --------------------------------
54321
5432
543
54
5

#include <stdio.h>

int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
----------------------------------
    
 --------------------------------
1
12
123
1234
12345


#include <stdio.h>

int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
--------------------------------

-------------------------------
5
45
345
2345
12345


#include <stdio.h>

int main()
{
    int i, j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

-----------------------------------------
    
    
---------------------------------------
1
21
321
4321
54321

#include <stdio.h>

int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

-----------------------------------
    
    
----------------------------------
    
5
54
543
5432
54321

#include <stdio.h>

int main()
{
    int i, j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
--------------------------------
    
-------------------------------
http://cbasicprogram.blogspot.com/2012/04/number-patterns.html
