#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int jump(int n)//用递归的方法算跳法
{
	if(1 == n)
		return 1;
	else if(2 == n)
		return 2;
	else
		return jump(n-1)+jump(n-2);
}

int main()
{
	int n = 0;
	printf("输入台阶数：");
	scanf("%d",&n);
	printf("有%d种跳法\n",jump(n));


	return 0;
}