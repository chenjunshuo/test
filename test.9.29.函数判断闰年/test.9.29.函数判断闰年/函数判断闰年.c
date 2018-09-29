#define _CRT_SECURE_NO_WARNINGS 1
//3.实现一个函数判断year是不是润年。
#include<stdio.h>

int is_leap_year(int year)
{
	return(((0 == year%4)&&(0 != year%100))||(0 == year%400));
}

int main()
{
	int year = 0;
	for(year=1000; year<=3000; year++)
	{
		if(is_leap_year(year))
		{
			printf("%d  ",year);
		}
	}
	//int year = 0;

	//printf("输入年份：");
 //   scanf("%d",&year);
	//if(is_leap_year(year))
	//{
	//	printf("%d是闰年！",year);
	//}
	//else
	//{
	//	printf("%d不是是闰年！",year);
	//}

	return 0 ;
}