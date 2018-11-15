#ifndef  __PhoneBook_h__
#define  __PhoneBook_h__

typedef struct Contact
{
	char name[1024];//姓名
	char phone[1024];//电话
	char address[1024];//住址
	char sex[8];//性别
	char age[8];//年龄
}Contact;

typedef struct PhoneBook
{
	Contact* contact;
	int capacity;  //最大容量
	int size;      //当前有效元素
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

