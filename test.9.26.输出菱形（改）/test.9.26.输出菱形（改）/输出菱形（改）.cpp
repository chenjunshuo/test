#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//    *
//   ***
//  *****
// *******
//*********
//h=5
int main()
{
	int h = 0;
	printf("�������ε�������������");
	scanf("%d",&h);
	//���������
	int i = 0;
	for(i=1; i<=h; i++)//��ӡ�ϰ벿�ֵ�i��
	{
		int n = 0;
		for(n=1; n<=h-i; n++)//��ӡ�� ��
		{
			printf(" ");
		}
		for(n=1; n<=2*i-1; n++)//��ӡ��*��
		{
			printf("*");
		}
		printf("\n");
	}
	//���������
// ******* 1 7 8-1
//  *****  2 5 6-1
//   ***   3 3 4-1
//    *    4 1 2-1
//h=5
	for(i=1; i<h; i++)//��ӡ�°벿�ֵ�i��
	{
		int n = 0;
		for(n=1; n<=i; n++)//��ӡ�� ��
		{
			printf(" ");
		}
		for(n=1; n<=2*(h-i)-1; n++)// ��ӡ��*��
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}