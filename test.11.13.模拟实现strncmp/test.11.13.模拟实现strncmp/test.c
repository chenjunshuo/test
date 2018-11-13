//3. µœ÷strncmp
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int my_strncmp(const char *str1, const char *str2, size_t num)
{
	while(*str2 && *str1 && --num)
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
	printf("%d\n",my_strncmp(str1, "abcde", 3));
	printf("%d\n",my_strncmp(str1, "abcef",4));
	printf("%d\n",my_strncmp(str1, "aac", 2));
	return 0;
}