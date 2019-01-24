#include "SeqList.h"

void test(){
	SList sl;
	SeqListInit(&sl, 5);
	SeqListPushFront(&sl, 5);
	SeqListPushFront(&sl, 4);
	SeqListPushFront(&sl, 3);
	SeqListPushFront(&sl, 2);
	SeqListPushFront(&sl, 1);
	SeqListPrint(&sl);
	SeqListPushBack(&sl, 7);
	SeqListPushBack(&sl, 8);
	SeqListPushBack(&sl, 12);
	SeqListPushBack(&sl, 6);
	SeqListPushBack(&sl, 11);
	SeqListPrint(&sl);
	SeqListPopBack(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
	//printf("找3，结果为：%d\n", SeqListBinaryfind(&sl, 3));
	//printf("找11，结果为：%d\n", SeqListBinaryfind(&sl, 11));
	//printf("找33，结果为：%d\n", SeqListBinaryfind(&sl, 33));
	SeqListBubbleSort(&sl);
	SeqListPrint(&sl);

}
void test2(){
	SList sl;
	SeqListInit(&sl, 5);
	SeqListPushFront(&sl, 5);
	SeqListPushFront(&sl, 4);
	SeqListPushFront(&sl, 3);
	SeqListPushFront(&sl, 2);
	SeqListPushFront(&sl, 1);
	SeqListPushFront(&sl, 3);
	SeqListPushFront(&sl, 4);
	SeqListPushFront(&sl, 3);
	SeqListPushFront(&sl, 6);
	SeqListPushFront(&sl, 9);
	SeqListPrint(&sl);
	//printf("找3，结果为：%d\n", SeqListFind(&sl, 3));
	//printf("找7，结果为：%d\n", SeqListFind(&sl, 7));
	//SeqListInsert(&sl, 0, 0);
	//SeqListInsert(&sl, 1, 0);
	//SeqListInsert(&sl, 5, 0);
	//SeqListErase(&sl, 0);
	//SeqListErase(&sl, 3);
	//SeqListRemove(&sl, 3);
	//SeqListRemove(&sl, 5);
	//SeqListRemove(&sl, 1);
	//SeqListModify(&sl, 0, 1);
	//SeqListModify(&sl, 2, 3);
	//SeqListModify(&sl, 4, 2);

	//SeqListPrint(&sl);
	//SeqListBubbleSort(&sl);
	SeqListRemoveAll(&sl, 3);
	SeqListPrint(&sl);
}
int main(){
	test2();
	system("pause");
	return 0;
}