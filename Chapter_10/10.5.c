#include <stdio.h>
struct marks
{
	int sub[3];
	int total;
};
main()
{
	int i,j;
	struct marks student[3]={{45,67,81,0},{75,53,69,0},{57,36,71,0}};
	struct marks total;
	for (int i = 0; i <= 2; ++i)
	{
		for (int j = 0; j <=2; ++j)
		{
		student[i].total+=student[i].sub[j];
		total.sub[j]+=student[i].sub[j];
		}
		total.total=total.total+student[i].total;
	}

	printf("STUDENT            TOTAL\n");
	for (int i = 0; i <=2; ++i)
		printf("student[%d]    %d\n",i+1,student[i].total);
		 printf("Subject       TOTAL\n");
		 for(j=0;j<=2;j++)
		 	printf("Subject-%d    %d\n",j+1,total.sub[j]);
		 printf("Grand total=%d\n",total.total);

}

