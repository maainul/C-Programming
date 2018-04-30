#include <stdio.h>
int main()
{
	char country[15]="United Kingdom";
	printf("\n\n");
	printf("123456789\n");
	printf("--------------\n");
	printf("%s\n",country);
	printf("%15s\n",country);
	printf("%15.6s\n",country);
	printf("%-15.6s\n",country);
		printf("%.3s\n",country);
	return 0;
}
