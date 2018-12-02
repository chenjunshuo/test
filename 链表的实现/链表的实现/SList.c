#include "SList.h"

// 初始化
void SListInit(SList *list){
	assert(list);
	list->first = NULL;
}

// 销毁
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

// 头插
void SListPushFront(SList *list, SLDataType data){
	assert(list);
	SListNode * node = (SListNode *)malloc(sizeof(SListNode));
	assert(node);
	node->data = data;
	node->next = list->first;
	list->first = node;
}

// 头删
void SListPopFront(SList *list){
	assert(list);
	assert(list->first);
	SListNode * oldfirst = list->first;
	list->first = list->first->next;
	free(oldfirst);
}

//创建一个节点
SListNode * BuySListNode(SLDataType data){
	SListNode * node = (SListNode *)malloc(sizeof(SListNode));
	assert(node);
	node->data = data;
	node->next = NULL;
	return node;
}

// 尾插
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

// 尾删
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

// 查找
SListNode * SListFind(SList *list, SLDataType data){
	assert(list);
	for (SListNode* cur = list->first; cur != NULL; cur = cur->next){
		if (data == cur->data){
			return cur;
		}
	}
	return NULL;
}

// 在 pos 这个结点后面插入新结点
void SListInsertAfter(SListNode *pos, SLDataType data){
	assert(pos);
	SListNode* new =  BuySListNode(data);
	new->next = pos->next;
	pos->next = new;
}

// pos 不是最后一个结点
// 删除 pos 这个结点后面的结点
void SListEraseAfter(SListNode *pos){
	assert(pos);
	assert(pos->next);
	SListNode* node = pos->next;
	pos->next = pos->next->next;
	free(node);
}

// 删除第一个遇到的 data 结点
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

// 打印
void SListPrint(SList *list){
	assert(list);
	for (SListNode * cur = list->first; cur != NULL; cur = cur->next){
		printf("%d-->", cur->data);
	}
	printf("NULL\n");
}