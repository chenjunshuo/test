#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

//≥ı ºªØ
void SeqListInit(SeqList* sl, size_t capacity){
	assert(sl);
	assert(capacity);
	sl->capacity = capacity;
	sl->size = 0;
	sl->array = (SLDataType)malloc(sizeof(SLDataType)*sl->capacity);
	assert(sl->array);
}
//œ˙ªŸ
void SeqListDestory(SeqList* sl){
	assert(sl);
	free(sl->array);
	sl->array = NULL;
	sl->capacity = sl->size = 0;
}
//¿©»›
void CheckCapacity(SeqList* sl){
}
//Œ≤≤Â
void SeqListPushBack(SeqList* sl, SLDataType x){
}
//Œ≤…æ
void SeqListPopBack(SeqList* sl){
}
//Õ∑≤Â
void SeqListPushFront(SeqList* sl, SLDataType x){
}
//Õ∑…æ
void SeqListPopFront(SeqList* sl){
}
//¥Ú”°
void SeqListPrint(SeqList* sl){
}