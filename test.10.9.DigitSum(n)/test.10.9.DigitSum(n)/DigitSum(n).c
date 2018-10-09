//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int DigitSum(int n)
{
	int sum = 0;

	if(n>9)
	{
		sum = sum + n%10;
		sum = sum + DigitSum(n/10);
	}
	else
		return n%10;

	return sum;
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	printf("%d\n",DigitSum(n));
	return 0;
}