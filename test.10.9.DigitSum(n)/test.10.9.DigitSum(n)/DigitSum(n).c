//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19 
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