#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���
void Mul_tables(int num)
{
	int i = 0;
	int j = 0;
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2d*%-2d=%-4d ",i,j,i*j);
		}
		printf("\n");
	}
}

int main()
{
    int num = 0;

	printf("���������ӡ���˼��Ŀھ���");
	scanf("%d",&num);
	Mul_tables(num);

	return 0 ;
}