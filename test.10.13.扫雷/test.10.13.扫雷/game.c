#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Init_arr(char arr[ROWS][COLS],int row,int col,char n)
{
	memset(arr,n,row*col*sizeof(arr[0][0]));
	//int i = 0;
	//int j = 0;
	//for(i=0; i<row; i++)
	//{
	//	for(j=0; j<col; j++)
	//	{
	//		arr[i][j] = n;
	//	}
	//}
}

void Print_arr(char arr[ROWS][COLS],int row,int col)
{
	int i = 0 ;
	int j = 0 ;
	for(i=0; i<=col;i++)
	{
		printf(" %d  ",i);
	}
	printf("\n");
	for(i=0; i<row; i++)
	{
		printf(" %d ",i+1);
		for(j=0; j<col; j++)
		{
			printf(" %c ",arr[i+1][j+1]);
			if(j<col-1)
				printf("��");
		}
		printf("\n");
		if(i<row-1)
		{
			printf("   ");
			for(j=0; j<col-1; j++)
			{
				printf("��������");
			}
			printf("������");
		}
		printf("\n");
	}
}

void Set_mine(char arr[ROWS][COLS],int row,int col,int n)
{
	while(n>0)
	{
		int x = rand()%row + 1;
	    int y = rand()%col + 1;
		if(' ' == arr[x][y])
		{
			arr[x][y] = '*';
			n--;
		}
	}
}

int Num_mine(char arr[ROWS][COLS],int x,int y)
{
	int i = 0;
	int j = 0;
	int n = 0;
	for(i=x-1; i<=x+1; i++)
	{
		for(j=y-1; j<=y+1; j++)
		{
			if('*' == arr[i][j])
				n++;
		}
	}
	return n;
}

void Expand(char show[ROWS][COLS],char mine[ROWS][COLS],int row,int col, int x,int y)
{
	int i = 0;
	int j = 0;
	for(i=x-1; i<=x+1; i++)
	{
		for(j=y-1; j<=y+1; j++)
		{
			if((' ' == show[i][j])&&(x>0 && x<=row && y>0 && y<=col))//��ֹ�����չ
				Com_Sweep(mine,show,i,j);
		}
	}
}

void Com_Sweep(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y)
{
	show[x][y] ='0'+ Num_mine(mine,x,y);
	if(0 == Num_mine(mine,x,y))
	{
		mine[x][y] = '0';
		Expand(show,mine,ROW,COL,x,y);
	}
}

void Sweep_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("����һ�����꣺>");
	    scanf("%d%d",&x,&y);
		if(x>0 && x<=row && y>0 && y<=col)
		{
			if(' ' == show[x][y])
			{
				if('*' == mine[x][y])
				{
					show[x][y] = '*';
					break;
				}
				else
				{
					Com_Sweep(mine,show,x,y);
				    break;
				}	
			}
			else
				printf("����������Ѿ�ɨ��������������룡\n");
		}
		else
			printf("����������������������룡\n");
	}
}

char Is_win(char show[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	int num_void = 0;
	for(x=1; x<=row; x++)
	{
		for(y=1; y<=col; y++)
		{
			if('*' == show[x][y])
				return 'l';
			else if(' ' == show[x][y])
				num_void++;
		}
	}
	if(EASY_MODE == num_void)
		return 'w';
	else
		return ' ';
}

void re_menu()
{
	printf("�������ز˵�ҳ��\n");
	Sleep(6000);
	system("cls");
}

void First_round(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{	
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("����һ�����꣺>");
	    scanf("%d%d",&x,&y);
		if(x>0 && x<=row && y>0 && y<=col)
		{
				if('*' == mine[x][y])
				{
					while(1)
					{
						int i = rand()%row + 1;
						int j = rand()%col + 1;
						if(' ' == mine[i][j])
						{
							mine[i][j] = '*';
							break;
						}
					}
					mine[x][y] = ' ';
				}
				Com_Sweep(mine,show,x,y);
			    break;	
		}
		else
			printf("����������������������룡\n");
	}

}


void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	Init_arr(mine,ROWS,COLS,' ');
	Init_arr(show,ROWS,COLS,' ');
	Set_mine(mine,ROW,COL,EASY_MODE);
	//Print_arr(mine,ROW,COL);
	Print_arr(show,ROW,COL);
	First_round(mine,show,ROW,COL);
	//Print_arr(mine,ROW,COL);
	while(1)
	{
		Print_arr(show,ROW,COL);
		Sweep_mine(mine,show,ROW,COL);
		if('w' == Is_win(show,ROW,COL))
		{
			printf("��ϲ��ɨ�׳ɹ���������\n");
			Print_arr(mine,ROW,COL);
			break;
		}
		else if('l' == Is_win(show,ROW,COL))
		{
			printf("�ܿ�ϧ������ը����~~��������\n");
			Print_arr(mine,ROW,COL);
			break;
		}
	}
	/*re_menu()*/
}