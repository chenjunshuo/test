#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222 
int main()
{
	int Sn = 0;
	int i = 0;
	int a = 0;
	
	printf("请输入一个数字a：");
    scanf("%d",&a);
	for(i=1; i<=5; i++)
	{
		Sn = Sn+(int)(a*(pow(10.0,i)-1)/9);
	}
	printf("Sn=a+aa+aaa+aaaa+aaaaa=");
	printf("%d \n",Sn);
	return 0;
}