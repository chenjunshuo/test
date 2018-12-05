#include <stdio.h>
#if 0
//����һ������ɾ������ĵ����� n ���ڵ㣬���ҷ��������ͷ���
typedef struct ListNode {
    int val;
    struct ListNode *next;
}ListNode;

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	ListNode* l = head;
	ListNode* r = head;
	//�ҵ�����n���ڵ�
	while (n-- &&  r != NULL){
		r = r->next;
	}
	while (r != NULL){
		l = l->next;
		r = r->next;
	}
	//n>�ܽ����������NULLָ�룻
	if (n > 0){
		return NULL;
	}
	//ɾ������
	//����������һ���ڵ㣬��Ŀ��ڵ㸴�Ƴɺ�һ���ڵ㣬Ȼ��ɾ����һ���ڵ�
	//�˷�������Ҫ����ǰһ���ڵ㣡
	else if (l->next != NULL){
		l->val = l->next->val;
		l->next = l->next->next;
		return head;
	}
	//���Ŀ�������һ���ڵ������һ��βɾ������ʱ�临�Ӷ�ΪO(N)��
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
//���ж�һ�������Ƿ�Ϊ��������
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
	//l2Ϊ�м�ڵ�;
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
	//p2Ϊ���ú��
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
//����һ�������ж��������Ƿ��л�
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
//����һ������ÿ���ڵ����һ���������ӵ����ָ�룬��ָ�����ָ�������е��κνڵ��սڵ㡣

struct RandomListNode {
    int label;
    struct RandomListNode *next;
    struct RandomListNode *random;
};

struct RandomListNode *copyRandomList(struct RandomListNode *head) {

}

#endif