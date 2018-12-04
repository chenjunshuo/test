typedef struct SlistNode{
	int data;
	SlistNode* next;
}SlistNode;

typedef struct Slist{
	SlistNode* first;
}Slist;

void Swap(SlistNode* p1, SlistNode* p2){
	SlistNode* cur = p1->next;
	p1->next = p2->next;
	p2->next = cur;
	cur = p1->next->next;
	p1->next->next = p2->next->next;
	p2->next->next = cur;
}