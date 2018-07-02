# include <stdio.h>
int main ()
{
    int i,j,A[3][3];
    printf("Enter Elements of A Matrix:\n");
    for(i=0;i<3;i++)
     {
      printf("Elements Of %d row:\n\n",i+1);
         for(j=0;j<3;j++)
          {
             scanf("%d",&A[i][j]);
          }
     }
//Prints A matrix
printf("Matrix of A\n");
    for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
          {
             printf("%d\t",A[i][j]);
          }
          printf("\n");
     }
//Transpose Matrix Of A
    printf("Transpose Matrix of A=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             printf("%d\t",A[j][i]);//Printf function is used for printing result
        }
        printf("\n");
    }
    return 0;
}
