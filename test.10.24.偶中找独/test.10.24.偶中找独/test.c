//3.编程实现：一组数据中只有一个数字出现了一次。
//其他所有数字都是成对出现的。 
//请找出这个数字。（使用位运算）
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int find(int arr[],int sz)
{
	int i = 0;
	int n = arr[0];
	for(i=1; i<sz; i++)
	{
		n = n ^ arr[i];
	}
	return n;
}

int main()
{
	int arr[] = {1,2,3,4,5,2,3,4,6,1,5};
	int sz =sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n只出现一次的是：%d\n",find(arr,sz));

	return 0;
}