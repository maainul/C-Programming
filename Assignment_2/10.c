#include <stdio.h>
int main()
{
    int n,b;
    printf("Enter a numbers:\n");
    scanf("%d",&n);
    b=(n%2==0)?printf("%d is even",n):printf("%d is odd number",n);
    return 0;
}

