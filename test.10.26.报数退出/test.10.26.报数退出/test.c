//��n��Χ��һȦ��˳���źš�
//�ӵ�1���˿�ʼ��������1��3��������������3�����˳�Ȧ��
//��������µ���ԭ���ĵڼ��ŵ���λ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Count_off(int n)
{
	int arr[20] = {0};
	int i = 0;
	int num = 0;
	int count = 1;
	int out = 0;
	while(out<n)
	{
		for(i=0; i<n; i++)
		{
			if(0 == arr[i])
			{
				if(3 == count)
				{
					arr[i] = 1;
					count = 1;
					out++;
					num = i+1;
				}
			    else
				    count++;
			}
		}
	}
	return num;
}

int main()
{
	int n = 0;
	int num = 0;
	printf("����������");
	scanf("%d",&n);
	num = Count_off(n);
	printf("������µ���ԭ���ĵ�%d��\n",num);
	return 0;
}