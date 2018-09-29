#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。
void Mul_tables(int num)
{
	int i = 0;
	int j = 0;
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2d*%-2d=%-4d ",i,j,i*j);
		}
		printf("\n");
	}
}

int main()
{
    int num = 0;

	printf("输入您想打印几乘几的口诀表：");
	scanf("%d",&num);
	Mul_tables(num);

	return 0 ;
}