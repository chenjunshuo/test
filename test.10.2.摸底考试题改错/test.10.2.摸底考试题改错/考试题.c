#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int* fun()
//{
//	int tmp = 10;
//	return &tmp;//warning C4172: 返回局部变量或临时变量的地址
//}
//
//int main()
//{
//    int p = 0 ;
//	int*p1 = &p;
//	printf("%d\n",p1);
//	p1 = fun();
//	printf("%d\n",p1);
//	return 0;
//}

#include<string.h>

int main()
{
	char arr[20] = {0};
	strcpy(arr,"hello b");
	printf("%s\n",arr);
	return 0;
}