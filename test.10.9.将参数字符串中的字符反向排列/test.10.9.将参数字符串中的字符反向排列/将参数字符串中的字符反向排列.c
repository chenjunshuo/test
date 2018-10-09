//4. 编写一个函数reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。 
//要求：不能使用C函数库中的字符串操作函数。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void reverse_string(char arr[], int left, int right)
{
	if(left<right)
	{
		char i = arr[left];
		arr[left] = arr[right];
		arr[right] = i;
		left++;
		right--;
		reverse_string(arr,left,right);
	}

}

int size(char arr[])
{
	int count = 0;
	int i = 0;
	while(arr[i])
	{
		i++;
		count++;
	}
	return count;
}


int main()
{
	char arr[] = "abcdefg";
	/*int sz = size(arr);*/
	int left = 0;
    int right = size(arr)-1;
	printf("%s\n",arr);
	reverse_string(arr,left,right);
	printf("%s\n",arr);

	return 0;
}

