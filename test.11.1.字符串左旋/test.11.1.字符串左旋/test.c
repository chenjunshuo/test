//1.ʵ��һ�����������������ַ����е�k���ַ���
//abcd����һ���ַ��õ�bcda
//abcd���������ַ��õ�cdab
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