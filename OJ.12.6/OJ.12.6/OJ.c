#include <stdio.h>

#if 1
//����һ����������ɾ�����к����ظ����ֵĽڵ㣬ֻ����ԭʼ������ û���ظ����� �����֡�
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
	if (head == NULL){
		return NULL;
	}
	struct ListNode* p0 = NULL;
	struct ListNode* p1 = head;
	struct ListNode* p2 = head->next;
	struct ListNode* ret = head;
	while (p2 != NULL){
		if (p1->val == p2->val){
			while (p2 != NULL && p1->val == p2->val){
				p2 = p2->next;
			}
			if (p0 == NULL){
				if (p2 == NULL){
					return NULL;
				}
				ret = p2;
			}
			else {
				if (p2 == NULL){
					p0->next = NULL;
					break;
				}
				p0->next = p2;
			}
			p1 = p2;
			p2 = p2->next;
		}
		else{
			p0 = p1;
			p1 = p1->next;
			p2 = p2->next;
		}
	}
	return ret;
}
#endif
#if 0
//����һ����������ɾ�����к����ظ����ֵĽڵ㣬ֻ����ԭʼ������ û���ظ����� �����֡�
struct ListNode {
	int val;
	struct ListNode *next;
};
//�޷���� 1 2 3 3 �������
struct ListNode* deleteDuplicates(struct ListNode* head) {
	if (head == NULL){
		return NULL;
	}
	struct ListNode* p1 = head;
	struct ListNode* p2 = head->next;
	struct ListNode* ret = head;
	while (p2 != NULL){
		if (p1->val == p2->val){
			while (p2 != NULL && p1->val == p2->val){
				p2 = p2->next;
			}
			if (p2 == NULL){
				p1 = NULL;
				break;
			}
			else if (p1 == ret){
				ret = p2;
				p1 = p2;
			}
			else{
				p1->val = p2->val;
				p1->next = p2->next;
			}
			p2 = p2->next;

		}
		else{
			p1 = p1->next;
			p2 = p2->next;
		}
	}
	return ret;
}
#endif

#if 1
//����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�
struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
	if (head == NULL){
		return NULL;
	}
	struct ListNode* p1 = head;
	struct ListNode* p2 = head->next;
	struct ListNode* ret = head;
	while (p2 != NULL){
		if (p1->val == p2->val){
			while (p2->next != NULL && p1->val == p2->next->val){
				p2 = p2->next;
			}
			if (p1 == ret){
				if (p2->next == NULL){
					return p2;
				}
				ret = p2;
			}
			else {
				if (p2->next == NULL){
					p1->next = NULL;
					break;
				}
				p1->next = p2->next;
			}
			p1 = p2;
			p2 = p2->next;
		}
		else{
			p1 = p1->next;
			p2 = p2->next;
		}
	}
	return ret;
}
#endif

#if 1
//����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�
struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
	struct ListNode* h = head;
	struct ListNode* cur = h;
	if (cur == NULL || cur->next == NULL) return cur;
	while (cur)
	{
		struct ListNode* tmp = cur->next;
		if (tmp && cur->val == tmp->val)
		{
			cur->next = tmp->next;
			free(tmp);
			continue;/*�����Ƚ���һ��Ԫ��*/
		}
		cur = cur->next;
	}
	return h;
}
#endif