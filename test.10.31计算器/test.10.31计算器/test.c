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
	//使用switch case语句实现
	//while (input)
	//{
	//	printf("******************************\n");
	//	printf("****   1 .add   2 .sub    ****\n");
	//	printf("****   3 .mul   4 .div    ****\n");
	//	printf("******************************\n");
	//	printf("请选择：");
	//	scanf("%d", &input);
	//	printf("输入两个操作数：");
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
	//		printf("选择错误！\n");
	//		break;
	//	}
	//	printf("ret = %d\n", ret);
	//}

	//使用函数指针数组实现计算器
	int(*p[5])(int x, int y) = { 0, add, sub, mul, div };
	while (input)
	{
		printf("******************************\n");
		printf("****   1 .add   2 .sub    ****\n");
		printf("****   3 .mul   4 .div    ****\n");
		printf("******************************\n");
		printf("请选择：");
		scanf("%d", &input);
		if ((input <= 4 && input >= 1))
		{
			printf("输入操作数：");
			scanf("%d%d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else
			printf("输入错误！\n");
		printf("ret = %d\n",ret);
	}
	return 0;
}