//猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃一个。
//以后每天早上都吃了前一天剩下的一半零一个。 
//到第N天早上想再吃时，见只剩下一个桃子了。
//求第一天共摘多少桃子。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1  (1+1)*2
int num_peach1(int day)//递归
{
	if(1 == day)
		return 1;
	else
		return (num_peach1(day-1)+1)*2;
}

int num_peach2(int day)//非递归
{
	int i = 0;
	int num = 1;
	for(i=2; i<=day; i++)
	{
		num = (num + 1) * 2;
	}
	return num;
}

int main()
{
	int day = 0;
	printf("输入天数：");
	scanf("%d",&day);
    printf("第一天有%d颗桃子\n",num_peach1(day));
	printf("第一天有%d颗桃子\n",num_peach2(day));

	return 0;
}