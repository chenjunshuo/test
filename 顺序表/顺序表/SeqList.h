#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;
//˳���Ķ�̬�洢
typedef struct{
	SLDataType* array; //��̬��������ռ�
	int size;       //��Ч���ݵĸ���
	int capicity;   //�������Ĵ�С
}SList;
//��ʼ��˳���
void SeqListInit(SList* sl, int capicity){
	assert(sl);
	assert(capicity != 0);
	sl->capicity = capicity;
	sl->array = (SLDataType *)malloc(sizeof(SLDataType) * sl->capicity);
	sl->size = 0;
	assert(sl->array);
}
//����˳���
void SeqListDestory(SList* sl){
	assert(sl);
	free(sl->array);
	sl->size = 0;
	sl->capicity = 0;
}
//����
void CheckCapacity(SList* sl){
	assert(sl);
	if (sl->size == sl->capicity){
		sl->capicity *= 2;
		realloc(sl->array, sizeof(SLDataType)* sl->capicity);
	}
}
//β��
void SeqListPushBack(SList* sl, SLDataType x){
	assert(sl);
	CheckCapacity(sl);
	sl->array[sl->size] = x;
	sl->size++;
}
//βɾ
void SeqListPopBack(SList* sl){
	assert(sl);
	assert(sl->size > 0);
	sl->size--;
}
//ͷ��
void SeqListPushFront(SList* sl, SLDataType x){
	assert(sl);
	CheckCapacity(sl);
	for (int i = sl->size; i > 0; i--){
		sl->array[i] = sl->array[i - 1];
	}
	sl->array[0] = x;
	sl->size++;
}
//ͷɾ
void SeqListPopFront(SList* sl){
	assert(sl);
	assert(sl->size > 0);
	for (int i = 1; i < sl->size; i++){
		sl->array[i - 1] = sl->array[i];
	}
	sl->size--;
}
//��ӡ
void SeqListPrint(SList* sl){
	assert(sl);
	for (int i = 0; i < sl->size; i++){
		printf("%d ", sl->array[i]);
	}
	printf("\n");
}
//����
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
//�������
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
//����ɾ��
void SeqListErase(SList* sl, int pos){
	assert(sl);
	assert((pos >= 0) && (pos < sl->size));
	for (int i = pos + 1; i < sl->size; i++){
		sl->array[i - 1] = sl->array[i];
	}
	sl->size--;
}
//ɾ��ָ����
void SeqListRemove(SList* sl, SLDataType x){
	assert(sl);
	int pos = SeqListFind(sl, x);
	if (pos != -1){
		SeqListErase(sl, pos);
	}
}
//�޸�
void SeqListModify(SList* sl, int pos, SLDataType x){
	assert(sl);
	assert((pos >= 0) && (pos < sl->size));
	sl->array[pos] = x;
}
//ð������
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
//���ַ�����
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
//ɾ������ָ����
void SeqListRemoveAll(SList* sl, SLDataType x){
	assert(sl);
	for (int i = 0; i < sl->size; i++){
		if (sl->array[i] == x){
			SeqListErase(sl, i);
		}
	}
}
