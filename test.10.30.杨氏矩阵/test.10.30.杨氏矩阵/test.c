//2.���Ͼ��� 
//��һ����ά����. 
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����. 
//�������������в���һ�������Ƿ���ڡ� 
//ʱ�临�Ӷ�С��O(N); 
//���飺 
//1 2 3      1 3 4       1 2 3 
//2 3 4      2 4 5       4 5 6 
//3 4 5      4 5 6       7 8 9
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int search(int arr[3][3],int row,int col,int key)
{
	//��ÿһ�����һ��Ԫ�ؿ�ʼ�ң�key���������һ�У�
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
		printf("�ҵ���\n");
	else
		printf("û�ҵ�\n");
	return 0;
}