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
//	struct Node* next;//ʹ��ָ��ʵ�ֽṹ���������
//}
//(1)�ṹ������Ķ���
//struct Point
//{
//	int x;
//	int y;
//}p1;//�������͵�ͬʱ�������p1��
//struct Point p2��//����ṹ�����p2��
//(2)�ṹ������ĳ�ʼ��
//struct Node
//{
//	int date;
//	struct Point p;
//}p1={3,{3,5}};//�������p1��ͬʱ��ʼ����
//struct Node p2 = {3,{6, 5}}��//�ṹ��Ƕ�׳�ʼ����
int main()
{

//struct s1
//{
//	char c1; //�����4�ֽ�
//	int i;   //4�ֽ�
//	char c2; //�����4�ֽ�
//};//12
//
//struct s2
//{
//	char c1;  //
//	char c2;  //c1,c2�ܹ�����4�ֽ�
//	int i;    //4�ֽ�
//};//8
//
//struct s3
//{
//	double d; //8�ֽ�
//	char c;   //
//	int i;    //c��i�ܹ�����8�ֽ�
//};//16
//
//struct s4
//{
//	struct s3 s; //16�ֽ�
//	char c;   //
//    int i ;   //c��i����8�ֽ�
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
//	 Mon = 1, //Ԫ�ض�Ӧ��ֵ��0��ʼ��Ҳ���Ը���ֵ
//	 Tues, 
//	 Wed, 
//	 Thur, 
//	 Fri, 
//	 Sat, 
//	 Sun//���һ��Ԫ�ص�','����ʡ��
//}; 