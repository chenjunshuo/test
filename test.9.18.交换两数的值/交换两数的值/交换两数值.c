#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a=3;
	int b=6;
	int c=0;
	printf("a=%d b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("a=%d b=%d\n",a,b);

	return 0;
}