#ifndef  __game_h__
#define  __game_h__

#define  ROWS 3
#define  COLS 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void game();
void init_board(char board[ROWS][COLS], int rows, int cols);
void print_board(char board[ROWS][COLS], int rows, int cols);
void player_move(char board[ROWS][COLS], int rows, int cols);
void com_move(char board[ROWS][COLS], int rows, int cols);
char is_win(char board[ROWS][COLS], int rows, int cols);
void re_menu();


#endif  //__game_h__
