#define FIRST 360
#define SECOND 240
#include <stdio.h>

int main ()
{
	int n,s,i,j,m,total,marks,roll;
	printf("Enter Number of Students and Subjects:\n");
	scanf("%d %d",&n,&s);
	printf("%d Students and %d Subjects\n",n,s);

	for(i=1;i<=n;i++){

		printf("Enter Student ID:\n");
		scanf("%d",&roll);
		total=0;
		printf("Enter  %d Marks\n",s);

		for(j=1;j<=s;j++)
		{
			scanf("%d",&marks);
			total=total+marks;
		}
        printf("Total Marks=%d",total);
        if(total>=FIRST)
            printf("(First Division)\n\n");
        else if (total>=SECOND)
            printf("(Second division)\n\n");
        else
        printf("Fail");
	}

	return 0;
}
