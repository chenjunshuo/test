#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Fb_number_recursion(int n)//递归方法
{
	if(n<=2)
		return 1;
	else
		return Fb_number_recursion(n-1)+Fb_number_recursion(n-2);
}

int Fb_number(int n)//非递归方法
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for(i=3; i<=n; i++)
	{
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
	int n = 0;
	printf("输入想得到第几个斐波那契数：");
	scanf("%d",&n);
	printf("%d\n",Fb_number_recursion(n));
	printf("%d\n",Fb_number(n));

	return 0;
}