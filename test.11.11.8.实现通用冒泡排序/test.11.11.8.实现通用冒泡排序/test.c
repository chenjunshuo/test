//8.模仿qsort的功能实现一个通用的冒泡排序
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int int_cmp(const void * p1, const void * p2)
{
	return (*(int *)p1 > *(int *)p2);
}

int char_cmp(const void * p1, const void * p2)
{
	return(*(char*)p1 > *(char*)p2);
}

int cmp_double(const void *p1, const void *p2)
{
    if ((*(double*)p1 - *(double*)p2) >0)
    {
        return 1;
    }
    else
        return 0;
}

void swap(void* p1, void* p2, int size)
{
	int i = 0;
	for(i=0; i<size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for(i=0; i<count-1; i++)
	{
		for(j=0; j<count-i-1; j++)
		{
			if(cmp((char*)base + j*size , (char*)base + (j+1)*size ) > 0)
			{
				swap((char*)base + j*size, (char*)base + (j+1)*size, size);
			}
		}
	}
}

int main()
{
	int arr[] = {1,3,5,7,9,2,4,6,8,0};
	char arr2[] = {'b','a','c','f','d'};
	int i = 0;
	int sz_arr = sizeof(arr)/sizeof(arr[0]);
	int sz_arr2 = sizeof(arr2)/sizeof(arr2[0]);

	bubble(arr, sz_arr, sizeof(int), int_cmp);
	bubble(arr2, sz_arr2, sizeof(char), char_cmp);

	for(i=0; i<sz_arr; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	for(i=0; i<sz_arr2; i++)
	{
		printf("%c ",arr2[i]);
	}
	printf("\n");
	return 0;
}