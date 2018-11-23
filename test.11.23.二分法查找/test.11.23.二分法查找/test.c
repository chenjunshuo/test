#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Binary_search(int arr[], int sz, int num)
{
	int left = 0;
	int right = sz - 1;
	int mid = left + (right - left)/2;
	while(left <= right)
	{
		mid = left + (right - left)/2;
		if(arr[mid] > num)
		{
			right = mid - 1;
		}
		else if(arr[mid] < num)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	int arr[10] = {1,2,3,5,9,11,13,15,19,20};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int num = 0;
	int ret = 0;
	while(1)
	{
	printf("输入您想找的数字：");
	scanf("%d",&num);
	ret = Binary_search(arr, sz, num);
	if(ret >= 0)
		printf("找到%d了，下标为%d!\n",num,ret);
	else
		printf("未找到%d!\n",num);
	}

	return 0;
}