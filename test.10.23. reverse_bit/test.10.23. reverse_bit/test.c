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

unsigned int reverse_bit(unsigned int value)
{
	int arr[32] = {0};
	int i = 0;
    int n = value;
	unsigned int ret = 0;
	for(i=0; i<32; i++)
	{
		arr[i] = (n&1);
		n = n>>1;
		//printf("%d ",arr[i]);
	}
    
	for(i=0; i<32; i++)
	{
		if(1 == arr[i])
		{
			ret = ret + (unsigned int)pow(2.0,(31-i));
		}
	}

	return ret;
}

int main()
{
	unsigned int n = 0;
	scanf("%d",&n);
	printf("%u\n",reverse_bit(n));
	return 0;
}