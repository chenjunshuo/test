//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
//���磺����s1 =AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0. 
//AABCD����һ���ַ��õ�ABCDA 
//AABCD���������ַ��õ�BCDAA 
//AABCD����һ���ַ��õ�DAABC 
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
	//����s1 =AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0.
	char s1[] = "aabcd";
	char s2[] = "bcdaa";
	//char s1[] = "abcd";
	//char s2[] = "ACBD";
	int ret = Is_liftShift(s1,s2);
	if(1 == ret)
		printf("s2��s1��ת����ַ�����\n");
	else
		printf("s2����s1��ת����ַ�����\n");
	return 0;
}