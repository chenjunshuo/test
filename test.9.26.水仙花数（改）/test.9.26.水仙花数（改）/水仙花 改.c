#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	for(i=0; i<=999999; i++)
	{
		int num = i;
		int sum = 0;
		int tmp = 0;
		//1.��i��λ��ws
		int ws = 1;
		while(num/10)
		{
			ws++;
			num = num/10;
		}
		//2.���λ����ws�η�֮��sum
		num = i;
		while(num)
		{
			sum = pow(num%10,ws) + sum;
			num = num/10;
		}
		//3.�ж�i�ǲ���ˮ�ɻ���
		if(sum == i)
		{
			printf("%d ",i);
		}

	}
	return 0;
}


//int main()
//{
//	int i = 0;
//	for(i=0; i<=999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		//1234
//		while(tmp/10)
//		{
//			count++;
//			tmp = tmp/10;
//		}
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp = tmp/10;
//		}
//		//3. �ж�
//		if(sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}