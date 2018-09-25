#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	void exchange(int*q1,int*q2,int*q3);
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int *p1 = &num1;
	int *p2 = &num2;
	int *p3 = &num3;
	printf("输入三个数字：");
	scanf("%d%d%d",&num1,&num2,&num3);
	exchange(p1,p2,p3);
	printf("\n三个数从大到小排序为:%d %d %d\n",num1,num2,num3);

	return 0;
}

void exchange(int*q1,int*q2,int*q3)
{
	void swap(int*n1, int*n2);
	if(*q1 < *q2)
		swap(q1,q2);
	if(*q1 < *q3)
	    swap(q1,q3);
	if(*q2 < *q3)
	    swap(q2,q3);

}

void swap(int*n1, int*n2)
{
	int num = *n1;
	*n1 = *n2;
	*n2 = num;
}