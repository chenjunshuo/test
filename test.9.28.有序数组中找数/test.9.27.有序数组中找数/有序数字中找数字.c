#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int binary_search(int arr[], int key, int left, int right)
{
	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid]>key)
		{
			right = mid-1;
		}
		else if(arr[mid]<key)
		{
			left = mid+1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int key = 0;
	int left = 0;
	int ret = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	printf("输入您要查找的数字：");
	scanf("%d",&key);
    ret = binary_search(arr,key,left,right);
	if(ret == -1)
		printf("找不到\n");
	else
		printf("找到了，下标为%d\n",ret);
	return 0;
}



//
//int binary_search(int arr[], int key, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>key)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<key)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	int ret= binary_search(arr, key, left, right);
//	if(ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了:%d\n", ret);
//	return 0;
//}