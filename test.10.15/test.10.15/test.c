#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct Stu
{
	char name[20];
    int age;
	char sex[5];
};

int my_strlen(char *p)// ������ָ�����ַ�������
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
	//strcpy(pa->sex,"��");
	//a.age = 20;
	//printf("%s\n%d\n%s\n",pa->name,a.age,pa->sex);

	//char a = 128;
	////10000000
	//printf("%d\n",a);//128
	////%d������� ��Ҫ��char���͵�a��������
	////11111111111111111111111110000000 �������λ 1�õ�����
	////11111111111111111111111101111111 ��һ �õ�����
	////10000000000000000000000010000000 ����λ���� ��λȡ�� �õ�ԭ���Ӧ�ľ���-128��

 //   char arr[] = "abcdefg";
	//printf("%d\n",strlen(arr));
	//printf("%d\n",my_strlen(arr));

	char arr[10] = {0};
	int arr2[10] = {0};
	double arr3[10] = {0};
	int a,b,c,d;
	a = &arr[9] - &arr[0];//ָ����������Ԫ�ظ���
	b = &arr[0] - &arr[9];
	c = &arr2[9] - &arr2[0];
	d = &arr3[9] - &arr3[0];
	printf("%d\n",a);//9
	printf("%d\n",b);//-9
	printf("%d\n",c);//9
	printf("%d\n",d);//9


	return 0;
}