//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int factorial_recursive(int n)//�ݹ�ʵ����n�Ľ׳� 
{
	if(n<=1)
		return 1;
	else
		return n*factorial_recursive(n-1);
}

int factorial(int n)//�ǵݹ�ʵ����n�Ľ׳� 
{
	int i = 1;
	int pt = 1;
	for(i=1; i<=n ;i++)
	{
		pt = pt*i;
	}
	return pt;
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	printf("%d!=%d\n",n,factorial_recursive(n));
	printf("%d!=%d\n",n,factorial(n));

	return 0;
}