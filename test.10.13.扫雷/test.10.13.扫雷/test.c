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

	//char arr[3][5] = {0};
	//int i = 0;
	//int j = 0;
	//memset(arr,'0',15*sizeof(arr[0][0]));
	//for(i=0; i<3; i++)
	//{
	//	for(j=0; j<5; j++)
	//	{
	//		printf("%c ",arr[i][j]);
	//	}
	//    printf("\n");
	//}

	return 0;
}