//2.Ä£ÄâÊµÏÖstrncat
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include <string.h>

char *my_strncat(char *dest, const char *src, size_t num)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while(*dest)
	{
		dest++;
	}
	while(num--)
	{
		if( ! (*dest++ = *src++))
			return ret;
	}
	*dest = '\0';

	return ret;
}

int main()
{
	char a[30] = "tomorrow";
	my_strncat(a," better!", 3);
	printf("%s\n",a);
	return 0;
}