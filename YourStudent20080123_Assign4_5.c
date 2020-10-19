#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int time=0;
	int counter =0;
	for (time =0;time <21*7;time++)
	{
		if(time%5==0 && time<20*5)
		{
			counter ++;
			continue;
		}
		if(time%6==0 && time<20*6)
		{
			counter ++;
			continue;
		}
		if(time%7==0)
		{
			counter ++;
		}
	}
	printf("%d",counter);

	return 0;
}