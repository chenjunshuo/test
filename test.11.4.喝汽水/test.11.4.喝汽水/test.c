//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
//给20元，可以多少汽水。 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int num_soda(int n)
{
	int sum = n;
	int y = 0;
	while(n)
	{
		if(n % 2 == 1)
		{
			y += 1;
		}
		sum += (n /= 2);
	}
	return sum+(y/2);
}

int main()
{
	int n = 15;
	printf("给%d元，可以喝%d瓶汽水\n",n,num_soda(n));
	return 0;
}