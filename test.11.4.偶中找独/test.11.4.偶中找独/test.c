//1.һ��������ֻ�����������ǳ���һ�Σ� 
//�����������ֶ����������Ρ� 
//�ҳ����������֣����ʵ�֡� 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void find(int arr[], int sz, int *x, int *y)
{
	int i = 0;
	int j = 0;
	for(i=0; i<sz; i++)
	{
		for(j=0; j<sz; j++)
		{
			if((arr[i] == arr[j]) && (i != j))
				break;
		}
		if(j == sz)
		{
			*x = *y;
			*y = arr[i];
		}
	}
}

int main()
{
	int arr[] = {2,8,3,5,4,7,2,5,4,8};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int x = 0;
	int y = 0;
	int i = 0;
	find(arr, sz, &x, &y);
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("ֻ����һ�ε���%d��%d\n",x,y);

	return 0;
}