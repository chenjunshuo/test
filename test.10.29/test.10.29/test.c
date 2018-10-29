#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 
//int	Is_LittleEndian() 
//{
//	int num = 0x1;
//	char *p = (char*)&num;
//	if(*p == 0x0)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	//printf("%d\n",Is_LittleEndian());
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//1000 0001
//	//1111 1110
//	//1111 1111  =  0xff %dÊä³ö:255
//
//	printf("%d,%d,%d\n",a,b,c);//-1,-1,255
//	return 0;
//}

int main()
{
	char a = -128;//4294967168
	char b = 128; //4294967168
	printf("%u\n%u\n",a,b);
	return 0;
}