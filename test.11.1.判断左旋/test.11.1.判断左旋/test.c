//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 
//AABCD左旋一个字符得到ABCDA 
//AABCD左旋两个字符得到BCDAA 
//AABCD右旋一个字符得到DAABC 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int Is_liftShift(char *p1, char *p2)
{
	int sz = strlen(p1);
	int j = 0;
	while(sz)
	{
		char i = *p1;

		for (j = 0; j < sz - 1; j++)
		{
			*(p1+j) = *(p1+j+1);
		}

		*(p1+sz-1)= i;

		sz--;
		if(0 == strcmp(p1,p2))
			return 1;
	}
	return 0;

}

int main()
{
	//给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0.
	char s1[] = "aabcd";
	char s2[] = "bcdaa";
	//char s1[] = "abcd";
	//char s2[] = "ACBD";
	int ret = Is_liftShift(s1,s2);
	if(1 == ret)
		printf("s2是s1旋转后的字符串！\n");
	else
		printf("s2不是s1旋转后的字符串！\n");
	return 0;
}