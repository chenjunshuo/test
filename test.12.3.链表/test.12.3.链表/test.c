#include <stdio.h>
/*
����ת����
NULL  1 --> 2 --> 3 --> 4 --> 5 --> NULL
p1    p2    p3

ѭ����{
p2->next = p1
p1 = p2;   p2 = p3;   p3 = p3->next;
}
����������
p3 == NULL 

*/
#if 0
typedef struct ListNode {
	int val;
	struct ListNode *next;
	
}ListNode;

ListNode* middleNode2(ListNode* head){ xxx
	ListNode* p1 = head;
	ListNode* p2 = head;
	while (p1 != NULL){
		p1 = p1->next;
		p2 = p2->next;
		if (p1){
			p1 = p1->next;
		}
	}
	return p2;
}

ListNode* middleNode(ListNode* head) {
	int len = 0;
	ListNode* cur = head;
	while (cur != NULL){
		len++;
		cur = cur->next;
	}
	len /= 2;
	cur = head;
	while (len--){
		cur = cur->next;
	}
	return cur;
}
#endif

#if 0
//Definition for singly-linked list.
struct ListNode {
	int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	
}
#endif


#if 0
//����һ����������ɾ�����к����ظ����ֵĽڵ㣬ֻ����ԭʼ������ û���ظ����� �����֡�
// Definition for singly-linked list.
typedef struct ListNode {
     int val;
     struct ListNode *next;
} ListNode;

ListNode* deleteDuplicates(ListNode* head) {
	if (head == NULL){
		return NULL;
	}
	ListNode* p0 = NULL;
	ListNode* p1 = head;
	ListNode* p2 = head;
	while (p2 != NULL){
		if (p1->val != p2->val){
			p0 = p1;
			p1 = p2;
			p2 = p2->next;
		}
		else{
			while (p2 != NULL && p2->val == p1->val){
				p2 = p2->next;
			}
			if (p2 == NULL){
				if (p0 != NULL){
					p0->next = p2;
				}
				else{
					return NULL;
				}
				break;
			}
			if (p0 != NULL){
				p0->next = p2;
			}
			else{
				head = p2;
			}
			p1 = p2;
			p2 = p2->next;
		}
	}
}
#endif

#if 0
//��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
 struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	if (l1 == NULL){
		return l2;
	}
	if (l2 == NULL){
		return l1;
	}
	struct ListNode* p1 = l1;
	struct ListNode* p2 = l2;
	struct ListNode* r = NULL;
	struct ListNode* rlast = NULL;
	while (p1 != NULL && p2 != NULL){
		if (p1->val < p2->val){
			if (rlast == NULL){
				r = rlast = p1;
			}
			rlast->next = p1;
			rlast = p1;
			p1 = p1->next;
		}
		else{
			if (rlast == NULL){
				r = rlast = p2;
			}
			rlast->next = p2;
			rlast = p2;
			p2 = p2->next;
		}
	}
	if (p1 == NULL){
		rlast = p2;
	}
	else{
		rlast = p1;
	}
}
#endif

#if 1
//6.��д���룬�Ը���ֵxΪ��׼������ָ�������֣�����С��x�Ľ�����ڴ��ڻ����x�Ľ��֮ǰ
typedef struct listnode {
	int val;
	struct listnode *next;
}ListNode;
ListNode* partition(ListNode* pHead, int x) {
	ListNode* lt = NULL;
	ListNode* ltTail = NULL;
	ListNode* eq = NULL;
	ListNode* eqTail = NULL;
	ListNode* gt = NULL;
	ListNode* gtTail = NULL;
	ListNode* cur = pHead;
	while (cur != NULL){
		if (cur->val < x){
			if (lt == NULL){
				lt = ltTail = cur;
			}
			else{
				ltTail->next = cur;
				ltTail = ltTail->next;
			}
		}
		else if (cur->val == x){
			if (eq == NULL){
				eq = eqTail = cur;
			}
			else{
				eqTail->next = cur;
				eqTail = eqTail->next;
			}
		}
		else{
			if (gt == NULL){
				gt = gtTail = cur;
			}
			else{
				gtTail->next = cur;
				gtTail = gtTail->next;
			}
		}
		cur = cur->next;
	}
}
#endif

#if 0
#endif