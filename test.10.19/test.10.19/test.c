#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

typedef struct Stu//typedef ����������
{
	char name[20];
	int age;
	char num[13];
};

int main()
{
	//struct Stu x = {"ming", 20,"1515225"};
	///*Stu y = {"cleanlove",20,"7777777"};*/
	//printf("%s\n",x.name);
	///*printf("%s\n",y.name);*/

	//char arr[] = "zhangsan";//"zhangsan"������arr��
	//char *p = "shancai";//'s'������*p��
	//printf("%s\n",arr);
	//printf("%c\n",*p);

	//int arr[5] = {1,2,3,4,5};
	//int *p = arr;
	//printf("%d\n",p[0]);//1   p[0] = *(p+0) = *(arr+0) = arr(0)
	//printf("%d\n",p[3]);//4   p[3] = *(p+3) = *(arr+3) = arr(3)


	//֤����������������Ԫ�ص�ַ
	int arr[] = {0,1,2,3,4};
	printf("%p\n",arr);      //00FAF7FC
	printf("%p\n",&arr[0]);  //00FAF7FC
	printf("%p\n",&arr);     //00FAF7FC

	printf("%p\n",arr+1);    //00FAF800
	printf("%p\n",&arr[0]+1);//00FAF800
	printf("%p\n",&arr+1);   //00FAF810

	printf("%d\n",sizeof(*arr));      //4
	printf("%d\n",sizeof(*(&arr[0])));//4
	printf("%d\n",sizeof(*(&arr)));   //20

	return 0;
}