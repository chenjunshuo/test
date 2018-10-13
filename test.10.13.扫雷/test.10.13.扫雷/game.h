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

//��ʼ������
void Init_arr(char arr[ROWS][COLS],int row,int col,char n);
//��ӡ����
void Print_arr(char arr[ROWS][COLS],int row,int col);
//������
void Set_mine(char arr[ROWS][COLS],int row,int col,int n);
//���ɨ��
void Sweep_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
//����������Χ�׵�����
int Num_mine(char arr[ROWS][COLS],int x,int y);
//��������Ϊ0ʱ��չ��Χ
void Expand(char show[ROWS][COLS],char mine[ROWS][COLS],int row,int col, int x,int y);
//���Խ���ɨ�ײ���
void Com_Sweep(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y);
//�ж�ʤ��
char Is_win(char show[ROWS][COLS],int row,int col);
//�������˵�
void re_menu();
//���ֱ���
void First_round(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);


#endif  //__GAME_H__