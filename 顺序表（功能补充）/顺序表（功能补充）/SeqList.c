#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
//初始化
void SeqListInit(SeqList* sl, size_t capacity){
	assert(sl);
	assert(capacity);
	sl->capacity = capacity;
	sl->size = 0;
	sl->array = (SLDataType*)malloc(sizeof(SLDataType)*sl->capacity);
	assert(sl->array);
}
//销毁
void SeqListDestory(SeqList* sl){
	assert(sl);
	free(sl->array);
	sl->array = NULL;
	sl->capacity = sl->size = 0;
}
//扩容
void CheckCapacity(SeqList* sl){
	if (sl->size < sl->capacity)
	{
		return;
	}
	//sl->capacity *= 2;
	//realloc(sl->array, sizeof(SLDataType)*sl->capacity);

	//1.申请新内存
	sl->capacity *= 2;
	SLDataType* new = (SLDataType*)malloc(sizeof(SLDataType)*sl->capacity);
	//2.搬运数组
	for (size_t i = 0; i < sl->size; i++)
	{
		new[i] = sl->array[i];
	}
	//3.释放旧地址
	free(sl->array);
	sl->array = NULL;
	//4.保存新地址
	sl->array = new;

}
//尾插
void SeqListPushBack(SeqList* sl, SLDataType x){
	assert(sl);
	CheckCapacity(sl);
	sl->array[sl->size] = x;
	sl->size++;
}
//尾删
void SeqListPopBack(SeqList* sl){
	assert(sl);
	assert(sl->size);
	sl->size--;
}
//头插
void SeqListPushFront(SeqList* sl, SLDataType x){
	assert(sl);
	CheckCapacity(sl);
	for (int i = sl->size; i > 0; i--)
	{
		sl->array[i] = sl->array[i - 1];
	}
	sl->array[0] = x;
	sl->size++;
}
//头删
void SeqListPopFront(SeqList* sl){
	assert(sl);
	assert(sl->size);
	for (size_t i = 1; i < sl->size; i++)
	{
		sl->array[i - 1] = sl->array[i];
	}
	sl->size--;
}
//打印
void SeqListPrint(SeqList* sl){
	assert(sl);
	for (size_t i = 0; i < sl->size; i++)
	{
		printf("%d ", sl->array[i]);
	}
	printf("\n");
}
//查找
int SeqListFind(SeqList* sl, SLDataType x)
{
	assert(sl);
	for (size_t i = 0; i < sl->size; i++)
	{
		if (x == sl->array[i])
			return i;
	}
	return -1;

}
//定点插入
void SeqListInsert(SeqList* sl, size_t pos, SLDataType x){
	assert(sl);
	assert((pos >= 0) && (pos <= sl->size));
	CheckCapacity(sl);

	for (size_t i = sl->size; i > pos; i--)
	{
		sl->array[i] = sl->array[i - 1];
	}
	sl->array[pos] = x;
	sl->size++;
}
//定点删除
void SeqListErase(SeqList* sl, size_t pos){
	assert(sl);
	assert((pos >= 0) && (pos < sl->size));
	for (size_t i = pos; i < sl->size - 1; i++)
	{
		sl->array[i] = sl->array[i + 1];
	}
	sl->size--;
}
//删除指定数
void SeqListRemove(SeqList* sl, SLDataType x){
	assert(sl);
	int pos = SeqListFind(sl, x);
	if (pos != -1)
	{
		SeqListErase(sl, pos);
	}

}
//修改
void SeqListModify(SeqList* sl, size_t pos, SLDataType x){
	assert(sl);
	assert((pos >= 0) && (pos < sl->size));
	sl->array[pos] = x;

}


//冒泡排序
void SeqListBubbleSort(SeqList* sl){
	assert(sl);
	for (size_t i = 0; i < sl->size - 1; i++)
	{
		for (size_t j = 0; j < sl->size - 1 - i; j++)
		{
			if (sl->array[j] > sl->array[j + 1])
			{
				int tmp = sl->array[j];
				sl->array[j] = sl->array[j + 1];
				sl->array[j + 1] = tmp;
			}
		}
	}
}
//二分法查找
int SeqListBinaryfind(SeqList* sl, SLDataType x)
{
	assert(sl);
	int left = 0;
	int right = sl->size - 1;
	int mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (x < sl->array[mid])
		{
			right = mid - 1;
		}
		else if (x > sl->array[mid])
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
//删除所有指定数
void SeqListRemoveAll(SeqList* sl, SLDataType x){
	assert(sl);
	for (int i = sl->size - 1; i >= 0; i--)
	{
		if (sl->array[i] == x)
		{
			sl->array[i] = sl->array[sl->size - 1];
			sl->size--;
		}
	}
}



//清空缓存
void clean()
{
	char ch;
	while ((ch = getchar() != '\n') && (ch != EOF));
}