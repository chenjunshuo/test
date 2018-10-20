//3.在屏幕上打印杨辉三角。 
//1 
//1 1 
//1 2 1 
//1 3 3 1 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define Size 20

int main()
{
	int arr[Size][Size] = {0};
	int i = 0;
	int j = 0;

	for(i=0; i<Size; i++)
	{
		for(j=0; j<i; j++)
		{
			if(0 == j || i == j)
			{
				arr[i][j] = 1;
				printf("%-5d ",arr[i][j]);
			}
			else
			{
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
				printf("%-5d ",arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}