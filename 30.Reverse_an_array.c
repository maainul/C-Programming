
# include <stdio.h>
int main ()
{
    int i,j,A[5],B[5],Addition[5];
    printf("Enter Elements of A:\n");
    // This for loop is for taking input A of 5 times
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);//Scanf function is used for taking input
    }
    //This loop is for printing input value for A
    printf("A=");
    for(i=0;i<5;i++)
    {
        printf("%d\t",A[i]);//Printf function is used for printing result
    }
    printf("\n\n\nReverse of A:");
      for(i=4;i>=0;i--)
    {
        printf("%d\t",A[i]);//Printf function is used for printing result
    }
    return 0;
}
