#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int jump(int n)//�õݹ�ķ���������
{
	if(1 == n)
		return 1;
	else if(2 == n)
		return 2;
	else
		return jump(n-1)+jump(n-2);
}

int main()
{
	int n = 0;
	printf("����̨������");
	scanf("%d",&n);
	printf("��%d������\n",jump(n));


	return 0;
}