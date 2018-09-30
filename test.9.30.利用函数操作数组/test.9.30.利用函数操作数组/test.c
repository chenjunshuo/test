#define _CRT_SECURE_NO_WARNINGS 1 
//创建一个数组， 
//实现函数init（）初始化数组、 
//实现empty（）清空数组、 
//实现reverse（）函数完成数组元素的逆置。 
//要求：自己设计函数的参数，返回值
#include<stdio.h>

void output(int*arr,int sz)//输出函数元素
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void init(int* arr,int sz)//初始化数组
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		arr[i] = 0;
	}
}

void empty(int* arr,int sz)//清空数组
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int* arr,int sz)//完成数组元素的逆置
{
	int i = 0;
	for(i=0; i<sz/2; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[sz-1-i];
		arr[sz-1-i] = tmp;
	}
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {1,2,3,4,5};
	int sz = sizeof(arr)/sizeof(arr[0]);

	output(arr,sz);//打印原数组后初始化数组再打印
	init(arr,sz);
	output(arr,sz);

	output(arr1,sz);//打印原数组后清空数组再打印
	empty(arr1,sz);
	output(arr1,sz);
 
	output(arr2,sz);//打印原数组后逆置数组元素再打印
    reverse(arr2,sz);
	output(arr2,sz);

	return 0 ;
}