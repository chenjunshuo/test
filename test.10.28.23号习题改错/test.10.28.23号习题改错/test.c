//1.��д������unsigned int reverse_bit(unsigned int value); 
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ�� 
//
//�磺 
//��32λ������25���ֵ�������и�λ�� 
//00000000000000000000000000011001 
//��ת�󣺣�2550136832�� 
//10011000000000000000000000000000 
//���������أ� 
//2550136832
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[32] = {0};
//	int i = 0;
//    int n = value;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		sum += ((n >> i) & 1) * (unsigned int)pow(2 , (31 - i));
//	}
//
//	return sum;
//}

//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[32] = {0};
//	int i = 0;
//    int n = value;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		//sum���ƣ�����ǰλ��ֵ���浽�ڶ�λ
//		sum <<= 1;
//		//��ǰλ��ֵ��sum������
//		//sum���һλ���浱ǰλ��ֵ
//		sum |= (n >> i) & 1;
//	}
//
//	return sum;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d",&n);
//	printf("%u\n",reverse_bit(n));
//	return 0;
//}


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
		return n+(m-n)/2;//n + ((m-n) >> 1)
	else
		return m+(n-m)/2;//m + ((n-m) >> 1)
}

int Mean3(int m, int n)
{
	//return (m>>=1)+(n>>=1);
	return (m+n)>>1;
}

int Mean4(int m, int n)
{
	return (m & n) + ((m^n) >> 1);
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