# include <stdio.h>
int main ()
{
    int i,j,A[3][3],B[3][3],Addition[3][3];
    printf("Enter Elements of A Matrix:\n");
    // This for loop is for taking input A of 5 times
    for(i=0;i<3;i++)
     {
      printf("Elements Of %d row:\n\n",i+1);
         for(j=0;j<3;j++)
          {
             scanf("%d",&A[i][j]);//Scanf function is used for taking input
          }

     }
 printf("Enter Elements of B Matrix:\n");
    // This for loop is for taking input A of 5 times
    for(i=0;i<3;i++)
     {
      printf("Elements Of %d row:\n\n",i+1);
         for(j=0;j<3;j++)
          {
             scanf("%d",&B[i][j]);//Scanf function is used for taking input
          }

     }

//This loop is for printing input value for A
//This loop is for printing input value for A
printf("Matrix of A=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             printf("%d\t",A[i][j]);//Printf function is used for printing result
        }
        printf("\n");
    }
    printf("Matrix of B=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             printf("%d\t",B[i][j]);//Printf function is used for printing result
        }
        printf("\n");
    }
   //Addition of two matrix
    printf("Matrix of A+B=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            Addition[i][j]=A[i][j]+B[i][j];
             printf("%d\t",Addition[i][j]);//Printf function is used for printing result
        }
        printf("\n");
    }

    return 0;
}
