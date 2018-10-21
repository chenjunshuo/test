#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.写一个函数返回参数二进制中 1 的个数 
//比如： 15 0000 1111 4 个 1 
//程序原型： 
//int count_one_bits(unsigned int value) 
//{ 
// // 返回 1的位数 
//} 
//int count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int count = 0;
//	for(i=0; i<32; i++)
//	{
//		if(value&1)
//			count ++;
//		value >>= 1;
//	}
//	return count;
//
//}
//
//int count_one_bits2(unsigned int value)
//{
//	int count = 0;
//	while(value)
//	{
//		value = value&(value-1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%u",&i);
//	printf("%d\n",count_one_bits(i));
//	printf("%d\n",count_one_bits2(i));
//
//	return 0;
//}

//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列
//void print (int n)
//{
//	int i = 0;
//	for (i=31; i>0; i-=2)//输出偶数位的二进制
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	for (i=30; i>=0; i-=2)
//	{
//		printf("%d ",(n>>i)&1);//输出奇数位的二进制
//	}
//	printf("\n");
//}
//
//int main()
//{
//    int n = 0;
//	scanf("%d",&n);
//	print(n);
//	return 0;
//}

//3. 输出一个整数的每一位。
//void print(int n)
//{
//	if(n > 9)
//		print(n/10);
//	printf("%d ",n%10);
//	//if(n > 0)
//	//{
//	//	print(n/10);
//	//	printf("%d ",n%10);
//	//}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print(n);
//	printf("\n");
//	return 0;
//}

//4.编程实现： 
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//输入例子: 1999 2299 
//输出例子:7

int count_1(int n,int m)//比较n与m二进制的每一位，相异计数加一；
{
	int count = 0;
	int i = 0;
	for(i=0; i<31; i++)
	{
		if( ( (m>>i) & 1) != ( (n>>i) & 1) )
			count++;
	}
	return count;
}

int count_2(int n,int m)//将n与m进行异或后赋给i，计算i中的1的个数；
{
	int i = n^m;
	int count = 0;
    while(i)
	{
		if(i&1)
			count++;
		i = i >> 1;
	}
	return count;
}

int main()
{
	int n = 0;
	int m = 0;
	printf("输入两个数：");
	scanf("%d%d",&n,&m);
	printf("%d\n",count_1(n,m));
	printf("%d\n",count_2(n,m));

	return 0;
}

