#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int num = 0;

	for(i=1;i<=100;i++)
	{
		if(i/10==9)
			num += 1;
		else if(i%10==9)
			num += 1;
	}

	printf("1到 100 的所有整数中出现过%d次数字9\n",num);

	return 0;
}