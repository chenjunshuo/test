#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year=0;
	int a=1;
	printf("输入年份（要求在1000-2000以内）：");
	for(a=1;;a++)
	{
		scanf("%d",&year);
		if ((year<1000)||(year>2000))
			printf("请按要求重新输入年份：");
		else
			break;

	}
	if (year%4==0)
		if(year%100==0)
			if(year%400==0)
				printf("%d年是闰年",year);
			else
				printf("%d年不是闰年",year);
		else
			printf("%d年是闰年",year);
	else
		printf("%d年不是闰年",year);

	return 0;
}