//1.调整数组使奇数全部都位于偶数前面。 
//题目： 
//输入一个整数数组，实现一个函数， 
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分， 
//所有偶数位于数组的后半部分。 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void rand(int *p,int sz)
{
	int i =0;
	int j = 0;
	for(i=0; i<sz; i++)
	{
		if((*(p+i) & 1 )== 0)//找到第一个偶数
		{
			for(j=i+1; j<sz; j++)
			{
				if((*(p+j) & 1) == 1)//找都偶数后面的第一个奇数
				{
					int tmp = *(p+i);//交换两数位置
					*(p+i) = *(p+j);
					*(p+j) = tmp;
				}
			}
		}
	}
}

int main()
{
	int arr[] = {1,4,5,2,6,8,7,9,3,11};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	rand(arr, sz);
	for(i=0; i<sz; i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\n");
	return 0;
}