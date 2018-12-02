#include "SList.h"

// ��ʼ��
void SListInit(SList *list){
	assert(list);
	list->first = NULL;
}

// ����
void SListDestroy(SList *list){
	assert(list);
	SListNode* next;
	for (SListNode* cur = list->first; cur != NULL; cur = next){
		next = cur->next;
		free(cur);
		cur = NULL;
	}
	list->first = NULL;
}

// ͷ��
void SListPushFront(SList *list, SLDataType data){
	assert(list);
	SListNode * node = (SListNode *)malloc(sizeof(SListNode));
	assert(node);
	node->data = data;
	node->next = list->first;
	list->first = node;
}

// ͷɾ
void SListPopFront(SList *list){
	assert(list);
	assert(list->first);
	SListNode * oldfirst = list->first;
	list->first = list->first->next;
	free(oldfirst);
}

//����һ���ڵ�
SListNode * BuySListNode(SLDataType data){
	SListNode * node = (SListNode *)malloc(sizeof(SListNode));
	assert(node);
	node->data = data;
	node->next = NULL;
	return node;
}

// β��
void SListPushBack(SList *list, SLDataType data){
	assert(list);
	if (list->first == NULL){
		SListPushFront(list, data);
		return;
	}
	SListNode * last = list->first;
	for (; last->next != NULL; last = last->next){
	};
	last->next = BuySListNode(data);
}

// βɾ
void SListPopBack(SList *list){
	assert(list);
	assert(list->first);
	if (list->first->next == NULL){
		SListPopFront(list);
		return;
	}
	SListNode* cur = list->first;
	for (; cur->next->next != NULL; cur = cur->next){
	}
	free(cur->next);
	cur->next = NULL;
}

// ����
SListNode * SListFind(SList *list, SLDataType data){
	assert(list);
	for (SListNode* cur = list->first; cur != NULL; cur = cur->next){
		if (data == cur->data){
			return cur;
		}
	}
	return NULL;
}

// �� pos �������������½��
void SListInsertAfter(SListNode *pos, SLDataType data){
	assert(pos);
	SListNode* new =  BuySListNode(data);
	new->next = pos->next;
	pos->next = new;
}

// pos �������һ�����
// ɾ�� pos ���������Ľ��
void SListEraseAfter(SListNode *pos){
	assert(pos);
	assert(pos->next);
	SListNode* node = pos->next;
	pos->next = pos->next->next;
	free(node);
}

// ɾ����һ�������� data ���
void SListRemove(SList *list, SLDataType data){
	SListNode* prev = NULL;
	SListNode* cur = list->first;
	while (cur != NULL && cur->data != data){
		prev = cur;
		cur = cur->next;
	}
	if (cur == NULL){
		return;
	}
	else if (prev == NULL){
		SListPopFront(list);
		return;
	}
	prev->next = cur->next;
	free(cur);
}

// ��ӡ
void SListPrint(SList *list){
	assert(list);
	for (SListNode * cur = list->first; cur != NULL; cur = cur->next){
		printf("%d-->", cur->data);
	}
	printf("NULL\n");
}