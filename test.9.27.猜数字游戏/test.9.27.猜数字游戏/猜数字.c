#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <time.h>
#include<windows.h>

void menu()
{
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃    欢迎来到猜数字      ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃       1.开始游戏       ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃       0.退出游戏       ┃\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void game()
{
	int key = rand()%100+1;
	int num = 0;
	while(1)
	{
		printf("输入您猜的数：\n");
		scanf("%d",&num);
		if(num == key)
		{
			printf("!!!!!!猜对了!!!!!\n");
			break;
		}
		else if(num > key)
		{
			printf("猜大了\n");
		}
		else
			printf("猜小了\n");
	}
	printf("三秒后返回菜单页面\n");
	printf("3\n");
	Sleep(1000);
	printf("2\n");
	Sleep(1000);
	printf("1\n");
	system("cls");

}

int main()
{
	int input = 0;
	do
	{
		menu();
		srand((unsigned int)time(NULL));
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	}
	while(input);

	return 0;
}