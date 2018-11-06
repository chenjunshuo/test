// µœ÷strcmp
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int my_strcmp(const char *str1, const char *str2)
{
	while(*str2 && *str1)
	{
		if(*str1 == *str2)
		{
			str1++;
		    str2++;
		}
		else
			break;
	}
	if((unsigned char)*str1 > (unsigned char)*str2)
		return 1;
	else if((unsigned char)*str1 < (unsigned char)*str2)
		return -1;
	return 0;
}

int main()
{
	char str1[10] = "abcd";
	char str2[10] = "efgh";
	printf("%d\n",my_strcmp(str1, "abcde"));
	printf("%d\n",my_strcmp(str2, str1));
	printf("%d\n",my_strcmp(str1, "abcd"));
	return 0;
}