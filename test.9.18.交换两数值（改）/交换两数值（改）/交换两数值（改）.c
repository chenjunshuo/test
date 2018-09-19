#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a=3;
	int b=6;
	printf("a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d\n",a,b);

	return 0;
}