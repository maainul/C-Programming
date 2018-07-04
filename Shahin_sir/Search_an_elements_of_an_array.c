
#include <stdio.h>
int main()
{
	int A[10],i,n,s,c=0;

	printf("Enter Number of Elements\n");
	scanf("%d",&n);
	printf("Enter Elements of A\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\nEnter which Element you want to search\n");
	scanf("%d",&s);
	for (int i = 0; i < n; ++i)
	{

			if(A[i]==s)
			{
                		printf("%d is in location %d\n",s,i+1);
                        c++;
			}

	}
    if(c==0)
    printf("Nothing Found");
    else
    printf("%d found in %d times",s,c);
	return 0;

}
