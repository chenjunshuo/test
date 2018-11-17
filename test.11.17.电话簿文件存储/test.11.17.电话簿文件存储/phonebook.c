#define _CRT_SECURE_NO_WARNINGS 1
#include "PhoneBook.h"
//���scanf��������
void clean()
{
	char ch = ' ';
	while((ch = getchar())!='\n' && (ch != EOF));
}

//����ϵ����Ϣ�����ļ�
void save()
{
	FILE* fp = fopen("../test.txt","w");
	int i = 0;
	printf("������ϵ����Ϣ...\n");
	if(fp == NULL)
	{
		printf("�ļ���ʧ�ܣ�����ʧ�ܣ�\n");
		return;
	}
	for(i = 0; i<phonebook.size; i++)
	{
		fwrite(&phonebook.contact[i], sizeof(Contact), 1, fp);
	}
	fclose(fp);
	printf("����ɹ�����������%d����Ϣ��\n",phonebook.size);
}
//��ϵ����Ϣ����
void load()
{
	FILE* fp = fopen("../test.txt","r");

	Contact tmp = {0};
	printf("������ϵ����Ϣ...\n");

	if(fp == NULL)
	{
		printf("�ļ���ʧ�ܣ�����ʧ�ܣ�\n");
		return;
	}

	while( fread(&tmp, sizeof(tmp), 1, fp) )
	{
		CheakRealloc();
		phonebook.contact[phonebook.size] = tmp;
		phonebook.size++;
	}

	fclose(fp);
	printf("���سɹ�����������%d����Ϣ��\n",phonebook.size);
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

				strcpy(phonebook.contact[phonebook.size].address, phonebook.contact[j].address);
				strcpy(phonebook.contact[j].address , phonebook.contact[j+1].address);
				strcpy(phonebook.contact[j+1].address , phonebook.contact[phonebook.size].address);

				strcpy(phonebook.contact[phonebook.size].age , phonebook.contact[j].age);
				strcpy(phonebook.contact[j].age , phonebook.contact[j+1].age);
				strcpy(phonebook.contact[j+1].age , phonebook.contact[phonebook.size].age);

				strcpy(phonebook.contact[phonebook.size].sex , phonebook.contact[j].sex);
				strcpy(phonebook.contact[j].sex , phonebook.contact[j+1].sex);
				strcpy(phonebook.contact[j+1].sex , phonebook.contact[phonebook.size].sex);
			}
		}
	}
}
//��ʼ���绰��
void Init()
{
	//int i = 0;
	phonebook.size = 0;
	phonebook.capacity = 5;
	phonebook.contact = (Contact*) malloc(sizeof(Contact) * phonebook.capacity);
	//for(i = 0; i < phonebook.capacity; i++)
	//{
	//	strcpy(phonebook.contact[i].name , "");
	//	strcpy(phonebook.contact[i].phone , "");
	//}
	memset(phonebook.contact, 0x0, sizeof(Contact));
}

//����
void CheakRealloc()
{
	if(phonebook.size < phonebook.capacity)
	{
		return;
	}
	phonebook.capacity *= 2;
	realloc(phonebook.contact , sizeof(Contact) * phonebook.capacity);
}

//�����ϵ��
void AddContact()
{
	//if(phonebook.size >= SIZE)
	//{
	//	printf("��ǰ�绰�����������ʧ�ܣ�");
	//	return;
	//}

	CheakRealloc();

	printf("��ʼ�����ϵ��\n");
	printf("������ϵ��������");
	scanf("%s",phonebook.contact[phonebook.size].name);
	clean();
	printf("������ϵ�˵绰��");
	scanf("%s",phonebook.contact[phonebook.size].phone);
	clean();
	printf("������ϵ���Ա�");
	scanf("%s",phonebook.contact[phonebook.size].sex);
	clean();
	printf("������ϵ�����䣺");
	scanf("%s",phonebook.contact[phonebook.size].age);
	clean();
	printf("������ϵ��סַ��");
	scanf("%s",phonebook.contact[phonebook.size].address);
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
		strcpy(phonebook.contact[num].address , phonebook.contact[phonebook.size-1].address);
		strcpy(phonebook.contact[num].sex , phonebook.contact[phonebook.size-1].sex);
		strcpy(phonebook.contact[num].age , phonebook.contact[phonebook.size-1].age);
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
	printf("����������ϵ�˵�����:");
	scanf("%s",phonebook.contact[num-1].name);
	clean();

	printf("������ϵ�˵绰:");
	scanf("%s",phonebook.contact[num-1].phone);
	clean();

	printf("������ϵ���Ա�");
	scanf("%s",phonebook.contact[phonebook.size].sex);
	clean();

	printf("������ϵ�����䣺");
	scanf("%s",phonebook.contact[phonebook.size].age);
	clean();

	printf("������ϵ��סַ��");
	scanf("%s",phonebook.contact[phonebook.size].address);
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
			printf("��ϵ�˵ĵ绰Ϊ��%s\n�Ա�%s\n���䣺%s\nסַ��%s\n",
			phonebook.contact[i].phone,phonebook.contact[i].sex,phonebook.contact[i].age,phonebook.contact[i].address);
			printf("----------------------------------------------------------\n");
			count++;
		}
	}
	if(count == 0)
	{
		printf("δ�ҵ������ϵ�ˣ�\n");
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
	//printf("(���) [����]-->�绰����\n");
	for(i = 0; i < phonebook.size; i++)
	{
		printf("(%d) [%s]\n�绰��%s\n�Ա�%s\n���䣺%s\nסַ��%s\n",
			i+1, phonebook.contact[i].name, phonebook.contact[i].phone,
			phonebook.contact[i].sex,phonebook.contact[i].age,phonebook.contact[i].address);
     	printf("---------------------------------------------------------\n");

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