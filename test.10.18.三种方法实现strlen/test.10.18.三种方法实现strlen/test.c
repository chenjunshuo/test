#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int my_strlen1(char arr[])//�ǵݹ鷽�������鳤��
{
	int count = 0;
	int i = 0;
	while('\0' != arr[i])
	{
		count++;
		i++;
	}
	return count;
}

int my_strlen2(char arr[])//�ݹ鷨�����鳤��
{
	char *p = &arr[0];
	if('\0' == *p)
		return 0;
	else
		return 1+my_strlen2(p+1);
}

int my_strlen3(char *s)//��ָ�������鳤��
{
	char *p = s;
	while('\0' != *p)
		p++;
	return p-s;
}

int main()
{
	char arr[] = "abcdefg";
	printf("%d\n",strlen(arr));        //7
	printf("%d\n",my_strlen1(arr));    //7
	printf("%d\n",my_strlen2(arr));    //7
	printf("%d\n",my_strlen3(arr));    //7

	return 0;
}