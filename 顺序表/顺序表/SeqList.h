#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;
//顺序表的动态存储
typedef struct{
	SLDataType* array; //动态开辟数组空间
	int size;       //有效数据的个数
	int capicity;   //总容量的大小
}SList;
//初始化顺序表
void SeqListInit(SList* sl, int capicity){
	assert(sl);
	assert(capicity != 0);
	sl->capicity = capicity;
	sl->array = (SLDataType *)malloc(sizeof(SLDataType) * sl->capicity);
	sl->size = 0;
	assert(sl->array);
}
//销毁顺序表
void SeqListDestory(SList* sl){
	assert(sl);
	free(sl->array);
	sl->size = 0;
	sl->capicity = 0;
}
//扩容
void CheckCapacity(SList* sl){
	assert(sl);
	if (sl->size == sl->capicity){
		sl->capicity *= 2;
		realloc(sl->array, sizeof(SLDataType)* sl->capicity);
	}
}
//尾插
void SeqListPushBack(SList* sl, SLDataType x){
	assert(sl);
	CheckCapacity(sl);
	sl->array[sl->size] = x;
	sl->size++;
}
//尾删
void SeqListPopBack(SList* sl){
	assert(sl);
	assert(sl->size > 0);
	sl->size--;
}
//头插
void SeqListPushFront(SList* sl, SLDataType x){
	assert(sl);
	CheckCapacity(sl);
	for (int i = sl->size; i > 0; i--){
		sl->array[i] = sl->array[i - 1];
	}
	sl->array[0] = x;
	sl->size++;
}
//头删
void SeqListPopFront(SList* sl){
	assert(sl);
	assert(sl->size > 0);
	for (int i = 1; i < sl->size; i++){
		sl->array[i - 1] = sl->array[i];
	}
	sl->size--;
}
//打印
void SeqListPrint(SList* sl){
	assert(sl);
	for (int i = 0; i < sl->size; i++){
		printf("%d ", sl->array[i]);
	}
	printf("\n");
}
//查找
int SeqListFind(SList* sl, SLDataType x)
{
	assert(sl);
	for (int i = 0; i < sl->size; i++){
		if (sl->array[i] == x){
			return i;
		}
	}
	return -1;
}
//定点插入
void SeqListInsert(SList* sl, int pos, SLDataType x){
	assert(sl);
	assert((pos >= 0) && (pos <= sl->size));
	CheckCapacity(sl);
	for (int i = sl->size; i>pos; i--){
		sl->array[i] = sl->array[i - 1];
	}
	sl->array[pos] = x;
	sl->size++;
}
//定点删除
void SeqListErase(SList* sl, int pos){
	assert(sl);
	assert((pos >= 0) && (pos < sl->size));
	for (int i = pos + 1; i < sl->size; i++){
		sl->array[i - 1] = sl->array[i];
	}
	sl->size--;
}
//删除指定数
void SeqListRemove(SList* sl, SLDataType x){
	assert(sl);
	int pos = SeqListFind(sl, x);
	if (pos != -1){
		SeqListErase(sl, pos);
	}
}
//修改
void SeqListModify(SList* sl, int pos, SLDataType x){
	assert(sl);
	assert((pos >= 0) && (pos < sl->size));
	sl->array[pos] = x;
}
//冒泡排序
void SeqListBubbleSort(SList* sl){
	assert(sl);
	for (int i = 1; i < sl->size; i++){
		int out = 1;
		for (int j = 0; j < sl->size - i; j++){
			if (sl->array[j] > sl->array[j + 1]){
				int t = sl->array[j];
				sl->array[j] = sl->array[j + 1];
				sl->array[j + 1] = t;
				out = 0;
			}
		}
		if (out == 1){
			return;
		}
	}
}
//二分法查找
int SeqListBinaryfind(SList* sl, SLDataType x){
	assert(sl);
	int left = 0;
	int right = sl->size - 1;
	int mid;
	while (left <= right){
		mid = (right - left) / 2 + left;
		if (x < sl->array[mid]){
			right = mid - 1;
		}
		else if (x > sl->array[mid]){
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
//删除所有指定数
void SeqListRemoveAll(SList* sl, SLDataType x){
	assert(sl);
	for (int i = 0; i < sl->size; i++){
		if (sl->array[i] == x){
			SeqListErase(sl, i);
		}
	}
}
