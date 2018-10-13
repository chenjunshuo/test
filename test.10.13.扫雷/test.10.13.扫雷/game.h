#ifndef  __GAME_H__
#define  __GAME_H__

#define  ROWS ROW+2
#define  COLS COL+2 
#define  ROW 9
#define  COL 9
#define  EASY_MODE 10

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


void game();

//初始化棋盘
void Init_arr(char arr[ROWS][COLS],int row,int col,char n);
//打印棋盘
void Print_arr(char arr[ROWS][COLS],int row,int col);
//设置雷
void Set_mine(char arr[ROWS][COLS],int row,int col,int n);
//玩家扫雷
void Sweep_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
//计算坐标周围雷的数量
int Num_mine(char arr[ROWS][COLS],int x,int y);
//坐标雷数为0时拓展周围
void Expand(char show[ROWS][COLS],char mine[ROWS][COLS],int row,int col, int x,int y);
//电脑进行扫雷操作
void Com_Sweep(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y);
//判断胜负
char Is_win(char show[ROWS][COLS],int row,int col);
//返回主菜单
void re_menu();
//首轮保护
void First_round(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);


#endif  //__GAME_H__