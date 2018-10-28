//3.编程实现：一组数据中只有一个数字出现了一次。
//其他所有数字都是成对出现的。 
//请找出这个数字。（使用位运算）
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int find(int arr[],int sz)
//{
//	int i = 0;
//	int n = arr[0];
//	for(i=1; i<sz; i++)
//	{
//		n = n ^ arr[i];
//	}
//	//连续异或：对应位上1的个数是奇数个时 结果为1
//	//          对应位上1的个数是偶数个时 结果为0
//	//
//	//两个相同的数 异或的结果是全0
//	//一个数与0异或的结果是他本身
//	return n;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,2,3,4,6,1,5};
//	int i = 0;
//	int sz =sizeof(arr) / sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n只出现一次的是：%d\n",find(arr,sz));
//
//	return 0;
//}


//4. 有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student". 
//要求： 
//不能使用库函数。 
//只能开辟有限个空间（空间个数和字符串的长度无关）。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int my_strlen(char *p)
{
	int n = 0;
	while(*p)
	{
		n++;
		p++;
	}
	return n;
}

void reverse(char *left, char *right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void change(char *arr)
{
	char *cur_start = arr;

	//第一步：整体逆转
	reverse(arr, arr + my_strlen(arr) - 1);

    //第二部：以空格分割的子串逆转
	while (* cur_start)
	{
		char *start = cur_start;
		while((* cur_start != ' ') && (* cur_start != '\0'))
		{
			cur_start++;
		}
		reverse(start, cur_start -1);
		if(*cur_start == ' ')
		{
			cur_start++;
		}
	}
 //   while (*arr)
 //   {
 //       char *str = arr;
 //       while (*arr!='\0' && *arr != ' ')
 //	    {
 //           arr++;
 //  	}
 //       reverse(str, arr - 1);
 //       if (*arr == ' ')
 //           arr++;
 //   }

}

int main()
{
	//char arr[] = "student a am i";
	char arr[50] = {0};
	gets(arr);
	printf("%s\n",arr);
	change(arr);
	printf("%s\n",arr);

	return 0;
}