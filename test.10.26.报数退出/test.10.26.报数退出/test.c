//有n人围成一圈，顺序排号。
//从第1个人开始报数（从1到3报数），凡报到3的人退出圈子
//问最后留下的是原来的第几号的那位
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Count_off(int n)
{
	int arr[20] = {0};
	int i = 0;
	int num = 0;
	int count = 1;
	int out = 0;
	while(out<n)
	{
		for(i=0; i<n; i++)
		{
			if(0 == arr[i])
			{
				if(3 == count)
				{
					arr[i] = 1;
					count = 1;
					out++;
					num = i+1;
				}
			    else
				    count++;
			}
		}
	}
	return num;
}

int main()
{
	int n = 0;
	int num = 0;
	printf("输入人数：");
	scanf("%d",&n);
	num = Count_off(n);
	printf("最后留下的是原来的第%d号\n",num);
	return 0;
}