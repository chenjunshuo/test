#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void menu()
{
	printf("------------------------------------------------\n");
	printf("  1.�ײ�һ����       2.β��һ����     3.��ɾһ����\n");
	printf("  4.βɾһ����       5.��ӡ����       6.����һ����\n");
	printf("  7.�޸�һ����       8.�������       9.����ɾ��  \n");
	printf(" 10.ɾ��ָ����      11.ɾ������ָ����  12.����    \n");
	printf("                    0.����˳���                 \n");
	printf("------------------------------------------------\n");
}
int main(){
	SeqList sl;
	int x;
	int pos;
	SeqListInit(&sl, 5);
	int input;
	do
	{
		menu();//��ӡ�˵�
		printf("�����������ţ�");
		scanf("%d", &input);
		clean();
		switch (input)
		{
		case 1:
			printf("������Ҫ�ײ������");
			scanf("%d", &x);
			clean();
			SeqListPushFront(&sl, x);
			break;
		case 2:
			printf("������Ҫβ�������");
			scanf("%d", &x);
			clean();
			SeqListPushBack(&sl, x);
			break;
		case 3:
			SeqListPopFront(&sl);
			break;
		case 4:
			SeqListPopBack(&sl);
			break;
		case 5:
			SeqListPrint(&sl);
			break;
		case 6:
			printf("������Ҫ���ҵ�����");
			scanf("%d", &x);
			clean();
			int ret = SeqListFind(&sl, x);
			if (ret < 0){
				printf("δ�ҵ�%d!\n", x);
			}
			else{
				printf("�ҵ�%d�ˣ��±�Ϊ%d!\n", x, ret);
			}
			break;
		case 7:
			printf("������ �±� �� Ŀ��ֵ��");
			scanf("%d %d", &pos, &x);
			clean();
			SeqListModify(&sl, pos, x);
			break;
		case 8:
			printf("������ �±� �� Ŀ��ֵ��");
			scanf("%d %d", &pos, &x);
			clean();
			SeqListInsert(&sl, pos, x);
			break;
		case 9:
			printf("������Ҫɾ���������±꣺");
			scanf("%d", &pos);
			clean();
			SeqListErase(&sl, pos);
			break;
		case 10:
			printf("������Ҫɾ��������");
			scanf("%d", &x);
			clean();
			SeqListRemove(&sl, x);
			break;
		case 11:
			printf("������Ҫɾ��������");
			scanf("%d", &x);
			clean();
			SeqListRemoveAll(&sl, x);
			break;
		case 12:
			SeqListBubbleSort(&sl);
			SeqListPrint(&sl);
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