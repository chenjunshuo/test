#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//1.实现一个函数，可以左旋字符串中的k个字符。
//abcd左旋一个字符得到bcda
//abcd左旋两个字符得到cdab

//void left_rotate(char* str, int k)
//{
//	int len = strlen(str);
//	char temp = 0;
//	char* cur = str;
//	k %= len;
//	while (k--)
//	{
//		//左旋一次
//		temp = *str;
//		cur = str;
//		while(*(cur+1) != '\0')
//		{
//			*cur = *(cur + 1);
//			cur++;
//		}
//		//把第一个位置的内容放到最后一个位置
//		*cur = temp;
//	}
//}

//三次旋转法   abcde（k=3）
//第一步 ：旋转前k个      cbade
//第二次 ：旋转剩下的     cbaed
//第三次 ：整体旋转       deabc
//先整体后局部 或者先局部再整体 都可以实现

//字符串逆转函数
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
//	//第一步 ：旋转前k个
//	reverse(str, str+k-1); 
//	//第二次 ：旋转剩下的
//	reverse(str+k, str+len-1);
//	//第三次 ：整体旋转
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

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 
//AABCD左旋一个字符得到ABCDA 
//AABCD左旋两个字符得到BCDAA 
//AABCD右旋一个字符得到DAABC 
//2.1
void left_rotate(char* str, int k)
{
	int len = strlen(str);
	char temp = 0;
	char* cur = str;
	k %= len;
	while (k--)
	{
		//左旋一次
		temp = *str;
		cur = str;
		while(*(cur+1) != '\0')
		{
			*cur = *(cur + 1);
			cur++;
		}
		//把第一个位置的内容放到最后一个位置
		*cur = temp;
	}
}
int Is_rotate(char* dest, char* src)
{
	int k = strlen(dest)-1;
	//如果两个字符串长度不同则返回0
	if(strlen(dest) != strlen(src))
	{
		return 0;
	}
	//如果两个字符串相同则返回1
	if(!strcmp(dest, src))
	{
		return 1;
	}
	//每左旋一次都比较一次两字符串
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
//把目标串拼接相同的内容之后判断源字符串是否是目标串的子串
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
	//给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0.
	char s1[1024] = {0};
	char s2[1024] = {0};
	int ret = 0;
	printf("输入s1字符串\n");
	gets(s1);
	printf("输入s2字符串\n");
	gets(s2);
	ret = Is_rotate(s1,s2);
	if(1 == ret)
		printf("s2是s1旋转后的字符串！\n");
	else
		printf("s2不是s1旋转后的字符串！\n");
	return 0;
}