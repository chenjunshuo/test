#define _CRT_SECURE_NO_WARNINGS 1
//2. 使用函数实现两个数的交换。 
#include<stdio.h>

exchange(int* p1,int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	int* p1 = &a;
	int* p2 = &b;
	printf("a = %d,b = %d\n",a,b);
	exchange(p1,p2);
    printf("a = %d,b = %d\n",a,b);
	return 0 ;
}