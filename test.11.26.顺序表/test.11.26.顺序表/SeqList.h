#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* array;  //指向动态开辟的数组
	size_t size;        //有效数据个数
	size_t capacity;    //动态空间大小
}SeqList;


//初始化
void SeqListInit(SeqList* sl, size_t capacity);
//销毁
void SeqListDestory(SeqList* sl);
//扩容
void CheckCapacity(SeqList* sl);
//尾插
void SeqListPushBack(SeqList* sl, SLDataType x);
//尾删
void SeqListPopBack(SeqList* sl);
//头插
void SeqListPushFront(SeqList* sl, SLDataType x);
//头删
void SeqListPopFront(SeqList* sl);
//打印
void SeqListPrint(SeqList* sl);