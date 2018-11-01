//1.实现一个函数，可以左旋字符串中的k个字符。
//abcd左旋一个字符得到bcda
//abcd左旋两个字符得到cdab
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
void left_shift(char *p, int sz, int n)
{
	while (n)
	{
		char i = *p;
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			*(p + j) = *(p + j + 1);
		}
		*(p + sz - 1) = i;
		n--;
	}
}

int main()
{
	char arr[] = "abcdef";
	int sz = strlen(arr);
	int n = 2;
	left_shift(arr, sz, n);
	printf("%s\n", arr);
	system("Pause");
	return 0;
}