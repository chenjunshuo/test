#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//1.ʵ��һ�����������������ַ����е�k���ַ���
//abcd����һ���ַ��õ�bcda
//abcd���������ַ��õ�cdab

//void left_rotate(char* str, int k)
//{
//	int len = strlen(str);
//	char temp = 0;
//	char* cur = str;
//	k %= len;
//	while (k--)
//	{
//		//����һ��
//		temp = *str;
//		cur = str;
//		while(*(cur+1) != '\0')
//		{
//			*cur = *(cur + 1);
//			cur++;
//		}
//		//�ѵ�һ��λ�õ����ݷŵ����һ��λ��
//		*cur = temp;
//	}
//}

//������ת��   abcde��k=3��
//��һ�� ����תǰk��      cbade
//�ڶ��� ����תʣ�µ�     cbaed
//������ ��������ת       deabc
//�������ֲ� �����Ⱦֲ������� ������ʵ��

//�ַ�����ת����
//void reverse(char* start, char* end)
//{
//	while(start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//void left_rotate(char* str, int k)
//{
//	int len = strlen(str);
//	k %= len;
//	//��һ�� ����תǰk��
//	reverse(str, str+k-1); 
//	//�ڶ��� ����תʣ�µ�
//	reverse(str+k, str+len-1);
//	//������ ��������ת
//	reverse(str, str+len-1);
//}
//
//int main()
//{
//	char arr[1024] ="abcdef";
//	int n = 8;
//	left_rotate(arr,n);
//	printf("%s\n", arr);
//	return 0;
//}

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//���磺����s1 =AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0. 
//AABCD����һ���ַ��õ�ABCDA 
//AABCD���������ַ��õ�BCDAA 
//AABCD����һ���ַ��õ�DAABC 
//2.1
void left_rotate(char* str, int k)
{
	int len = strlen(str);
	char temp = 0;
	char* cur = str;
	k %= len;
	while (k--)
	{
		//����һ��
		temp = *str;
		cur = str;
		while(*(cur+1) != '\0')
		{
			*cur = *(cur + 1);
			cur++;
		}
		//�ѵ�һ��λ�õ����ݷŵ����һ��λ��
		*cur = temp;
	}
}
int Is_rotate(char* dest, char* src)
{
	int k = strlen(dest)-1;
	//��������ַ������Ȳ�ͬ�򷵻�0
	if(strlen(dest) != strlen(src))
	{
		return 0;
	}
	//��������ַ�����ͬ�򷵻�1
	if(!strcmp(dest, src))
	{
		return 1;
	}
	//ÿ����һ�ζ��Ƚ�һ�����ַ���
	while(k--)
	{
		left_rotate(src,1);
		if(!strcmp(dest, src))
		{
			return 1;
		}
	}
	return 0;
}


//2.2
//��Ŀ�괮ƴ����ͬ������֮���ж�Դ�ַ����Ƿ���Ŀ�괮���Ӵ�
//dest---> abcd       src--->bcda
//         abcdabcd
//int Is_rotate(char* dest, char* src)
//{
//	int k = strlen(dest)-1;
//	if(strlen(dest) != strlen(src))
//	{
//		return 0;
//	}
//	if(!strcmp(dest, src))
//	{
//		return 1;
//	}
//	strncat(dest, dest, strlen(dest));
//	if(strstr(dest, src) != NULL)
//	{
//		return 1;
//	}
//	return 0;
//}
int main()
{
	//����s1 =AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0.
	char s1[1024] = {0};
	char s2[1024] = {0};
	int ret = 0;
	printf("����s1�ַ���\n");
	gets(s1);
	printf("����s2�ַ���\n");
	gets(s2);
	ret = Is_rotate(s1,s2);
	if(1 == ret)
		printf("s2��s1��ת����ַ�����\n");
	else
		printf("s2����s1��ת����ַ�����\n");
	return 0;
}