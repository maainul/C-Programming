#include<stdio.h>
void main()
{
    int marks,count,a,b,c,d,i;
    a=0; b=0; c=0;d=0;
    printf("Input 5 boy's marks\n");

    for(i=1;i<=5;i++)
    {
    scanf("%d",&marks);
        if(marks>80)
                        a++;
        else if(marks>60)
                        b++;
        else if(marks>40)
                        c++;
        else if(marks<=40)
                        d++;
    }
    printf("Number of students who have obtained more than 80 marks=%d\nNumber of students who have obtained more than 60 marks=%d\n Number of students who haveobtained more than 40 marks=%d\n Number of students who have obtained 40 orless marks=%d",a,b,c,d);
    return 0;
    
}

