#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct person
{
	int num;
	char name[20];
	int sex;
};
int main()
{	 
	//struct person
	//{
	//int num;
	//char name[10];
	//char sex;
	//}a1 ={10001,"Meimei",'W'},a2 = {10002,"Lixiangyu",'M'};
	////person a1 = {10001,"Meimei",0};
	////person a2 = {10002,"Lixiangyu",1};
	//printf("%s的职工号为%d\n",a1.name,a1.num);
	//printf("%s的职工号为%d\n",a2.name,a2.num);

	//struct person a = {123456,"King",'M'};
	//printf("%s的职工号为%d\n",a.name,a.num);

	struct person arr[5]/* = {123222,"SSssss",'m'}*/;
	scanf("%s%d%s",&arr[0].name, &arr[0].num, &arr[0].sex);
	printf("%s的职工号为%d\n",arr[0].name,arr[0].num);

	return 0;
}