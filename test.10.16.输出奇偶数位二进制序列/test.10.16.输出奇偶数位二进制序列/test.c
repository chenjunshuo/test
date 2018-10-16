//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int odd[16] = {0};
	int even[16] = {0};
	int *p_odd = &odd[15];
	int *p_even = &even[15];
	int n = 0;
	int i = 0;
	int m = 0;
	scanf("%d",&n);
	if(n<0)
	{
		even[0] = 1;
		m = -n;
	}
	else
		m = n;
	for(i=0; i<36; i++)
	{
		if(0 == i%2)
		{
			*p_odd = m&1;
			p_odd-=1;
		}
		else
		{
			*p_even = m&1;
			p_even-=1;
		}
		m = m>>1;
		if(0 == m)
			break;
	}
	printf("奇数位二进制序列:");
	for(i=0; i<16; i++)
	{
		printf("%d",odd[i]);
	}
	printf("\n偶数位二进制序列:");
	for(i=0; i<16; i++)
	{
		printf("%d",even[i]);
	}
	printf("\n");

	return 0;
}