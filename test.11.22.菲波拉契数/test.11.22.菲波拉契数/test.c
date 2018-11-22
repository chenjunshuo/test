#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 1 1 2 3 5 8
// a b ret
//   a b ret
int FB_num2(int n)
{
	int a = 1;
	int b = 1;
	int ret = 1;
	int i = 0;
	for(i=3; i<=n; i++)
	{
		ret = a + b;
		a = b;
		b = ret;
	}
	return ret;
}

//1  1  2  3  5  8  13
//FB(5)=FB(4)       + FB(3)
//     =FB(3)+FB(2) + FB(2)+FB(1)
int FB_num(int n)
{
	if(n<=2)
		return 1;
	else
		return FB_num(n-1) + FB_num(n-2);
}

int main()
{
	int i = 1;
	while(i)
	{
		printf("想得到第几个菲波拉契数：");
		scanf("%d",&i);
		if(i)
			printf("第%d个斐波拉契数是%d\n",i,FB_num(i));
	}
	
	return 0;
}
