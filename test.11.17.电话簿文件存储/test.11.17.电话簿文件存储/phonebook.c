#define _CRT_SECURE_NO_WARNINGS 1
#include "PhoneBook.h"
//清除scanf多余内容
void clean()
{
	char ch = ' ';
	while((ch = getchar())!='\n' && (ch != EOF));
}

//将联系人信息存入文件
void save()
{
	FILE* fp = fopen("../test.txt","w");
	int i = 0;
	printf("保存联系人信息...\n");
	if(fp == NULL)
	{
		printf("文件打开失败，保存失败！\n");
		return;
	}
	for(i = 0; i<phonebook.size; i++)
	{
		fwrite(&phonebook.contact[i], sizeof(Contact), 1, fp);
	}
	fclose(fp);
	printf("保存成功！共保存了%d条信息！\n",phonebook.size);
}
//联系人信息加载
void load()
{
	FILE* fp = fopen("../test.txt","r");

	Contact tmp = {0};
	printf("加载联系人信息...\n");

	if(fp == NULL)
	{
		printf("文件打开失败，保存失败！\n");
		return;
	}

	while( fread(&tmp, sizeof(tmp), 1, fp) )
	{
		CheakRealloc();
		phonebook.contact[phonebook.size] = tmp;
		phonebook.size++;
	}

	fclose(fp);
	printf("加载成功！共加载了%d条信息！\n",phonebook.size);
}

//电话簿排序
void bubble()
{
	int i = 0;
	int j = 0;
	for(i=0; i<phonebook.size; i++)
	{
		for(j=0; j<phonebook.size-i-1; j++)
		{
			if(strcmp(phonebook.contact[j].name , phonebook.contact[j+1].name ) > 0)
			{
				strcpy(phonebook.contact[phonebook.size].name,phonebook.contact[j].name);
				strcpy(phonebook.contact[j].name , phonebook.contact[j+1].name);
				strcpy(phonebook.contact[j+1].name , phonebook.contact[phonebook.size].name);

				strcpy(phonebook.contact[phonebook.size].phone , phonebook.contact[j].phone);
				strcpy(phonebook.contact[j].phone , phonebook.contact[j+1].phone);
				strcpy(phonebook.contact[j+1].phone , phonebook.contact[phonebook.size].phone);

				strcpy(phonebook.contact[phonebook.size].address, phonebook.contact[j].address);
				strcpy(phonebook.contact[j].address , phonebook.contact[j+1].address);
				strcpy(phonebook.contact[j+1].address , phonebook.contact[phonebook.size].address);

				strcpy(phonebook.contact[phonebook.size].age , phonebook.contact[j].age);
				strcpy(phonebook.contact[j].age , phonebook.contact[j+1].age);
				strcpy(phonebook.contact[j+1].age , phonebook.contact[phonebook.size].age);

				strcpy(phonebook.contact[phonebook.size].sex , phonebook.contact[j].sex);
				strcpy(phonebook.contact[j].sex , phonebook.contact[j+1].sex);
				strcpy(phonebook.contact[j+1].sex , phonebook.contact[phonebook.size].sex);
			}
		}
	}
}
//初始化电话簿
void Init()
{
	//int i = 0;
	phonebook.size = 0;
	phonebook.capacity = 5;
	phonebook.contact = (Contact*) malloc(sizeof(Contact) * phonebook.capacity);
	//for(i = 0; i < phonebook.capacity; i++)
	//{
	//	strcpy(phonebook.contact[i].name , "");
	//	strcpy(phonebook.contact[i].phone , "");
	//}
	memset(phonebook.contact, 0x0, sizeof(Contact));
}

//扩容
void CheakRealloc()
{
	if(phonebook.size < phonebook.capacity)
	{
		return;
	}
	phonebook.capacity *= 2;
	realloc(phonebook.contact , sizeof(Contact) * phonebook.capacity);
}

//添加联系人
void AddContact()
{
	//if(phonebook.size >= SIZE)
	//{
	//	printf("当前电话簿已满，添加失败！");
	//	return;
	//}

	CheakRealloc();

	printf("开始添加联系人\n");
	printf("输入联系人姓名：");
	scanf("%s",phonebook.contact[phonebook.size].name);
	clean();
	printf("输入联系人电话：");
	scanf("%s",phonebook.contact[phonebook.size].phone);
	clean();
	printf("输入联系人性别：");
	scanf("%s",phonebook.contact[phonebook.size].sex);
	clean();
	printf("输入联系人年龄：");
	scanf("%s",phonebook.contact[phonebook.size].age);
	clean();
	printf("输入联系人住址：");
	scanf("%s",phonebook.contact[phonebook.size].address);
	clean();
	phonebook.size++;
	bubble();

	printf("添加联系人成功！\n");
}

//删除联系人
void DelContact()
{
	int num = 0;
	printf("删除联系人！\n");
	printf("请输入你要删除联系人的编号:");
	scanf("%d",&num);
	clean();
	num = num - 1;
	if(num < 0 || num >= phonebook.size)
	{
		printf("输入编号有误！\n");
		return;
	}
	if(num != phonebook.size-1)
	{
		strcpy(phonebook.contact[num].name , phonebook.contact[phonebook.size-1].name);
		strcpy(phonebook.contact[num].phone , phonebook.contact[phonebook.size-1].phone);
		strcpy(phonebook.contact[num].address , phonebook.contact[phonebook.size-1].address);
		strcpy(phonebook.contact[num].sex , phonebook.contact[phonebook.size-1].sex);
		strcpy(phonebook.contact[num].age , phonebook.contact[phonebook.size-1].age);
	}

	phonebook.size--;
	bubble();
	printf("删除成功！\n");

}

//修改联系人
void ModifyContact()
{
	int num = 0;
	printf("修改联系人！\n");
	printf("请输入你要修改联系人的编号:");
	scanf("%d",&num);
	clean();
	if(num < 0 || num >= phonebook.size)
	{
		printf("输入编号有误！\n");
		return;
	}
	printf("请输入新联系人的名字:");
	scanf("%s",phonebook.contact[num-1].name);
	clean();

	printf("输入联系人电话:");
	scanf("%s",phonebook.contact[num-1].phone);
	clean();

	printf("输入联系人性别：");
	scanf("%s",phonebook.contact[phonebook.size].sex);
	clean();

	printf("输入联系人年龄：");
	scanf("%s",phonebook.contact[phonebook.size].age);
	clean();

	printf("输入联系人住址：");
	scanf("%s",phonebook.contact[phonebook.size].address);
	clean();

	bubble();

	printf("修改成功！！\n");
}

//查找联系人
void FindContact()
{
	char name[1024] = {0};
	int i = 0;
	int count = 0;
	printf("查找联系人电话\n");
	printf("输入联系人姓名：");
	scanf("%s",name);
	for(i=0; i<phonebook.size; i++)
	{
		if(strcmp(name, phonebook.contact[i].name) == 0)
		{
			printf("联系人的电话为：%s\n性别：%s\n年龄：%s\n住址：%s\n",
			phonebook.contact[i].phone,phonebook.contact[i].sex,phonebook.contact[i].age,phonebook.contact[i].address);
			printf("----------------------------------------------------------\n");
			count++;
		}
	}
	if(count == 0)
	{
		printf("未找到相关联系人！\n");
	}
	else
	{
		printf("----------------------------------------------------------\n");
		printf("共找到了%d条结果\n",count);
	}
}

//打印所有联系人
void PrintContact()
{
	int i = 0;
    bubble();
	printf("当前电话簿中存储的信息如下：\n");
	//printf("(编号) [姓名]-->电话号码\n");
	for(i = 0; i < phonebook.size; i++)
	{
		printf("(%d) [%s]\n电话：%s\n性别：%s\n年龄：%s\n住址：%s\n",
			i+1, phonebook.contact[i].name, phonebook.contact[i].phone,
			phonebook.contact[i].sex,phonebook.contact[i].age,phonebook.contact[i].address);
     	printf("---------------------------------------------------------\n");

	}
	printf("---------------------------------------------------------\n");
	printf("共有%d条信息\n",i);
}

//清空电话簿
void CleanContact()
{
	char input[1024] = {0};
	printf("清空所有联系人！\n");
	printf("是否确定清空所有联系人？(y/n)\n");
	scanf("%s",input);
	if(strcmp(input , "y") != 0)
	{
		printf("已取消删除操作！\n");
		return;
	}
	else
		phonebook.size = 0;
	printf("成功清空电话簿！\n");

}