//1.Ä£ÄâÊµÏÖstrncpy
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strncpy(char *dest, const char *src, size_t num)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while(num--)
	{
		if( ! (*dest++ = *src++))
		{
			return ret;
		}
	}
	*dest = '\0';

	return ret;
}

int main()
{
	char arr1[8] = "abcdefg";
	char arr2[1024] = {0};
	my_strncpy(arr2, arr1, 3);
	//strncpy(arr2, arr1, 10);
	printf("%s\n",arr2);

	return 0;
}