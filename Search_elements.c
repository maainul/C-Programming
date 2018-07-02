#include <stdio.h>
int main()
{
	int i,j,A[100],Search,Elements,Biggest=0,count=0;
	printf("Enter number of Elements:\n");
	scanf("%d",&Elements);
	printf("Elements are:\n");
	for (i = 0; i < Elements; ++i)
	{
		scanf("%d",&A[i]);
	}
	//Print the result
	for (i = 0; i < Elements; ++i)
	{
		printf("%d\t",A[i]);
	}

	//Search Elements
	printf("\nEnter the Elements what you want to Search\n");
	scanf("%d",&Search);
	for (i = 0; i <Elements; ++i)
	{
		if (A[i]==Search)
        {
        count++;
        printf("Your Element %d Is location:%d\n",Search,i+1);
        }

    }
	if(count==0)
	{
	printf("Not Found");
	}
	else
	printf("Your Element %d finds in :%d times",Search,count);
	return 0;
}
