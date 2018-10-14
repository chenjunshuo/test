#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"//调用自己定义的game库

void menu()
{
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃     欢迎来到扫雷       ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃       1.开始游戏       ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃       0.退出游戏       ┃\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

//主函数
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}

	}
	while(input);
	return 0;
}