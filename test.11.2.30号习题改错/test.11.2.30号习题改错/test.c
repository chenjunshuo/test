#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h> 

//1.调整数组使奇数全部都位于偶数前面。 
//题目： 
//输入一个整数数组，实现一个函数， 
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分， 
//所有偶数位于数组的后半部分。
//
//void my_rand(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((arr[left]%2 != 0) && (left < right))
//		{
//			left++;
//		}
//		while ((arr[right]%2 == 1) && (left < right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//
////void my_rand(int *p, int sz)
////{
////	int i = 0;
////	int j = 0;
////	for (i = 0; i<sz; i++)
////	{
////		if ((*(p + i) & 1) == 0)//找到第一个偶数
////		{
////			for (j = i + 1; j<sz; j++)
////			{
////				if ((*(p + j) & 1) == 1)//找都偶数后面的第一个奇数
////				{
////					int tmp = *(p + i);//交换两数位置
////					*(p + i) = *(p + j);
////					*(p + j) = tmp;
////				}
////			}
////		}
////	}
////}
//
//int main()
//{
//	int arr[] = { 1, 4, 5, 2, 6, 8, 7, 9, 3, 11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	my_rand(arr, sz);
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d,", arr[i]);
//	}
//	printf("\n");
//	system("Pause");
//	return 0;
//}

//2.杨氏矩阵 
//有一个二维数组. 
//数组的每行从左到右是递增的，每列从上到下是递增的. 
//在这样的数组中查找一个数字是否存在。 
//时间复杂度小于O(N); 
//数组： 
//1 2 3      1 3 4       1 2 3 
//2 3 4      2 4 5       4 5 6 
//3 4 5      4 5 6       7 8 9

int search(int arr[3][3], int row, int col, int key, int *x, int *y)
{
	//从左下角开始找，key大则在本行向后找，
	//key小则向上找，若本列没有则没有
	int i = row - 1;
	int j = 0;
	while ((i >= 0) && (j < col))
	{
		if (key < arr[i][j])
			i--;
		else if (key > arr[i][j])
			j++;
		else
		{
			*x = i + 1;
			*y = j + 1;
			return 1;
		}
	}
	return 0;
}

int search2(int arr[3][3], int row, int col, int key, int *x, int *y)
{
	//从右上角开始找，key大则调到下一行，
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
		{
			*x = i + 1;
			*y = j + 1;
			return 1;
		}
	}
	return 0;
}
//用递归 从右上角开始找
int search3(int arr[3][3], int row, int col, int key, int x, int y, int *rx, int *ry)
{
	if ((x >= row) || (y < 0))
	{
		*rx = -1;
		*ry = -1;
		return 0;
	}
	if (arr[x][y] == key)
	{
		*rx = x + 1;
		*ry = y + 1;
		return 1;
	}
	else if (arr[x][y] > key)
	{
		search3(arr, row, col, key, x, y - 1, rx, ry);
	}
	else
	{
		search3(arr, row, col, key, x + 1, y, rx, ry);
	}
}
//用递归从左下角开始找
int search4(int arr[3][3], int row, int col, int key, int x, int y, int *rx, int *ry)
{
	if ((y >= col) || (x < 0))
	{
		*rx = -1;
		*ry = -1;
		return 0;
	}
	if (arr[x][y] == key)
	{
		*rx = x + 1;
		*ry = y + 1;
		return 1;
	}
	else if (arr[x][y] > key)
	{
		search4(arr, row, col, key, x - 1, y, rx, ry);
	}
	else
	{
		search4(arr, row, col, key, x, y + 1, rx, ry);
	}
}

int main()
{
	int ret = 0;
	int arr[3][3] = { { 1, 3, 4 }, { 2, 4, 5 }, { 4, 5, 6 } };
	int key = 0;
	int x = 0;
	int y = 0;
	printf("1,3,4\n2,4,5\n4,5,6\n");
	printf("key = ");
	scanf("%d", &key);
	ret = search(arr, 3, 3, key, &x, &y);
	if (ret == 1)
		printf("找到了,其中一个位于%d,%d\n", x, y);
	else
		printf("没找到\n");
	ret = search2(arr, 3, 3, key, &x, &y);
	if (ret == 1)
		printf("找到了,其中一个位于%d,%d\n", x, y);
	else
		printf("没找到\n");
	search3(arr, 3, 3, key, 0, 2, &x, &y);
	printf("%d,%d\n", x, y);
	search4(arr, 3, 3, key, 2, 0, &x, &y);
	printf("%d,%d\n", x, y);
	system("Pause");
	return 0;
}


////4. 有一个字符数组的内容为:"student a am i", 
////请你将数组的内容改为"i am a student". 
////要求： 
////不能使用库函数。 
////只能开辟有限个空间（空间个数和字符串的长度无关）。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////求字符串长度函数
//int my_strlen(char *p)
//{
//	int n = 0;
//	while (*p)
//	{
//		n++;
//		p++;
//	}
//	return n;
//}
////逆转字符串函数
//void reverse(char *left, char *right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////逆转语句函数
//void change(char *arr)
//{
//	char *cur_start = arr;
//
//	//第一步：整体逆转
//	reverse(arr, arr + my_strlen(arr) - 1);
//
//	//第二部：以空格分割的子串逆转
//	while (*cur_start)
//	{
//		char *start = cur_start;//保存头指针位置
//		//   头指针    尾指针
//		while ((*cur_start != ' ') && (*cur_start != '\0'))
//		{    // 当遇到' '和 '\0'时 确认尾指针的位置
//			cur_start++;
//		}
//		reverse(start, cur_start - 1);//逆转子串
//		if (*cur_start == ' ')
//		{
//			cur_start++;//如果此时尾指针中内容是' '则++作为下一次的头指针
//		}               //如果是'\0'则不作处理 跳出while循环
//	}
//}
//
//int main()
//{
//	//char arr[] = "student a am i";
//	char arr[50] = { 0 };
//	gets(arr);
//	printf("%s\n", arr);
//	change(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}