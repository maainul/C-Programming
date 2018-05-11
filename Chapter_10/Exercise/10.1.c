#include <stdio.h>
struct time_struct
{
	int hour;
	int minutes;
	int second;
};
struct time_struct clock;
main()
{
	int hour,minutes,second;
	scanf("%d %d %d",&clock.hour,&clock.minutes,&clock.second);
	printf("%d: %d: %d\n",clock.hour,clock.minutes,clock.second);
	return 0;
}
