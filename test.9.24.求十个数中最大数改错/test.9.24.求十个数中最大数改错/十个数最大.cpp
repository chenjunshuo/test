#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i=0;
	int arr[10]={0};
	printf("������ʮ���������ÿպŸ�������");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}	
	int MAX=arr[0];//���ܸ�MAX����ֵΪ0����Ϊ���ܱ�֤ʮ������Ϊ������
	for(i=1;i<10;i++)
	{
		MAX=MAX>arr[i]?MAX:arr[i];
	}
	printf("ʮ���������ֵΪ:%d",MAX);
	return 0;
}