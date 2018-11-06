// µœ÷strchr 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

char *my_strchr(const char* str, int c )
{
	char* ret = (char*)str;
	while(*ret)
	{
		if(*ret == c)
			return ret;
		else
			ret++;
	}
	return NULL;
}

int main()
{
	char str[1025] = "my name is lili";
	char *p = my_strchr(str, 's');
	puts(p);
	return 0;
}