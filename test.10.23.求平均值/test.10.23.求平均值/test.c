//2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Mean1(int m, int n)
{
	return (m+n)/2;
}

int Mean2(int m, int n)
{
	if(m>n)
		return n+(m-n)/2;
	else
		return m+(n-m)/2;
}

int Mean3(int m, int n)
{
	//return (m>>=1)+(n>>=1);
	return (m+n)>>1;
}

int Mean4(int m, int n)
{
	return (m&n)+((m^n)>>1);
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d",&m,&n);
	printf("m��n��ƽ��ֵΪ��%d\n",Mean1(m,n));
	printf("m��n��ƽ��ֵΪ��%d\n",Mean2(m,n));
	printf("m��n��ƽ��ֵΪ��%d\n",Mean3(m,n));
	printf("m��n��ƽ��ֵΪ��%d\n",Mean4(m,n));

	return 0;
}