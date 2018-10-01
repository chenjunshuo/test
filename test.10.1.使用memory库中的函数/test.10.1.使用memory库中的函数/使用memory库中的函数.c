#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[50] = "hello world!";
	char arr2[50] = "junshuo Hello!";
	char arr3[50] = "my name is Chen Junshuo";
	char arr4[50] = "hello Jiang Tao!";
    //将缓存区设置为指定的字符
	//void *memset( void *dest, int c, size_t count );
	printf("Befor:%s\n",arr1);
	memset(arr1 + 6, '*',5 );
    printf("After:%s\n",arr1);

	//在缓冲区之间复制字符
	//void *memcpy( void *dest, const void *src, size_t count );
	printf("Befor:%s\n",arr2);
	memcpy(arr2 + 8,arr1,5);
	printf("After:%s\n",arr2);

	//将一个缓冲区移动到另一个缓冲区
	//void *memmove( void *dest, const void *src, size_t count );
	printf("Befor:%s\n",arr3);//my name is Chen Junshuo
	printf("Befor:%s\n",arr4);//hello Jiang Tao!
	memmove(arr3+11, arr4+6, 12);
	printf("After:%s\n",arr3);//my name is Jiang Tao!
	printf("After:%s\n",memmove(arr4, "bye~~",5));//bye~~  Jiang Tao!

	return 0;
}