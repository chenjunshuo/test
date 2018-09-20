#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void SC (int arr[] , int n)
{
	int i = 0;

	for (i=0;i<n;i++)
		printf("%d ",arr[i]);

	printf("}\n");

}

int main()
{
	int arr1[5] = {1,3,5,7,9};
	int arr2[5] = {2,4,6,8,10};
	int arr3[5] = {0};

	printf("arr1={");
	SC (arr1 , 5);
	printf("arr2={");
	SC (arr2 , 5);

	int i=0;

	for (i=0;i<5;i++)
	{
		arr3[i]=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=arr3[i];
	}

	printf("交换内容后为:\narr1={");
	SC (arr1 , 5);
	printf("arr2={");
	SC (arr2 , 5);

	return 0;
}