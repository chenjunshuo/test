//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ�� 
//��20Ԫ�����Զ�����ˮ�� 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int num_soda(int n)
{
	int sum = n;
	int y = 0;
	while(n)
	{
		if(n % 2 == 1)
		{
			y += 1;
		}
		sum += (n /= 2);
	}
	return sum+(y/2);
}

int main()
{
	int n = 15;
	printf("��%dԪ�����Ժ�%dƿ��ˮ\n",n,num_soda(n));
	return 0;
}