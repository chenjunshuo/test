//1.��������ʹ����ȫ����λ��ż��ǰ�档 
//��Ŀ�� 
//����һ���������飬ʵ��һ�������� 
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣� 
//����ż��λ������ĺ�벿�֡� 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void rand(int *p,int sz)
{
	int i =0;
	int j = 0;
	for(i=0; i<sz; i++)
	{
		if((*(p+i) & 1 )== 0)//�ҵ���һ��ż��
		{
			for(j=i+1; j<sz; j++)
			{
				if((*(p+j) & 1) == 1)//�Ҷ�ż������ĵ�һ������
				{
					int tmp = *(p+i);//��������λ��
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