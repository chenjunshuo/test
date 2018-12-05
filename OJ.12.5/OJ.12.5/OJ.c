#include <stdio.h>
#if 0
//给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点
typedef struct ListNode {
    int val;
    struct ListNode *next;
}ListNode;

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	ListNode* l = head;
	ListNode* r = head;
	//找倒数第n个节点
	while (n-- &&  r != NULL){
		r = r->next;
	}
	while (r != NULL){
		l = l->next;
		r = r->next;
	}
	//n>总结点数，返回NULL指针；
	if (n > 0){
		return NULL;
	}
	//删除操作
	//如果不是最后一个节点，将目标节点复制成后一个节点，然后删除后一个节点
	//此方法不需要再找前一个节点！
	else if (l->next != NULL){
		l->val = l->next->val;
		l->next = l->next->next;
		return head;
	}
	//如果目标是最后一个节点则进行一次尾删操作，时间复杂度为O(N)；
	else{
		l = NULL;
		r = head;
		while (r->next != NULL){
			l = r;
			r = r->next;
		}
		if (l == NULL){
			return NULL;
		}
		else{
			l->next = NULL;
		}
		return head;
	}
}

#endif
#if 0
//请判断一个链表是否为回文链表。
struct ListNode {
    int val;
    struct ListNode *next;
};

char isPalindrome(struct ListNode* head) {
	struct ListNode* l1 = head;
	struct ListNode* l2 = head;
	while (l1 != NULL && l2 != NULL){
		l1 = l1->next;
		if (l1 != NULL){
			l1 = l1->next;
			l2 = l2->next;
		}
	}
	//l2为中间节点;
	if (l2 == NULL){
		return NULL;
	}
	struct ListNode* p1 = NULL;
	struct ListNode* p2 = l2;
	struct ListNode* p3 = l2->next;
	while (p3 != NULL){
		p2->next = p1;
		p1 = p2;
		p2 = p3;
		p3 = p3->next;
	}
	p2->next = p1;
	//p2为逆置后的
	while (head != NULL){
		if (p2->val == head->val){
			head = head->next;
			p2 = p2->next;
		}
		else{
			return 0;
		}
	}
	return 1;

}
#endif

#if 0
//给定一个链表，判断链表中是否有环
struct ListNode {
    int val;
    struct ListNode *next;
};

int hasCycle(struct ListNode *head) {
	struct ListNode *slow = head;
	struct ListNode *fast = head;
	do{
		if (fast == NULL){
			break;
		}
		fast = fast->next;
		if (fast == NULL){
			break;
		}
		fast = fast->next;
		slow = slow->next;
	} while (fast != slow);
	if (fast == NULL){
		return 0;
	}
	else
		return 1;
}
#endif

#if 1
//给定一个链表，每个节点包含一个额外增加的随机指针，该指针可以指向链表中的任何节点或空节点。

struct RandomListNode {
    int label;
    struct RandomListNode *next;
    struct RandomListNode *random;
};

struct RandomListNode *copyRandomList(struct RandomListNode *head) {

}

#endif