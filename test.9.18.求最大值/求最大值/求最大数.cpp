#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i=0;
	int arr[10]={0};
	printf("请输入十个整数（用空号隔开）：");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}	
	int MAX=0;
	for(i=0;i<10;i++)
	{
		MAX=MAX>arr[i]?MAX:arr[i];
	}
	printf("十个数中最大值为:%d",MAX);
	return 0;
}