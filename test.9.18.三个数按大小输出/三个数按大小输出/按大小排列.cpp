#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

	//int change(int a, int b)
	//{
	//a=a+b;
	//b=a-b;
	//a=a-b;
	//return 0;
	//}
int main()
{
	int i=0;
	int j=0;
	int k=0;
	printf("������������");
	scanf("%d%d%d",&i,&j,&k);
	//if(i<j)
	//{
	//	change(i, j);
	//};
	//if(i<k)
	//{
	//	change(i, k);
	//};
	//if(j<k)
	//{
	//	change(j, k);
	//};
	if(i<j)
	{
		i=i+j;
		j=i-j;
		i=i-j;
	};
	if(i<k)
	{
		i=i+k;
		k=i-k;
		i=i-k;
	};
	if(j<k)
	{
		j=j+k;
		k=j-k;
		j=j-k;
	};
	printf("\n�������Ӵ�С����Ϊ��%d %d %d",i,j,k);
	return 0;
}