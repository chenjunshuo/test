#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"//�����Լ������game��

//��ӡ�˵�����
void menu()
{
	printf("����������������������������������������������������\n");
	printf("��    ��ӭ����������      ��\n");
	printf("�ǩ�������������������������������������������������\n");
	printf("��       1.��ʼ��Ϸ       ��\n");
	printf("�ǩ�������������������������������������������������\n");
	printf("��       0.�˳���Ϸ       ��\n");
	printf("����������������������������������������������������\n");
}

//������
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	}
	while(input);
	return 0;
}