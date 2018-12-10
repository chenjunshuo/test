#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DLDataTtpe;

typedef struct DListNode{
	DLDataTtpe val;
	struct DListNode* next;
	struct DListNode* prev;
}DListNode;

typedef struct DList{
	DListNode * head;
}DList;
//创建节点
DListNode * BuyNode(DLDataTtpe val){
	DListNode* node = (DListNode *)malloc(sizeof(DListNode));
	assert(node);
	node->val = val;
	node->next = node->prev = NULL;
	return node;
}
//链表的初始化
void DListInit(DList* dlist){
	//dlist->head = BuyNode(0);
	//dlist->head->next = dlist->head->prev = dlist->head;
	DListNode* head = BuyNode(0);
	head->next = head;
	head->prev = head;
	dlist->head = head;
}
//链表的清空
void DListClean(DList* dlist){
	DListNode* cur,* next;
	for (cur = dlist->head->next; cur != dlist->head; cur = next){
		next = cur->next;
		free(cur);
	}
	dlist->head->next = dlist->head; 
	dlist->head->prev = dlist->head;
}
//链表的销毁
void DListDestory(DList* dlist){
	DListClean(dlist);
	free(dlist->head);
	dlist->head = NULL;
}
//头插
void DListPushFront(DList* dlist, DLDataTtpe x){
	DListNode* node = BuyNode(x);
	node->next = dlist->head->prev;
	node->prev = dlist->head;
	dlist->head->next->prev = node;
	dlist->head->next = node;
}
//尾插
void DListPushBack(DList* dlist, DLDataTtpe x){
	DListNode* node = BuyNode(x);
	node->next = dlist->head;
	node->prev = dlist->head->prev;
	dlist->head->prev->next = node;
	dlist->head->prev = node;
}
//头删
void DListPopFront(DList* dlist){
	DListNode* old = dlist->head->next;
	dlist->head->next = old->next;
	old->next->prev = dlist->head;
	free(old);
	old = NULL;
}
//尾删
void DListPopBack(DList* dlist){
	DListNode* old = dlist->head->prev;
	dlist->head->prev = old->prev;
	old->prev->next = dlist->head;
	free(old);
	old = NULL;
}
