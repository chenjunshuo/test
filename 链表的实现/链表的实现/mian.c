#include "SList.h"

SList list;

void test(){
	//SListPushFront(&list, 3);
	//SListPushFront(&list, 2);
	//SListPushFront(&list, 1);
	//SListPrint(&list);
	//SListPopFront(&list);
	//SListPrint(&list);

	//SListPushBack(&list, 1);
	//SListPushBack(&list, 2);
	//SListPushBack(&list, 3);
	//SListPrint(&list);
	//SListPopBack(&list);
	//SListPrint(&list);
	//SListPopBack(&list);
	//SListPrint(&list);
	//SListPopBack(&list);
	//SListPrint(&list);

	SListPushBack(&list, 1);
	SListPushBack(&list, 2);
	SListPushBack(&list, 3);
	SListPrint(&list);
	SListInsertAfter(SListFind(&list, 1), 10);
	SListPrint(&list);
	SListInsertAfter(SListFind(&list, 2), 20);
	SListPrint(&list);
	SListEraseAfter(SListFind(&list, 1));
	SListPrint(&list);
	SListEraseAfter(SListFind(&list, 2));
	SListPrint(&list);
	SListRemove(&list, 1);
	SListPrint(&list);
	SListRemove(&list, 3);
	SListPrint(&list);

	SListPushBack(&list, 6);
	SListPushBack(&list, 8);
	SListPushBack(&list, 7);
	SListPrint(&list);
	SListDestroy(&list);
	SListPrint(&list);

}

int main(){
	test();
	system("Pause");
	return 0;
}