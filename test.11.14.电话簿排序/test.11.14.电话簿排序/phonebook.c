#define _CRT_SECURE_NO_WARNINGS 1
#include "PhoneBook.h"
//���scanf��������
void clean()
{
	char ch = ' ';
	while((ch = getchar())!='\n' && (ch != EOF));
}
//�绰������
void bubble()
{
	int i = 0;
	int j = 0;
	for(i=0; i<phonebook.size; i++)
	{
		for(j=0; j<phonebook.size-i-1; j++)
		{
			if(strcmp(phonebook.contact[j].name , phonebook.contact[j+1].name ) > 0)
			{
				strcpy(phonebook.contact[phonebook.size].name,phonebook.contact[j].name);
				strcpy(phonebook.contact[j].name , phonebook.contact[j+1].name);
				strcpy(phonebook.contact[j+1].name , phonebook.contact[phonebook.size].name);

				strcpy(phonebook.contact[phonebook.size].phone , phonebook.contact[j].phone);
				strcpy(phonebook.contact[j].phone , phonebook.contact[j+1].phone);
				strcpy(phonebook.contact[j+1].phone , phonebook.contact[phonebook.size].phone);
			}
		}
	}
}
//��ʼ���绰��
void Init()
{
	int i = 0;
	phonebook.size = 0;
	for(i = 0; i < SIZE; i++)
	{
		strcpy(phonebook.contact[i].name , "");
		strcpy(phonebook.contact[i].phone , "");
	}
	//memset(phonebook.contact, 0x0, sizeof(phonebook.contact));
}
//�����ϵ��
void AddContact()
{
	if(phonebook.size >= SIZE)
	{
		printf("��ǰ�绰�����������ʧ�ܣ�");
		return;
	}

	printf("��ʼ�����ϵ��\n");
	printf("������ϵ��������");
	scanf("%s",phonebook.contact[phonebook.size].name);
	clean();
	printf("������ϵ�˵绰��");
	scanf("%s",phonebook.contact[phonebook.size].phone);
	clean();
	phonebook.size++;
	bubble();

	printf("�����ϵ�˳ɹ���\n");
}

//ɾ����ϵ��
void DelContact()
{
	int num = 0;
	printf("ɾ����ϵ�ˣ�\n");
	printf("��������Ҫɾ����ϵ�˵ı��:");
	scanf("%d",&num);
	clean();
	num = num - 1;
	if(num < 0 || num >= phonebook.size)
	{
		printf("����������\n");
		return;
	}
	if(num != phonebook.size-1)
	{
		strcpy(phonebook.contact[num].name , phonebook.contact[phonebook.size-1].name);
		strcpy(phonebook.contact[num].phone , phonebook.contact[phonebook.size-1].phone);
		//strcpy(phonebook.contact[num-1].name , 0);
		//strcpy(phonebook.contact[num-1].phone , 0);
	}
	phonebook.size--;
	bubble();
	printf("ɾ���ɹ���\n");

}

//�޸���ϵ��
void ModifyContact()
{
	int num = 0;
	printf("�޸���ϵ�ˣ�\n");
	printf("��������Ҫ�޸���ϵ�˵ı��:");
	scanf("%d",&num);
	clean();
	if(num < 0 || num >= phonebook.size)
	{
		printf("����������\n");
		return;
	}
	printf("�������µ�����:");
	scanf("%s",phonebook.contact[num-1].name);
	clean();

	printf("�������µ�����:");
	scanf("%s",phonebook.contact[num-1].phone);
	clean();
	bubble();

	printf("�޸ĳɹ�����\n");
}

//������ϵ��
void FindContact()
{
	char name[1024] = {0};
	int i = 0;
	int count = 0;
	printf("������ϵ�˵绰\n");
	printf("������ϵ��������");
	scanf("%s",name);
	for(i=0; i<phonebook.size; i++)
	{
		if(strcmp(name, phonebook.contact[i].name) == 0)
		{
			printf("��ϵ�˵ĵ绰Ϊ��%d\n",phonebook.contact[i].phone);
			count++;
		}
	}
	if(count == 0)
	{
		printf("δ�ҵ������ϵ�ˣ�");
	}
	else
	{
		printf("----------------------------------------------------------\n");
		printf("���ҵ���%d�����\n",count);
	}
}

//��ӡ������ϵ��
void PrintContact()
{
	int i = 0;
    bubble();
	printf("��ǰ�绰���д洢����Ϣ���£�\n");
	printf("(���) [����]-->�绰����\n");
	for(i = 0; i < phonebook.size; i++)
	{
		printf("(%-3d)  [%s]-->%s\n", i+1, phonebook.contact[i].name, phonebook.contact[i].phone);
	}
	printf("---------------------------------------------------------\n");
	printf("����%d����Ϣ\n",i);
}

//��յ绰��
void CleanContact()
{
	char input[1024] = {0};
	printf("���������ϵ�ˣ�\n");
	printf("�Ƿ�ȷ�����������ϵ�ˣ�(y/n)\n");
	scanf("%s",input);
	if(strcmp(input , "y") != 0)
	{
		printf("��ȡ��ɾ��������\n");
		return;
	}
	else
		phonebook.size = 0;
	printf("�ɹ���յ绰����\n");

}

