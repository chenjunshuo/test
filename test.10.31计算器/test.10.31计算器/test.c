#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

int main()
{
	int x = 0;
	int y = 0;
	int input = 1;
	int ret = 0;
	//ʹ��switch case���ʵ��
	//while (input)
	//{
	//	printf("******************************\n");
	//	printf("****   1 .add   2 .sub    ****\n");
	//	printf("****   3 .mul   4 .div    ****\n");
	//	printf("******************************\n");
	//	printf("��ѡ��");
	//	scanf("%d", &input);
	//	printf("����������������");
	//	scanf("%d%d", &x, &y);
	//	switch (input)
	//	{
	//	case 1:
	//		ret = add(x, y);
	//		break;
	//	case 2:
	//		ret = sub(x, y);
	//		break;
	//	case 3:
	//		ret = mul(x, y);
	//		break;
	//	case 4:
	//		ret = div(x, y);
	//		break;
	//	default:
	//		printf("ѡ�����\n");
	//		break;
	//	}
	//	printf("ret = %d\n", ret);
	//}

	//ʹ�ú���ָ������ʵ�ּ�����
	int(*p[5])(int x, int y) = { 0, add, sub, mul, div };
	while (input)
	{
		printf("******************************\n");
		printf("****   1 .add   2 .sub    ****\n");
		printf("****   3 .mul   4 .div    ****\n");
		printf("******************************\n");
		printf("��ѡ��");
		scanf("%d", &input);
		if ((input <= 4 && input >= 1))
		{
			printf("�����������");
			scanf("%d%d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else
			printf("�������\n");
		printf("ret = %d\n",ret);
	}
	return 0;
}