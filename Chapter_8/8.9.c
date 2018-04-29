#include<stdio.h>
int main()
{
    int x,l1,l2,l3;
    char s1[10],s2[10],s3[10];
    printf("Enter Two String Constant\n");
    printf("?");
    scanf("%s %s",s1,s2);
    /*....Comparing s1 and s2...*/
    x=strcmp(s1,s2);
    if(x !=0)
    {
        printf("\n\nString are not equal\n");
        strcat(s1,s2);//joining s1 and s2
    }
    else
        printf("\n\nString are equal");
    /*....Copying s1 and s3......*/
    strcpy(s3,s1);
    /*....Finding Length of Strings.....*/
    l1=strlen(s1);
    l2=strlen(s2);
    l3=strlen(s3);
    /*...Output.......*/
    printf("\ns1=%s\t Length = %d characters\n",s1,l1);
    printf("\ns2=%s\t Length = %d characters\n",s2,l2);
    printf("\ns3=%s\t Length = %d characters\n",s3,l3);

    return 0;
}
