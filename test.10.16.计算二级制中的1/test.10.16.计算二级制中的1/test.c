//1.写一个函数返回参数二进制中 1 的个数 
//比如： 15 0000 1111 4 个 1 
//程序原型： 
//int count_one_bits(unsigned int value) 
//{ 
// // 返回 1的位数 
//} 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int count_one_bits(unsigned int valu)
{
	int count = 0;
	while(valu)
	{
		if(valu&1)
			count++;
		valu = valu>>1;
	}
	return count;
}

int main()
{
	unsigned int i = 0;
	scanf("%u",&i);
	printf("%d\n",count_one_bits(i));

	return 0;
}