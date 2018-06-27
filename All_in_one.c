#include <stdio.h>
int main()
{
	int A[10],i,n,j,temp,s,c=0,largest,press;
	printf("------Welcome-------\n");
	printf("Press 1 for to Find BIGGEST number\nPress 2 for Sorting elements smaller to largest\nPress 3 To search particular element\n");
	scanf("%d",&press);
	switch(press)
	{
    case 1:
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
		for (int i = 0; i < n; ++i)
		{
			if(A[i]>largest)
				largest=A[i];
		}
		printf("\nlargest value of A is = %d\n",largest);

	break;
	case 2:
		printf("Enter Number of Elements\n");
		scanf("%d",&n);
		printf("Enter Elements of A\n");

		for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}

		for(j=0;j<n;j++)
		{
	    	for(int i = 0; i < n; ++i)
			{
				if(A[i]>A[i+1])
				{
					temp=A[i];
					A[i]=A[i+1];
					A[i+1]=temp;
				}
			}
		}
		for (int i = 0; i < n; ++i)
		{
			printf("%d\t",A[i]);
		}
	break;
	default:
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
	}

	return 0;
}
