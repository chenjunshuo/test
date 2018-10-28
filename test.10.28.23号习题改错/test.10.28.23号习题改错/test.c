//1.编写函数：unsigned int reverse_bit(unsigned int value); 
//这个函数的返回值value的二进制位模式从左到右翻转后的值。 
//
//如： 
//在32位机器上25这个值包含下列各位： 
//00000000000000000000000000011001 
//翻转后：（2550136832） 
//10011000000000000000000000000000 
//程序结果返回： 
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
//		//sum左移，将当前位的值保存到第二位
//		sum <<= 1;
//		//当前位的值与sum或运算
//		//sum最后一位保存当前位的值
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


//2.不使用（a+b）/2这种方式，求两个数的平均值
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
	printf("m与n的平均值为：%d\n",Mean1(m,n));
	printf("m与n的平均值为：%d\n",Mean2(m,n));
	printf("m与n的平均值为：%d\n",Mean3(m,n));
	printf("m与n的平均值为：%d\n",Mean4(m,n));

	return 0;
}