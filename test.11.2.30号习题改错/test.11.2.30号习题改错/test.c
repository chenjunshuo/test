#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h> 

//1.��������ʹ����ȫ����λ��ż��ǰ�档 
//��Ŀ�� 
//����һ���������飬ʵ��һ�������� 
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣� 
//����ż��λ������ĺ�벿�֡�
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
////		if ((*(p + i) & 1) == 0)//�ҵ���һ��ż��
////		{
////			for (j = i + 1; j<sz; j++)
////			{
////				if ((*(p + j) & 1) == 1)//�Ҷ�ż������ĵ�һ������
////				{
////					int tmp = *(p + i);//��������λ��
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

//2.���Ͼ��� 
//��һ����ά����. 
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����. 
//�������������в���һ�������Ƿ���ڡ� 
//ʱ�临�Ӷ�С��O(N); 
//���飺 
//1 2 3      1 3 4       1 2 3 
//2 3 4      2 4 5       4 5 6 
//3 4 5      4 5 6       7 8 9

int search(int arr[3][3], int row, int col, int key, int *x, int *y)
{
	//�����½ǿ�ʼ�ң�key�����ڱ�������ң�
	//keyС�������ң�������û����û��
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
	//�����Ͻǿ�ʼ�ң�key���������һ�У�
	//keyС���ڱ�����ǰ�ң�������û����û��
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
//�õݹ� �����Ͻǿ�ʼ��
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
//�õݹ�����½ǿ�ʼ��
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
		printf("�ҵ���,����һ��λ��%d,%d\n", x, y);
	else
		printf("û�ҵ�\n");
	ret = search2(arr, 3, 3, key, &x, &y);
	if (ret == 1)
		printf("�ҵ���,����һ��λ��%d,%d\n", x, y);
	else
		printf("û�ҵ�\n");
	search3(arr, 3, 3, key, 0, 2, &x, &y);
	printf("%d,%d\n", x, y);
	search4(arr, 3, 3, key, 2, 0, &x, &y);
	printf("%d,%d\n", x, y);
	system("Pause");
	return 0;
}


////4. ��һ���ַ����������Ϊ:"student a am i", 
////���㽫��������ݸ�Ϊ"i am a student". 
////Ҫ�� 
////����ʹ�ÿ⺯���� 
////ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////���ַ������Ⱥ���
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
////��ת�ַ�������
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
////��ת��亯��
//void change(char *arr)
//{
//	char *cur_start = arr;
//
//	//��һ����������ת
//	reverse(arr, arr + my_strlen(arr) - 1);
//
//	//�ڶ������Կո�ָ���Ӵ���ת
//	while (*cur_start)
//	{
//		char *start = cur_start;//����ͷָ��λ��
//		//   ͷָ��    βָ��
//		while ((*cur_start != ' ') && (*cur_start != '\0'))
//		{    // ������' '�� '\0'ʱ ȷ��βָ���λ��
//			cur_start++;
//		}
//		reverse(start, cur_start - 1);//��ת�Ӵ�
//		if (*cur_start == ' ')
//		{
//			cur_start++;//�����ʱβָ����������' '��++��Ϊ��һ�ε�ͷָ��
//		}               //�����'\0'�������� ����whileѭ��
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