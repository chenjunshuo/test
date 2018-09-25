#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()//通过两种方式交换ab的值
{
	void change(int x,int y);
	void exchange(int *q1,int *q2);
	int a = 10;
	int b = 20;
	int *p1 = &a;
	int *p2 = &b;
	printf("a=%d,b=%d\n",a,b);
	change(a,b);
	printf("a=%d,b=%d\n",a,b);
	exchange(p1,p2);
	printf("a=%d,b=%d\n",a,b);

	return 0;
}
//方法一：直接调用函数交换两数数值，发现ab的只没有交换，
//因为ab的值赋给xy以后交换的是xy的值！
void change(int x,int y)
{
	int temp = x;
	x = y;
	y = temp;
}
//方法二：用指针，此时，进入此函数中的是ab两数的地址，q1与q2
//对应的正是ab的地址，交换地址所对应的值便交换了ab的值
void exchange(int *q1,int *q2)
{
	int temp = *q1;
	*q1 = *q2;
	*q2 = temp;
}