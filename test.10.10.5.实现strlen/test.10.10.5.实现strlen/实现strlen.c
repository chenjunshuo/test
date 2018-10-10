//5.递归和非递归分别实现strlen 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int strlen_(char arr[])
{
	int i = 0;
	int count =0;
	while(arr[i])
	{
		i++;
		count++;
	}
	return count;
}


int strlen_recursive(const char*str)
{
	if(*str == '\0')
	{
		return 0;
	}
	else return 1 + strlen_recursive(str+1);
}

int main()
{
	char arr[] = "abcdefg";
	printf("%s\n",arr);
	printf("%d\n",strlen_(arr));
	printf("%d\n",strlen_recursive(arr));

	return 0;
}