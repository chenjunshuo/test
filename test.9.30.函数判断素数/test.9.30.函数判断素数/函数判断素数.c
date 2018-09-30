#define _CRT_SECURE_NO_WARNINGS 1
//5.实现一个函数，判断一个数是不是素数。
#include<stdio.h>
#include<math.h>

int is_judge_prime(int n)
{
	int i = 0;
	for(i=2; i<=sqrt(n);i++)
	{
		if(0 == n%i)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0 ;
	for(i=100; i<=200; i++)
	{
		if(is_judge_prime(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}