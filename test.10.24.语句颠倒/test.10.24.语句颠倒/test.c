//4. ��һ���ַ����������Ϊ:"student a am i", 
//���㽫��������ݸ�Ϊ"i am a student". 
//Ҫ�� 
//����ʹ�ÿ⺯���� 
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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