//6.递归和非递归分别实现求n的阶乘 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int factorial_recursive(int n)//递归实现求n的阶乘 
{
	if(n<=1)
		return 1;
	else
		return n*factorial_recursive(n-1);
}

int factorial(int n)//非递归实现求n的阶乘 
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