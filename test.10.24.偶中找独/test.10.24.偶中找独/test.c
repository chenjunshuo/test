//3.���ʵ�֣�һ��������ֻ��һ�����ֳ�����һ�Ρ�
//�����������ֶ��ǳɶԳ��ֵġ� 
//���ҳ�������֡���ʹ��λ���㣩
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int find(int arr[],int sz)
{
	int i = 0;
	int n = arr[0];
	for(i=1; i<sz; i++)
	{
		n = n ^ arr[i];
	}
	return n;
}

int main()
{
	int arr[] = {1,2,3,4,5,2,3,4,6,1,5};
	int sz =sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nֻ����һ�ε��ǣ�%d\n",find(arr,sz));

	return 0;
}