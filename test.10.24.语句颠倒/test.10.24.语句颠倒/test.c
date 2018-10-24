//4. 有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student". 
//要求： 
//不能使用库函数。 
//只能开辟有限个空间（空间个数和字符串的长度无关）。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void reverse(char *left, char *right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void change(char *arr)
{
	reverse(arr, arr+strlen(arr) - 1);

	while (*arr)
    {
        char *str = arr;
        while (*arr!='\0' && *arr != ' ')
		{
            arr++;
		}
        reverse(str, arr - 1);
        if (*arr == ' ')
            arr++;
    }

}

int main()
{
	char arr[] = "student a am i";
	change(arr);
	printf("%s\n",arr);

	return 0;
}