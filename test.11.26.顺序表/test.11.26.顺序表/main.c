#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void menu()
{
	printf(" 1.尾插一个数   2.尾删一个数\n");
	printf(" 3.首插一个数   4.首删一个数\n");
	printf(" 5.打印数组                \n");
	printf("                          \n");
	printf("                          \n");
	printf("       0.销毁顺序表        \n");

}

int main(){
	SeqList sl;
	SeqListInit(&sl, 5);
	int input;
	do
	{
		menu();//打印菜单
		printf("请输入操作序号：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			int x;
			printf("请输入要尾插的数：");
			scanf("%d", &x);
			SeqListPushBack(&sl, x);
			break;
		case 2:
			SeqListPopBack(&sl);
			break;
		case 3:
			int x;
			printf("请输入要首插的数：");
			scanf("%d", &x);
			SeqListPushFront(&sl, x);
			break;
		case 4:
			SeqListPopFront(&sl);
			break;
		case 5:
			SeqListPrint(&sl);
			break;
		case 6:

			break;
		case 0:
			printf("欢迎下次使用~~\n");
			break;
		default:
			SeqListDestory(&sl);
			printf("输入序号有误，请重新输入！\n");
			break;
		}

	} while (input);
	return 0;
}