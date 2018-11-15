#ifndef  __PhoneBook_h__
#define  __PhoneBook_h__

typedef struct Contact
{
	char name[1024];//����
	char phone[1024];//�绰
	char address[1024];//סַ
	char sex[8];//�Ա�
	char age[8];//����
}Contact;

typedef struct PhoneBook
{
	Contact* contact;
	int capacity;  //�������
	int size;      //��ǰ��ЧԪ��
}PhoneBook;

PhoneBook phonebook;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clean();
void Init();
void AddContact();
void DelContact();
void ModifyContact();
void FindContact();
void PrintContact();
void CleanContact();
void bubble();
void CheakRealloc();

#endif  //__PhoneBook_h__

