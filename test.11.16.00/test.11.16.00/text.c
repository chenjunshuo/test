#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>

int ReverseInteger(int num)
{
	int i = 0;//位数
	int j = 0;//交换j次
	int x = 1;
	int n = 0;
	int ret = 0;
	if(num < 0)
	{
		x = -1;
	}
	n = num * x;
	
	while(n)
	{
		n = n/10;
		i++;
	}
	n = num * x;
	for(j=0; j<i; j++)
	{
		ret += (n % 10) * (int)pow(10.0, i-1-j);
		n = n/10;
	}
	return ret*x;

}

int ReverseInteger2(int n)
{

	int max = 0x7fffffff; //int类型最大值
	int min = -max-1;     //int类型最小值
	long long res = 0;    //防止逆转后溢出

	while(n != 0)         //整数逆转
	{
		res = res * 10 + n % 10;
		n /= 10;
	}
    //判断是否溢出
	if(res > max || res < min)
	{
		return 0;
	}
	return (int)res;
}

int IsFeedback_str(char* p)
{
	char* left = p;
	char* right = p;
	while(*(right+1))
	{
		right++;
	}
	while(left < right)
	{
		if(*left != *right)
			return 0;
		left++;
		right--;
	}

	return 1;
}

int IsFeedback_str2(char* p)
{
	char* start = p;
	char* end = p + strlen(p) - 1;
	while(start < end)
	{
		if(*start != *end)
		{
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}


int IsFeedback_int(int num)
{
	if (num < 0)
		return 0;
	if (num == ReverseInteger2(num))
		return 1;
	return 0;
}

int IsFeedback_int2(int n)
{
	int div = 1;
	if(n < 0)
	{
		return 0;
	}
	//使n与div在同一数量级上
	while(n / div >= 10)
	{
		div *= 10;
	}
	while (n > 9)
	{
		if(n / div != n % 10)
		{
			return 0;
		}
		n %= div;
		n /= 10;
		div /= 100;
	}
	return 1;
}

int find(int a[], int n)
{
	//将0~n看做一个数组， a[]看做另一个数组
	//找到两个数组中只出现一次的元素
	int i = 0;
	int res =0;
	for(i=0; i<=n; i++)
	{
		res ^= i;
	}
	for(i=0; i<n; i++)
	{
		res ^= a[i];
	}
	return res;
}

//2的幂 ---> 二进制中只有一个1
int Is_pow(int n)
{
	int count = 0;
	int i = 0;
	for(i=0; i<32; i++)
	{
		if( ((n >> i) & 1) == 1 )
		{
			if(count)
			{
				return 0;
			}
			count++;
		}
	}
	return 1;
}

int Is_pow2(int n)
{
	int count = 0;
	int i = 0;
	for(i=0; i<32; i++)
	{
		if( ((n >> i) & 1) == 1 )
		{
			count++;
		}
	}
	return count == 1;
}

int main()
{
	//int num = 0;
	//scanf("%d",&num);
	//printf("%d\n",ReverseInteger2(num));

	//char arr[1024] = {0};
	//int ret = 0;
	//scanf("%s",arr);
 //   ret = IsFeedback_str2(arr);
	//if(ret)
	//	printf("%s是回文字符串\n",arr);
	//else
	//	printf("%s不是是回文字符串\n",arr);

	//int n = 1;
	//scanf("%d",&n);
	//printf("%d\n",IsFeedback_int2(n));

	//int arr[] = {0,1,2,3,4,6,7,8};
	//printf("%d\n",find( arr, sizeof(arr)/sizeof(arr[0]) ) );

	int i = 0;
	scanf("%d",&i);
	printf("%d\n",Is_pow(i));

	return 0;
}