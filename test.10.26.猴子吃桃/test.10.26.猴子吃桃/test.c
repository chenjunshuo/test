//���ӳ������⡣���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ����һ��
//�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ����
//�Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ���� 
//����N���������ٳ�ʱ����ֻʣ��һ�������ˡ�
//���һ�칲ժ�������ӡ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1  (1+1)*2
int num_peach1(int day)//�ݹ�
{
	if(1 == day)
		return 1;
	else
		return (num_peach1(day-1)+1)*2;
}

int num_peach2(int day)//�ǵݹ�
{
	int i = 0;
	int num = 1;
	for(i=2; i<=day; i++)
	{
		num = (num + 1) * 2;
	}
	return num;
}

int main()
{
	int day = 0;
	printf("����������");
	scanf("%d",&day);
    printf("��һ����%d������\n",num_peach1(day));
	printf("��һ����%d������\n",num_peach2(day));

	return 0;
}