#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void output(int arr[],int i)
{
	int n = 0;
	for(n=0; n<i; n++)
	{
		printf("%d,",arr[n]);
	}
	printf("\n");
}

void Selection_sort(int arr[],int n)//—°‘Ò≈≈–Ú∑®
{	
	int i = 0;
	for(i=0; i<n; i++)
	{
		int j = 0;
		for(j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] =tmp;
			}
		}
	}
}

void Bubble_sort(int arr[],int n)//√∞≈›≈≈–Ú
{
	int i = 0;
	int j = 0;
	for(j=0; j<n-1; j++)
	{
		for(i=0; i<n-1; i++)
		{
			if(arr[i+1]<arr[i])
			{
				int tmp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = tmp;
			}

		}
	}

}

int main()
{
	int arr[10] = {9,5,4,6,8,1,7,3,0,2};
	int arr2[10] = {9,5,4,6,8,1,7,3,0,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);

	output(arr,size);
	Selection_sort(arr,size);
	output(arr,size);

	output(arr2,size2);
	Bubble_sort(arr2,size2);
	output(arr2,size2);

	return 0;
}