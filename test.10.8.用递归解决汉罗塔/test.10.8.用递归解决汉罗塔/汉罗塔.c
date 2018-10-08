#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int i = 1;
void move(int n,char from,char to)
{
	printf("第%d步：将第%d个盘子从%c--->%c\n",i,n,from,to);
	i++;
}

void hanoi(int n, char from, char help, char to)
{
	if(1 == n)
		move(1,from,to);
	else
	{
		hanoi(n-1,from,to,help);
		move(n,from,to);
		hanoi(n-1,help,from,to);
	}
}

int main()
{
	int n = 0;
	char a = 'a';
	char b = 'b';
	char c = 'c';

    printf("输入盘子个数：");
	scanf("%d",&n);
	printf("盘子移动方法如下：\n");
	hanoi(n,a,b,c);

	return 0;
}