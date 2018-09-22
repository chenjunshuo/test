#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	int b = 0;
	int s = 0;
	int g = 0;

	//i= 200;
	//b=i/100;
	//s=(i/10)%10;
	//g=i-100*b-10*s;
	//printf("%d %d %d",b,s,g);

	printf("0～999之间的所有“水仙花数”：");
	for( i=100; i<=999; i++)
	{
		b = i/100;
		s =(i-(100*b))/10;
		g =(i-(100*b)-(10*s));

		if ( pow((float)b,3) + pow((float)s,3) + pow((float)g,3) == i)
			printf("%d ，",i);
	}
	return 0;
}