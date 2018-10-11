#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"//�����Լ������game��

//��ʼ�����̺���
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
//��ӡ���̺���
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
				printf("��");
		}
		printf("\n");
		if(i<rows-1)
		{
			for(j=0; j<cols-1; j++)
			{
				printf("��������");
			}
			printf("������");
		}
		printf("\n");
	}

}
//������Ӻ���
void player_move(char board[ROWS][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("������Ҫ���ӵ����꣺");
		scanf("%d%d",&x,&y);
		if(' ' == board[x-1][y-1])
		{
			board[x-1][y-1] = '*';
			break;
		}
		else
			printf("�������ѱ�ռ�ã�\n");
	}

}

//�������Ӻ���
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

//�ж���Ӯ����
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

//���ز˵�����
void re_menu()
{
	printf("����󷵻ز˵�ҳ��\n");
	printf("3\n");
	Sleep(1000);
	printf("2\n");
	Sleep(1000);
	printf("1\n");
	system("cls");
}

//�����庯��
void game()
{
	int input = 0;
	int count = 0;
	char board[ROWS][COLS] = {0};//��ʼ��һ����ά�������Դ�����
	init_board(board,ROWS,COLS);//��ʼ������
	print_board(board,ROWS,COLS);//��ӡ����
	printf("���������У�����1�����õ��������������������֣�");
	scanf("%d",&input);
	if(1 != input)//�������е����
	{
		printf("�������ӣ�\n");
		com_move(board,ROWS,COLS);
	    print_board(board,ROWS,COLS);
		count++;
	}
	while(1)
	{
		if(9 == count)//9�غ�δ��ʤ�������ƽ��
		{
			printf("~~~����൱�Ķ���~~~\n");
			break;
		}

		printf("������ӣ�\n");//��һغ�
		player_move(board,ROWS,COLS);
		print_board(board,ROWS,COLS);
		if(' ' != is_win(board,ROWS,COLS))//�غϽ����ж�ʤ��
			break;
		count++;

		printf("�������ӣ�\n");//���Իغ�
		com_move(board,ROWS,COLS);
	    print_board(board,ROWS,COLS);
		if(' ' != is_win(board,ROWS,COLS))//�غϽ����ж�ʤ��
			break;
		count++;
	}
	if('X' == is_win(board,ROWS,COLS))
	{
		printf("����ʤ��������������\n");
	}
	else if('*' == is_win(board,ROWS,COLS))
	{
		printf("��Ӯ�ˣ�����������\n");
	}
	re_menu();//�������˵�
}