/*
    Function with  no arguments return value
*/

#include <stdio.h>
int sqrt (void);//function declearation
main()
{
	int ans;
    ans=sqrt();
	printf("addition of two number=%d",ans);
}
int sqrt (void)//actual function//function defination
{
	int s,n;
	printf("Enter a number:");
	scanf("%d",&n);
	s=n*n;
return (s);
}

