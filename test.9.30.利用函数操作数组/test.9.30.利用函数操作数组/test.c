#define _CRT_SECURE_NO_WARNINGS 1 
//����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢 
//ʵ��empty����������顢 
//ʵ��reverse���������������Ԫ�ص����á� 
//Ҫ���Լ���ƺ����Ĳ���������ֵ
#include<stdio.h>

void output(int*arr,int sz)//�������Ԫ��
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void init(int* arr,int sz)//��ʼ������
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		arr[i] = 0;
	}
}

void empty(int* arr,int sz)//�������
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int* arr,int sz)//�������Ԫ�ص�����
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

	output(arr,sz);//��ӡԭ������ʼ�������ٴ�ӡ
	init(arr,sz);
	output(arr,sz);

	output(arr1,sz);//��ӡԭ�������������ٴ�ӡ
	empty(arr1,sz);
	output(arr1,sz);
 
	output(arr2,sz);//��ӡԭ�������������Ԫ���ٴ�ӡ
    reverse(arr2,sz);
	output(arr2,sz);

	return 0 ;
}