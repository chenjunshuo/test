#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"//�����Լ������game��

void menu()
{
	printf("����������������������������������������������������\n");
	printf("��     ��ӭ����ɨ��       ��\n");
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
			printf("ѡ�����,������ѡ��\n");
			break;
		}

	}
	while(input);

	//char arr[3][5] = {0};
	//int i = 0;
	//int j = 0;
	//memset(arr,'0',15*sizeof(arr[0][0]));
	//for(i=0; i<3; i++)
	//{
	//	for(j=0; j<5; j++)
	//	{
	//		printf("%c ",arr[i][j]);
	//	}
	//    printf("\n");
	//}

	return 0;
}