#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void menu()
{
	printf(" 1.β��һ����   2.βɾһ����\n");
	printf(" 3.�ײ�һ����   4.��ɾһ����\n");
	printf(" 5.��ӡ����                \n");
	printf("                          \n");
	printf("                          \n");
	printf("       0.����˳���        \n");

}

int main(){
	SeqList sl;
	SeqListInit(&sl, 5);
	int input;
	do
	{
		menu();//��ӡ�˵�
		printf("�����������ţ�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			int x;
			printf("������Ҫβ�������");
			scanf("%d", &x);
			SeqListPushBack(&sl, x);
			break;
		case 2:
			SeqListPopBack(&sl);
			break;
		case 3:
			int x;
			printf("������Ҫ�ײ������");
			scanf("%d", &x);
			SeqListPushFront(&sl, x);
			break;
		case 4:
			SeqListPopFront(&sl);
			break;
		case 5:
			SeqListPrint(&sl);
			break;
		case 6:

			break;
		case 0:
			printf("��ӭ�´�ʹ��~~\n");
			break;
		default:
			SeqListDestory(&sl);
			printf("��������������������룡\n");
			break;
		}

	} while (input);
	return 0;
}