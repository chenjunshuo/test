//递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void output_recursive(int num)
{
	if(num>9)
	    output_recursive(num/10);
	printf("%d ",num%10);
}

void output(int num)
{
	int i = 0;
	int n = num;
	while(n)
	{
		n = n/10;
		i++;
	}
	for(; i>0 ; i--)
	{
		printf("%d ",num/(int)pow(10.0,i-1));
		num = num%(int)pow(10.0,i-1);
	}


}


int main()
{
	int num = 0;
	scanf("%d",&num);
	output_recursive(num);
	printf("\n");
	output(num);
	printf("\n");
	return 0;
}