#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void bit_set(unsigned char* p_data, unsigned char position, int flag)
//{
//	if(flag)
//	{
//		* p_data = (1 << (position-1) ) | *p_data;
//	}
//	else if((*p_data >> (position-1)) & 1)
//	{
//		* p_data = (1 << (position-1) ) ^ *p_data;
//	}
//}
//
//int main()
//{
//	unsigned char i = 8;
//	bit_set(&i, 3, 0);
//	printf("%d\n",i);
//	return 0;
//}

int main()
{
	char* str = "12345";
	int ret = 0;
	int i = strlen(str);
	while(i)
	{
		ret = ret*10 + (int)(*str - '0');
		str++;
		i--;
	}
	printf("%d\n",ret);
}