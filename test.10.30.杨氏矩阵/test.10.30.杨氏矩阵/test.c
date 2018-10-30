//2.杨氏矩阵 
//有一个二维数组. 
//数组的每行从左到右是递增的，每列从上到下是递增的. 
//在这样的数组中查找一个数字是否存在。 
//时间复杂度小于O(N); 
//数组： 
//1 2 3      1 3 4       1 2 3 
//2 3 4      2 4 5       4 5 6 
//3 4 5      4 5 6       7 8 9
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int search(int arr[3][3],int row,int col,int key)
{
	//从每一行最后一个元素开始找，key大则调到下一行，
	//key小则在本行向前找，若本行没有则没有
	int i = 0;
    int j = col - 1;
    while ((i < row) && (j >= 0))
    {
        if (key>arr[i][j])
            i++;
        else if (key < arr[i][j])
            j--;
        else
            return 1;
	}
	return 0;
}

int main()
{
	int ret = 0;
	int arr[3][3] =  {{1,3,4},{2,4,5},{4,5,6}};
	int key = 0;
	printf("key = ");
	scanf("%d",&key);
	ret = search(arr,3,3,key);
	if(ret == 1)
		printf("找到了\n");
	else
		printf("没找到\n");
	return 0;
}