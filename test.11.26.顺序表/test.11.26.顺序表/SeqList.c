#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

//��ʼ��
void SeqListInit(SeqList* sl, size_t capacity){
	assert(sl);
	assert(capacity);
	sl->capacity = capacity;
	sl->size = 0;
	sl->array = (SLDataType)malloc(sizeof(SLDataType)*sl->capacity);
	assert(sl->array);
}
//����
void SeqListDestory(SeqList* sl){
	assert(sl);
	free(sl->array);
	sl->array = NULL;
	sl->capacity = sl->size = 0;
}
//����
void CheckCapacity(SeqList* sl){
}
//β��
void SeqListPushBack(SeqList* sl, SLDataType x){
}
//βɾ
void SeqListPopBack(SeqList* sl){
}
//ͷ��
void SeqListPushFront(SeqList* sl, SLDataType x){
}
//ͷɾ
void SeqListPopFront(SeqList* sl){
}
//��ӡ
void SeqListPrint(SeqList* sl){
}