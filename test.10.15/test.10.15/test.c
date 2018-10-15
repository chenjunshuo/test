#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct Stu
{
	char name[20];
    int age;
	char sex[5];
};

int my_strlen(char *p)// 用两个指针求字符串长度
{
	char *p2 = p;
	while('\0' != *p2)
	{
		p2++;
	}
	return p2-p;
}

int main()
{
	//struct Stu a = {0};
	//struct Stu *pa = &a;

	//strcpy(a.name,"zhangsan");
	//strcpy(pa->sex,"男");
	//a.age = 20;
	//printf("%s\n%d\n%s\n",pa->name,a.age,pa->sex);

	//char a = 128;
	////10000000
	//printf("%d\n",a);//128
	////%d整形输出 需要对char类型的a整形提升
	////11111111111111111111111110000000 补充符号位 1得到补码
	////11111111111111111111111101111111 减一 得到反码
	////10000000000000000000000010000000 符号位不变 按位取反 得到原码对应的就是-128了

 //   char arr[] = "abcdefg";
	//printf("%d\n",strlen(arr));
	//printf("%d\n",my_strlen(arr));

	char arr[10] = {0};
	int arr2[10] = {0};
	double arr3[10] = {0};
	int a,b,c,d;
	a = &arr[9] - &arr[0];//指针相减算的是元素个数
	b = &arr[0] - &arr[9];
	c = &arr2[9] - &arr2[0];
	d = &arr3[9] - &arr3[0];
	printf("%d\n",a);//9
	printf("%d\n",b);//-9
	printf("%d\n",c);//9
	printf("%d\n",d);//9


	return 0;
}