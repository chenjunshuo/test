#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char ch = ' ';
	while(1)
	{
	ch = getchar();
	if((ch>=97)&&(ch<=122))
	{
		ch = ch-32;
		putchar(ch);
	}
	else if((ch>=65)&&(ch<=90))
	{
		ch = ch + 32;
		putchar(ch);
	}
	//printf("\n");
	}
    

	//while(1)
	//{
	//	scanf("%s",&ch);
	//	if((ch>=65)&&(ch<=90))
	//	{
	//		ch = ch + 32;
	//		printf("%s\n",ch);
	//	}
	//	else if((ch>=97)&&(ch<=122))
	//	{
	//		ch = ch - 32;
	//		printf("%s\n",ch);
	//	}
	//}

	return 0;
}