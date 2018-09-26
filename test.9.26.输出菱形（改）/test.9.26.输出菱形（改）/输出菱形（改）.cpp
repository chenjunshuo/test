#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//    *
//   ***
//  *****
// *******
//*********
//h=5
int main()
{
	int h = 0;
	printf("输入菱形的上三角行数：");
	scanf("%d",&h);
	//输出上三角
	int i = 0;
	for(i=1; i<=h; i++)//打印上半部分第i行
	{
		int n = 0;
		for(n=1; n<=h-i; n++)//打印‘ ’
		{
			printf(" ");
		}
		for(n=1; n<=2*i-1; n++)//打印‘*’
		{
			printf("*");
		}
		printf("\n");
	}
	//输出下三角
// ******* 1 7 8-1
//  *****  2 5 6-1
//   ***   3 3 4-1
//    *    4 1 2-1
//h=5
	for(i=1; i<h; i++)//打印下半部分第i行
	{
		int n = 0;
		for(n=1; n<=i; n++)//打印‘ ’
		{
			printf(" ");
		}
		for(n=1; n<=2*(h-i)-1; n++)// 打印‘*’
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}