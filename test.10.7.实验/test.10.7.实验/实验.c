#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//char a = -1;
	//signed b = -1;
	//unsigned c = -1;
	//printf("a=%d,b=%d,c=%d\n",a,b,c);

	//char d = -128;
	//printf("d=%u\n",d);

	//char d2 = 128;
	//printf("d2=%u\n",d2);

	//int i = -20;
	//unsigned int j = 10;
	//printf("%d\n",i+j);

	//unsigned int i = 0;
	//for(i=9; i>=0; i--)
	//{
	//    printf("%u\n",i);
	//}

	char a[1000];
	int i;
	for(i=0; i<1000; i++)
	{
		a[i] = -1-i;
	}
	printf("%d\n",strlen(a));

	return 0;
}