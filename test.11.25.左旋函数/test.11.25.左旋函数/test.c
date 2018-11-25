#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//  1 2 3 4 5 6 7 8 9 
//  1 1 2 3 4 5 6 7 8     9
//  9 1 2 3 4 5 6 7 8 
void RightLoopMove(char* str, unsigned short n)
{
	int count = n % strlen(str);
	while (count)
	{
		int i = 0;
		int len = strlen(str);
		char tmp = *(str + len - 1);
		for(i=len-1; i>0; i--)
		{
			*(str+i) = *(str+i-1);
		}
		*str = tmp;
		count--;
	}
}

int main()
{
	while(1)
	{
		int j = 0;
		char str[] = "123456789";
		printf("%s\n",str);
		scanf("%d",&j);
		RightLoopMove(str, j);
		printf("%s\n",str);
	}

	return 0;
}