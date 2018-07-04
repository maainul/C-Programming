
#include <stdio.h>
int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   /*.......READING 1ST MATRIX VALUE.....*/
   printf("Enter the elements of first matrix\n");
   for (c = 0; c < m; c++){
    printf("Enter %d Row Value:\n",c+1);
      for (d = 0; d < n; d++){
         scanf("%d", &first[c][d]);
   }
   }
   /*.......READING 2nd MATRIX VALUE.....*/
   printf("Enter the elements of second matrix\n");
   for (c = 0; c < m; c++){
    printf("Enter %d Row Value:\n",c+1);{
       for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
        }
   }
   /*.......PRINTING 1st MATRIX VALUE.....*/
   printf("Matrix A:\n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
          printf("\t%d",first[c][d]);
      }
      printf("\n");
   }
/*.......PRINTING 2nd MATRIX VALUE.....*/
   printf("Matrix B: \n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
          printf("\t%d",second[c][d]);
      }
      printf("\n");
   }
   /*.....SUM OF MATRIX RESULT.....*/
   printf("Sum of entered matrices:-\n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
#include <stdio.h>
int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   /*.......READING 1ST MATRIX VALUE.....*/
   printf("Enter the elements of first matrix\n");
   for (c = 0; c < m; c++){
    printf("Enter %d Row Value:\n",c+1);
      for (d = 0; d < n; d++){
         scanf("%d", &first[c][d]);
   }
   }
   /*.......READING 2nd MATRIX VALUE.....*/
   printf("Enter the elements of second matrix\n");
   for (c = 0; c < m; c++){
    printf("Enter %d Row Value:\n",c+1);{
       for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
        }
   }
   /*.......PRINTING 1st MATRIX VALUE.....*/
   printf("Matrix A:\n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
          printf("\t%d",first[c][d]);
      }
      printf("\n");
   }
/*.......PRINTING 2nd MATRIX VALUE.....*/
   printf("Matrix B: \n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
          printf("\t%d",second[c][d]);
      }
      printf("\n");
   }
   /*.....SUM OF MATRIX RESULT.....*/
   printf("Sum of entered matrices:-\n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] - second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
   return 0;
}
   return 0;
}
