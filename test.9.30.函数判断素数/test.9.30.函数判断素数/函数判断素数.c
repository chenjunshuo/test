#define _CRT_SECURE_NO_WARNINGS 1
//5.ʵ��һ���������ж�һ�����ǲ���������
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