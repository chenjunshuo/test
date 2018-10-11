#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"//调用自己定义的game库

//初始化棋盘函数
void init_board(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			board[i][j] = ' ';
		}
	}

}
//打印棋盘函数
void print_board(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf(" %c ",board[i][j]);
			if(j<cols-1)
				printf("┃");
		}
		printf("\n");
		if(i<rows-1)
		{
			for(j=0; j<cols-1; j++)
			{
				printf("━━━╋");
			}
			printf("━━━");
		}
		printf("\n");
	}

}
//玩家下子函数
void player_move(char board[ROWS][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("输入你要落子的坐标：");
		scanf("%d%d",&x,&y);
		if(' ' == board[x-1][y-1])
		{
			board[x-1][y-1] = '*';
			break;
		}
		else
			printf("该坐标已被占用！\n");
	}

}

//电脑下子函数
void com_move(char board[ROWS][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		x = rand()%3;
		y = rand()%3;
		if(' ' == board[x][y])
		{
			board[x][y] = 'X';
			break;
		}
		
	}

}

//判断输赢函数
char is_win(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	for(i=0; i<rows; i++)
	{
		if((board[i][0]==board[i][1])&&(board[i][1]==board[i][2])&&(' '!=board[i][1]))
			return board[i][1];
	}
	for(i=0; i<cols; i++)
	{
		if((board[0][i]==board[1][i])&&(board[1][i]==board[2][i])&&(' '!=board[1][i]))
			return board[1][i];
	}
	if ((board[0][0] == board[1][1])&&(board[1][1] == board[2][2])&&(' '!=board[1][1]))
		return board[1][1];
	if ((board[0][2] == board[1][1])&&(board[1][1] == board[2][0])&&(' '!=board[1][1]))
		return board[1][1];

	return ' ';

}

//返回菜单函数
void re_menu()
{
	printf("三秒后返回菜单页面\n");
	printf("3\n");
	Sleep(1000);
	printf("2\n");
	Sleep(1000);
	printf("1\n");
	system("cls");
}

//三子棋函数
void game()
{
	int input = 0;
	int count = 0;
	char board[ROWS][COLS] = {0};//初始化一个二维数组用以存坐标
	init_board(board,ROWS,COLS);//初始化棋盘
	print_board(board,ROWS,COLS);//打印棋盘
	printf("若您想先行，输入1，想让电脑先行则输入其他数字：");
	scanf("%d",&input);
	if(1 != input)//电脑先行的情况
	{
		printf("电脑落子：\n");
		com_move(board,ROWS,COLS);
	    print_board(board,ROWS,COLS);
		count++;
	}
	while(1)
	{
		if(9 == count)//9回合未分胜负则输出平局
		{
			printf("~~~旗鼓相当的对手~~~\n");
			break;
		}

		printf("玩家落子：\n");//玩家回合
		player_move(board,ROWS,COLS);
		print_board(board,ROWS,COLS);
		if(' ' != is_win(board,ROWS,COLS))//回合结束判断胜负
			break;
		count++;

		printf("电脑落子：\n");//电脑回合
		com_move(board,ROWS,COLS);
	    print_board(board,ROWS,COLS);
		if(' ' != is_win(board,ROWS,COLS))//回合结束判断胜负
			break;
		count++;
	}
	if('X' == is_win(board,ROWS,COLS))
	{
		printf("电脑胜利！！！！！！\n");
	}
	else if('*' == is_win(board,ROWS,COLS))
	{
		printf("你赢了！！！！！！\n");
	}
	re_menu();//返回主菜单
}