#include <stdio.h>
#include <stdlib.h>
#if 0
//给定两个二叉树，编写一个函数来检验它们是否相同
//如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
	if (p == NULL && q == NULL){
		return true;
	}
	if (p == NULL || q == NULL){
		return false;
	}
	return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
#endif
#if 0
//给定一个二叉树，找出其最大深度。
//二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};
int maxDepth(struct TreeNode* root) {
	if (root == 0){
		return 0;
	}
	int left = maxDepth(root->left);
	int right = maxDepth(root->right);
	int max = left > right ? left : right;
	return 1 + max;
}
#endif

#if 0
//给定一个二叉树，检查它是否是镜像对称的。
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
bool isMirrorTree(struct TreeNode* p, struct TreeNode* q){
	if (p == NULL && q == NULL){
		return true;
	}
	if (p == NULL || q == NULL){
		return false;
	}
	return (p->val == q->val) && isMirrorTree(p->left, q->right) && isMirrorTree(p->right, q->left);
}
bool isSymmetric(struct TreeNode* root) {
	if (root == NULL){
		return true;
	}
	return isMirrorTree(root->left, root->right);
}
#endif
#if 1
//给定一个二叉树，返回它的 前序 遍历
 struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };
 typedef struct SList{
	int* array;
	int size;
 }SList;
 SList list{(int*)malloc(sizeof(int)* 100000),0};
 int* preorderTraversal(struct TreeNode* root, int* returnSize) {
	 if (root == NULL){
		 return NULL;
	 }
	 list.array[list.size] = root->val;
	 list.size++;
	 preorderTraversal(root->left, returnSize);
	 preorderTraversal(root->right, returnSize);
	 *returnSize = list.size;
	 return list.array;
 }
#endif
#if 1
#endif