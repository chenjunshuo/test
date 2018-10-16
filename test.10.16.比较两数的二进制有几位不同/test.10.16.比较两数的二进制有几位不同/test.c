//4.编程实现： 
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//输入例子: 1999 2299 
//输出例子:7
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//void turn_binary(int *p,int n)
//{
//	if(n<0)
//	{
//		*p = 1;
//		n = -n;
//	}
//	p = p-31;
//	while(n)
//	{
//		*p = n&1;
//		n = n>>1;
//		p = p-1;
//	}
//}


int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int count = 0;
	//int n_binary[32] = {0};
	//int m_binary[32] = {0};

	printf("输入两个数：");
	scanf("%d%d",&n,&m);
	if(n*m < 0)
	{
		if(n<0)
			n = -n;
		else
			m = -m;
		count ++;
	}
	i = n^m;
	while(i)
	{
		if(i&1)
			count++;
		i = i>>1;
	}
	printf("%d\n",count);


	//turn_binary(n_binary,n);
	//turn_binary(m_binary,m);
	//printf("%d的二进制表达式：",n);
	//for(i=0; i<32; i++)
	//{
	//	printf("%d ",n_binary[i]);
	//}
	//printf("\n%d的二进制表达式：",m);
	//for(i=0; i<32; i++)
	//{
	//	printf("%d ",m_binary[i]);
	//}
	//printf("\n");

	return 0;
}