#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2+22+222+2222+22222 
int main()
{
	int Sn = 0;
	int i = 0;
	int a = 0;
	
	printf("������һ������a��");
    scanf("%d",&a);
	for(i=1; i<=5; i++)
	{
		Sn = Sn+(int)(a*(pow(10.0,i)-1)/9);
	}
	printf("Sn=a+aa+aaa+aaaa+aaaaa=");
	printf("%d \n",Sn);
	return 0;
}