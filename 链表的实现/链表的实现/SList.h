#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SListNode {
	SLDataType	data;
	struct SListNode *next;
}SListNode;

typedef struct SList {
	struct SListNode *first;
}SList;

// ��ʼ��
void SListInit(SList *list);

// ����
void SListDestroy(SList *list);

// ͷ��
void SListPushFront(SList *list, SLDataType data);

// ͷɾ
void SListPopFront(SList *list);

// β��
void SListPushBack(SList *list, SLDataType data);

// βɾ
void SListPopBack(SList *list);

// ����
SListNode * SListFind(SList *list, SLDataType data);

// �� pos �������������½��
void SListInsertAfter(SListNode *pos, SLDataType data);

// pos �������һ�����
// ɾ�� pos ���������Ľ��
void SListEraseAfter(SListNode *pos);

// ɾ����һ�������� data ���
void SListRemove(SList *list, SLDataType data);

// ��ӡ
void SListPrint(SList *list);