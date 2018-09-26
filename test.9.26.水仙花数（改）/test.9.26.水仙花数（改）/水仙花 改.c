#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	for(i=0; i<=999999; i++)
	{
		int num = i;
		int sum = 0;
		int tmp = 0;
		//1.求i的位数ws
		int ws = 1;
		while(num/10)
		{
			ws++;
			num = num/10;
		}
		//2.求各位数的ws次方之和sum
		num = i;
		while(num)
		{
			sum = pow(num%10,ws) + sum;
			num = num/10;
		}
		//3.判断i是不是水仙花数
		if(sum == i)
		{
			printf("%d ",i);
		}

	}
	return 0;
}


//int main()
//{
//	int i = 0;
//	for(i=0; i<=999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		//1234
//		while(tmp/10)
//		{
//			count++;
//			tmp = tmp/10;
//		}
//		//2. 计算每一位的次方和
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp = tmp/10;
//		}
//		//3. 判断
//		if(sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}