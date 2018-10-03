#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int key = 0;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	printf("输入你要查找的数字：");
	scanf("%d",&key);
	while(left<=right)
	{
		int mid = left + (right-left)/2;
		if(arr[mid]<key)
		{
			left = mid + 1;
		}
		else if(arr[mid]>key)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标为%d\n",mid);
			break;
		}
	}
	if(left>right)
	{
		printf("未找到%d\n",key);
	}
	return 0;
}