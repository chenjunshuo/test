#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year=0;
	int a=1;
	printf("������ݣ�Ҫ����1000-2000���ڣ���");
	for(a=1;;a++)
	{
		scanf("%d",&year);
		if ((year<1000)||(year>2000))
			printf("�밴Ҫ������������ݣ�");
		else
			break;

	}
	if (year%4==0)
		if(year%100==0)
			if(year%400==0)
				printf("%d��������",year);
			else
				printf("%d�겻������",year);
		else
			printf("%d��������",year);
	else
		printf("%d�겻������",year);

	return 0;
}