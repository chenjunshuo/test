#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()//ͨ�����ַ�ʽ����ab��ֵ
{
	void change(int x,int y);
	void exchange(int *q1,int *q2);
	int a = 10;
	int b = 20;
	int *p1 = &a;
	int *p2 = &b;
	printf("a=%d,b=%d\n",a,b);
	change(a,b);
	printf("a=%d,b=%d\n",a,b);
	exchange(p1,p2);
	printf("a=%d,b=%d\n",a,b);

	return 0;
}
//����һ��ֱ�ӵ��ú�������������ֵ������ab��ֻû�н�����
//��Ϊab��ֵ����xy�Ժ󽻻�����xy��ֵ��
void change(int x,int y)
{
	int temp = x;
	x = y;
	y = temp;
}
//����������ָ�룬��ʱ������˺����е���ab�����ĵ�ַ��q1��q2
//��Ӧ������ab�ĵ�ַ��������ַ����Ӧ��ֵ�㽻����ab��ֵ
void exchange(int *q1,int *q2)
{
	int temp = *q1;
	*q1 = *q2;
	*q2 = temp;
}