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

	//const char *p = arr1;//保护p指向的内容 但可以改地址
    //*p = 20;      //不可行
	//p = &arr1[2]; //可行

	//char *const p2 = arr1;//保护p的地址 但可以改内容
	//*p2 = 'a';     //可行
	//p2 = &arr1[2]; //不可行

	//const char * const p = arr1;//保护p的地址和内容
	//*p = 'a';     //不可行
	//p = &arr1[2]; //不可行

	return 0;
}

