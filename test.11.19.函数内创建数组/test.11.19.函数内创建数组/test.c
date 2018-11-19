#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void test(char *arr)
{
	//char ret[1024] = "abcd";
	char ret[] = "abcd";
	strcpy(arr,ret);
	//字符串拷贝函数中，源字符串的长度可以不给定；
	//但是目标字符串的长度必须给定，以保证目标字符串足以容纳源字符串！
}

int main()
{
	char arr2[] = "asd";
	char arr[1024] = {0};
	int i = 0;
	test(arr);
	i = strcmp(arr, arr2);
	printf("%d\n",i);
	//strcpy(arr, "abcd");
	printf("%s\n",arr);

	/*strcat(arr2, arr);*///字符串拼接函数与拷贝类似，目标字符串长度必须给定，且足够大
	                  //以保证目标字符串足以接受源字符串！

	return 0;
}