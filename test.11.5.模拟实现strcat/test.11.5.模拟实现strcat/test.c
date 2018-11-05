//4.模拟实现strcat
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include <string.h>

char *my_strcat(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while(*dest)
	{
		dest++;
	}
	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return ret;
}

int main()
{
	char a[30] = "tomorrow";
	//附加字符串 char *strcat( char *strDestination, const char *strSource );
	strcat(a," will be");
	my_strcat(a," better!");
	printf("%s\n",a);
	return 0;
}