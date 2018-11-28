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

//查找
int SeqListFind(SeqList* sl, SLDataType x);
//定点插入
void SeqListInsert(SeqList* sl, size_t pos, SLDataType x);
//定点删除
void SeqListErase(SeqList* sl, size_t pos);
//删除指定数
void SeqListRemove(SeqList* sl, SLDataType x);
//修改
void SeqListModify(SeqList* sl, size_t pos, SLDataType x);

//冒泡排序
void SeqListBubbleSort(SeqList* sl);
//二分法查找
void SeqListBinaryFind(SeqList* sl, SLDataType x);
//删除所有指定数
void SeqListRemoveAll(SeqList* sl, SLDataType x);

//清除缓存
void clean();