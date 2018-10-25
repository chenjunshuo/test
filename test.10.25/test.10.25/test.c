#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//	int mid = 0;
//	int key = 0;
//	scanf("%d",&key);
//	while(left<=right)
//	{
//		mid =(right+left)/2;
//		if(arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if(left>right)
//		printf("没找到\n");
//	else
//		printf("找到了，下标为：%d\n",mid);
//	return 0;
//}
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	int j = 0;
	for(i=0; i<sz-1; i++)
	{
		for(j=0; j<sz-1-i; j++)
		{
			if(arr[j]<arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main()
{
	int i = 0;
	int arr[] = {1,5,6,2,7,3,4,9,8};
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	bubble_sort(arr,sz);

	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}