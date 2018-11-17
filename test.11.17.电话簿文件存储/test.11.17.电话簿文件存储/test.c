#define _CRT_SECURE_NO_WARNINGS 1
#include "PhoneBook.h"

//打印菜单函数
void menu()
{
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃                欢迎使用电话簿                  ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃      1.添加联系人           2.删除联系人       ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃      3.修改联系人           4.查找联系人       ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃    5.查看所有联系人         6.清空电话簿       ┃\n");
	printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("┃                  0.退出电话簿                  ┃\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

//主函数
int main()
{
	int input = 0;
	Init();
	load();
	do
	{
		menu();//打印菜单
		printf("请输入操作序号：");
		scanf("%d",&input);
		clean();
		switch(input)
		{
		case 1:
			AddContact();
			save();
			break;
		case 2:
			DelContact();
			save();
			break;
		case 3:
			ModifyContact();
			save();
			break;
		case 4:
			FindContact();
			break;
		case 5:
			PrintContact();
			break;
		case 6:
			CleanContact();
			save();
			break;
		case 0:
			printf("欢迎下次使用~~\n");
			break;
		default:
			printf("输入序号有误，请重新输入！\n");
			break;
		}

	}
	while(input);
	return 0;
}