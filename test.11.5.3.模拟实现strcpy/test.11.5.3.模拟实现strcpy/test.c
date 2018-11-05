//3.Ä£ÄâÊµÏÖstrcpy 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strcpy(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[10] = {0};
	my_strcpy(arr2, arr1);
	printf("%s\n",my_strcpy(arr2, arr1));

	return 0;
}