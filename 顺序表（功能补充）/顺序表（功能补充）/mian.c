#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void menu()
{
	printf("------------------------------------------------\n");
	printf("  1.首插一个数       2.尾插一个数     3.首删一个数\n");
	printf("  4.尾删一个数       5.打印数组       6.查找一个数\n");
	printf("  7.修改一个数       8.定点插入       9.定点删除  \n");
	printf(" 10.删除指定数      11.删除所有指定数  12.排序    \n");
	printf("                    0.销毁顺序表                 \n");
	printf("------------------------------------------------\n");
}
int main(){
	SeqList sl;
	int x;
	int pos;
	SeqListInit(&sl, 5);
	int input;
	do
	{
		menu();//打印菜单
		printf("请输入操作序号：");
		scanf("%d", &input);
		clean();
		switch (input)
		{
		case 1:
			printf("请输入要首插的数：");
			scanf("%d", &x);
			clean();
			SeqListPushFront(&sl, x);
			break;
		case 2:
			printf("请输入要尾插的数：");
			scanf("%d", &x);
			clean();
			SeqListPushBack(&sl, x);
			break;
		case 3:
			SeqListPopFront(&sl);
			break;
		case 4:
			SeqListPopBack(&sl);
			break;
		case 5:
			SeqListPrint(&sl);
			break;
		case 6:
			printf("请输入要查找的数：");
			scanf("%d", &x);
			clean();
			int ret = SeqListFind(&sl, x);
			if (ret < 0){
				printf("未找到%d!\n", x);
			}
			else{
				printf("找到%d了，下标为%d!\n", x, ret);
			}
			break;
		case 7:
			printf("请输入 下标 和 目标值：");
			scanf("%d %d", &pos, &x);
			clean();
			SeqListModify(&sl, pos, x);
			break;
		case 8:
			printf("请输入 下标 和 目标值：");
			scanf("%d %d", &pos, &x);
			clean();
			SeqListInsert(&sl, pos, x);
			break;
		case 9:
			printf("请输入要删除的数的下标：");
			scanf("%d", &pos);
			clean();
			SeqListErase(&sl, pos);
			break;
		case 10:
			printf("请输入要删除的数：");
			scanf("%d", &x);
			clean();
			SeqListRemove(&sl, x);
			break;
		case 11:
			printf("请输入要删除的数：");
			scanf("%d", &x);
			clean();
			SeqListRemoveAll(&sl, x);
			break;
		case 12:
			SeqListBubbleSort(&sl);
			SeqListPrint(&sl);
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