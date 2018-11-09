#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//1.一个数组中只有两个数字是出现一次， 
//其他所有数字都出现了两次。 
//找出这两个数字，编程实现。

//将所有数字进行异或操作，第一个出现1的位置标记为p
//通过p位可以将所有数字分为两类，为0的和为1的
//将两类数字分别进行异或 则得到了两个只出现了一次的数
//int main()
//{
//	int arr[] = {2,8,3,5,4,7,2,5,4,8};
//	//int arr[] = {1,2,3,1};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = 0;
//	int i = 0;
//	int x = 0;
//	int y = 0;
//	int pos = 0;
//
//	for(i=0; i<sz; i++)
//	{
//		ret ^= arr[i];
//	}
//
//	for(i=0; i<32; i++)
//	{
//		if(((ret>>i) & 1 ) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	for(i=0; i<sz; i++)
//	{
//		if(((arr[i] >> pos) & 1) == 1)
//		{
//			x ^= arr[i];
//		}
//		else
//		{
//			y ^= arr[i];
//		}
//	}
//
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	printf("只出现一次的是%d和%d\n",x,y);
//
//	return 0;
//}

//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
//给20元，可以多少汽水。 
//int num_soda(int n)
//{
//	int sum = n;
//	int y = 0;
//	while(n)
//	{
//		if(n % 2 == 1)
//		{
//			y += 1;
//		}
//		sum += (n /= 2);
//	}
//	return sum+(y/2);
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	int y = 0;
//	printf("输入初始资金：");
//	scanf("%d",&m);
//	n = m;
//	sum = n;
//	while(n)
//	{
//		if(n % 2 == 1)
//		{
//			y += 1;
//		}
//		sum += (n /= 2);
//	}
//	sum = sum+(y/2);
//	printf("给%d元，可以喝%d瓶汽水\n",m,sum);
//	return 0;
//}

//3.模拟实现strcpy 
//char* my_strcpy(char *dest, const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(*dest++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[10] = {0};
//	my_strcpy(arr2, arr1);
//	printf("%s\n",my_strcpy(arr2, arr1));
//
//	return 0;
//}


//4.模拟实现strcat
char *my_strcat(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while(*dest)
	{
		dest++;
	}
	while(*dest++ = *src++);
	return ret;
}

int main()
{
	char a[1024] = "tomorrow";
	my_strcat(a,"will be better!");
	printf("%s\n",a);

	return 0;
}