//3.���ʵ�֣�һ��������ֻ��һ�����ֳ�����һ�Ρ�
//�����������ֶ��ǳɶԳ��ֵġ� 
//���ҳ�������֡���ʹ��λ���㣩
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
//	//������򣺶�Ӧλ��1�ĸ�����������ʱ ���Ϊ1
//	//          ��Ӧλ��1�ĸ�����ż����ʱ ���Ϊ0
//	//
//	//������ͬ���� ���Ľ����ȫ0
//	//һ������0���Ľ����������
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
//	printf("\nֻ����һ�ε��ǣ�%d\n",find(arr,sz));
//
//	return 0;
//}


//4. ��һ���ַ����������Ϊ:"student a am i", 
//���㽫��������ݸ�Ϊ"i am a student". 
//Ҫ�� 
//����ʹ�ÿ⺯���� 
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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

	//��һ����������ת
	reverse(arr, arr + my_strlen(arr) - 1);

    //�ڶ������Կո�ָ���Ӵ���ת
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