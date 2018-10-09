#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int power(int n,int k)
{
	if(1 == k)
		return n;
	else
	{
		return n*power(n,k-1);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	printf("输入一个数字和你想得到次方数：");
	scanf("%d%d",&n,&k);
	printf("%d\n",power(n,k));

	return 0;
}