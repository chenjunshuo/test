#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = {0};

	for(i=0; i<3; i++)
	{
		printf("ÊäÈëÃÜÂë£º");
		scanf("%s",password);
		if(0 == strcmp(password,"9527"))
		{
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë£¡\n");
		}
	}
	if(i<3)
	{
		printf("µÇÂ¼³É¹¦£¡\n");
	}
	else
	{
		printf("µÇÂ¼Ê§°Ü\n");
	}
	return 0;
}