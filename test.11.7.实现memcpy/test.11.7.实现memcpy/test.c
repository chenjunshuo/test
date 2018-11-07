// µœ÷memcpy 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void* my_memcpy(void * dst, void * src, size_t count)
{
	void * ret = dst;
	while(count--)
	{
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;
	}
	return ret;
}

int main()
{
	char str1[20] = "my name is lili";
	char str2[20] = {0};
	my_memcpy(str2, str1, 10);
	printf("%s\n",str2);
	return 0;
}