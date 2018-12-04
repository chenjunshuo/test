#include <stdio.h>

#if 0
//输入一个链表，输出该链表中倒数第k个结点。
typedef struct ListNode {
int val;
struct ListNode *next;
}ListNode;
ListNode* FindKthToTail(ListNode* pListHead, unsigned int k){
	ListNode* r = pListHead;
	ListNode* l = pListHead;
	while (k-- &&  r != NULL){
		r = r->next;
	}
	while (r != NULL){
		l = l->next;
		r = r->next;
	}
	if (k > 0){
		return NULL;
	}
	return l;
}
#endif

#if 0
//编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前
typedef struct listnode {
	int val;
	struct listnode *next;
}ListNode;
ListNode* partition(ListNode* pHead, int x) {
	ListNode* last = pHead;
	ListNode* p0 = NULL;
	ListNode* p1 = pHead;
	ListNode* newhead = pHead;
	int len = 1;
	while (last->next != NULL){
		last = last->next;
		len++;
	}
	while (len != 0){
		if (p1->val >= x){
			last->next = p1;
			last = p1;
			if (p0 != NULL){
				p0->next = p1->next;
				p1 = p0->next;
			}
			else{
				newhead = last->next;
				p1 = newhead;
			}
			last->next = NULL;
		}
		else{
			p0 = p1;
			p1 = p1->next;
		}
		len--;
	}
	return newhead;
	//未通过：空间复杂度高  消耗内存过大
	//ListNode* lt = NULL;
	//ListNode* ltTail = NULL;
	//ListNode* gt = NULL;
	//ListNode* gtTail = NULL;
	//ListNode* cur = pHead;
	//while (cur != NULL){
	//	if (cur->val < x){
	//		if (lt == NULL){
	//			lt = ltTail = cur;
	//		}
	//		else{
	//			ltTail->next = cur;
	//			ltTail = ltTail->next;
	//		}
	//	}
	//	else{
	//		if (gt == NULL){
	//			gt = gtTail = cur;
	//		}
	//		else{
	//			gtTail->next = cur;
	//			gtTail = gtTail->next;
	//		}
	//	}
	//	cur = cur->next;
	//}
	//if (lt == NULL){
	//	return gt;
	//}
	//else{
	//	ltTail->next = gt;
	//	return lt;
	//}
}

#endif

#if 0
//反转一个单链表
struct ListNode {
	int val;
    struct ListNode *next;
};
/*
链表反转——
NULL  1 --> 2 --> 3 --> 4 --> 5 --> NULL
p1    p2    p3
循环体{
    p2->next = p1
    p1 = p2;   p2 = p3;   p3 = p3->next;
}
结束条件：p3 == NULL
*/
struct ListNode* reverseList(struct ListNode* head) {
	if (head == NULL){
		return NULL;
	}
	struct ListNode* p1 = NULL;
	struct ListNode* p2 = head;
	struct ListNode* p3 = head->next;
	while (p3 != NULL){
		p2->next = p1;
		p1 = p2;
		p2 = p3;
		p3 = p3->next;
	}
	p2->next = p1;
	return p2;
}
#endif

#if 0
//请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点，你将只被给定要求被删除的节点。
//1 -->2 -->3 --> 4--> NULL
//          node    
//没有上一个节点，所以可以将下一个节点进行复制，然后删除原本的下一个节点
struct ListNode {
    int val;
    struct ListNode *next;
};

void deleteNode(struct ListNode* node) {
	node->val = node->next->val;
	node->next = node->next->next;
}
#endif

#if 1
//输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。

typedef struct ListNode {
	int val;
	struct ListNode *next;
}ListNode;
//时间复杂度太高
ListNode* Merge(ListNode* l1, ListNode* l2){
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
	return r;
}

ListNode* Merge(ListNode* l1, ListNode* l2){
	if (l1 == NULL){
		return l2;
	}
	if (l2 == NULL){
		return l1;
	}
	struct ListNode* ret = l1->val<l2->val ? l1 : l2;
	struct ListNode* r = l1->val<l2->val ? l2 : l1;
	struct ListNode* f0 = ret;
	struct ListNode* f1 = ret->next;
	while (f1 != NULL){
		if (f1->val <= r->val){
			f1 = f0;
			f1 = f1->next;
		}
		else{
			struct ListNode* tmp = r->next;
			f0->next = r;
			f0 = r;
			r->next = f1;
			r = tmp;
			if (r == NULL){
				break;
			}
		}
	}
	if (r != NULL){
		f1 = r;
	}
	return ret;
}
#endif