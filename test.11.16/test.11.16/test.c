#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct student
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//};
//
//struct node
//{
//	int data;
//	struct Node* next;//使用指针实现结构体的自引用
//}
//(1)结构体变量的定义
//struct Point
//{
//	int x;
//	int y;
//}p1;//声明类型的同时定义变量p1；
//struct Point p2；//定义结构体变量p2；
//(2)结构体变量的初始化
//struct Node
//{
//	int date;
//	struct Point p;
//}p1={3,{3,5}};//定义变量p1的同时初始化；
//struct Node p2 = {3,{6, 5}}；//结构体嵌套初始化；
int main()
{

//struct s1
//{
//	char c1; //补齐成4字节
//	int i;   //4字节
//	char c2; //补齐成4字节
//};//12
//
//struct s2
//{
//	char c1;  //
//	char c2;  //c1,c2总共补成4字节
//	int i;    //4字节
//};//8
//
//struct s3
//{
//	double d; //8字节
//	char c;   //
//	int i;    //c与i总共补成8字节
//};//16
//
//struct s4
//{
//	struct s3 s; //16字节
//	char c;   //
//    int i ;   //c与i补成8字节
//};//24
//
//printf("%d\n",sizeof(struct s1));//12
//printf("%d\n",sizeof(struct s2));//8
//printf("%d\n",sizeof(struct s3));//16
//printf("%d\n",sizeof(struct s4));//24

union Un1
{ 
	char c[5]; 
	int i; 
}; 

union Un2
{ 
	short c[7]; 
	int i; 
}; 

printf("%d\n", sizeof(union Un1)); //8
printf("%d\n", sizeof(union Un2)); //16


return 0;
}

//enum Day
//{ 
//	 Mon = 1, //元素对应的值从0开始，也可以赋初值
//	 Tues, 
//	 Wed, 
//	 Thur, 
//	 Fri, 
//	 Sat, 
//	 Sun//最后一个元素的','可以省略
//}; 