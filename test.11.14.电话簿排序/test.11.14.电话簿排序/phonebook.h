#ifndef  __PhoneBook_h__
#define  __PhoneBook_h__

#define  SIZE 1000

typedef struct Contact
{
	char name[1024];
	char phone[1024];
}Contact;

typedef struct PhoneBook
{
	Contact contact[SIZE];
	int size;
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

#endif  //__PhoneBook_h__