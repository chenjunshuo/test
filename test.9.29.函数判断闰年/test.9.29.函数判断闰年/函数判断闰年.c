#define _CRT_SECURE_NO_WARNINGS 1
//3.ʵ��һ�������ж�year�ǲ������ꡣ
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

	//printf("������ݣ�");
 //   scanf("%d",&year);
	//if(is_leap_year(year))
	//{
	//	printf("%d�����꣡",year);
	//}
	//else
	//{
	//	printf("%d���������꣡",year);
	//}

	return 0 ;
}