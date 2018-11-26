#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* array;  //ָ��̬���ٵ�����
	size_t size;        //��Ч���ݸ���
	size_t capacity;    //��̬�ռ��С
}SeqList;


//��ʼ��
void SeqListInit(SeqList* sl, size_t capacity);
//����
void SeqListDestory(SeqList* sl);
//����
void CheckCapacity(SeqList* sl);
//β��
void SeqListPushBack(SeqList* sl, SLDataType x);
//βɾ
void SeqListPopBack(SeqList* sl);
//ͷ��
void SeqListPushFront(SeqList* sl, SLDataType x);
//ͷɾ
void SeqListPopFront(SeqList* sl);
//��ӡ
void SeqListPrint(SeqList* sl);