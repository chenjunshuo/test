#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void test(char *arr)
{
	//char ret[1024] = "abcd";
	char ret[] = "abcd";
	strcpy(arr,ret);
	//�ַ������������У�Դ�ַ����ĳ��ȿ��Բ�������
	//����Ŀ���ַ����ĳ��ȱ���������Ա�֤Ŀ���ַ�����������Դ�ַ�����
}

int main()
{
	char arr2[] = "asd";
	char arr[1024] = {0};
	int i = 0;
	test(arr);
	i = strcmp(arr, arr2);
	printf("%d\n",i);
	//strcpy(arr, "abcd");
	printf("%s\n",arr);

	/*strcat(arr2, arr);*///�ַ���ƴ�Ӻ����뿽�����ƣ�Ŀ���ַ������ȱ�����������㹻��
	                  //�Ա�֤Ŀ���ַ������Խ���Դ�ַ�����

	return 0;
}