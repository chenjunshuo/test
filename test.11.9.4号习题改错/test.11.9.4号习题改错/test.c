#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//1.һ��������ֻ�����������ǳ���һ�Σ� 
//�����������ֶ����������Ρ� 
//�ҳ����������֣����ʵ�֡�

//���������ֽ�������������һ������1��λ�ñ��Ϊp
//ͨ��pλ���Խ��������ַ�Ϊ���࣬Ϊ0�ĺ�Ϊ1��
//���������ֱַ������� ��õ�������ֻ������һ�ε���
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
//	printf("ֻ����һ�ε���%d��%d\n",x,y);
//
//	return 0;
//}

//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ�� 
//��20Ԫ�����Զ�����ˮ�� 
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
//	printf("�����ʼ�ʽ�");
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
//	printf("��%dԪ�����Ժ�%dƿ��ˮ\n",m,sum);
//	return 0;
//}

//3.ģ��ʵ��strcpy 
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


//4.ģ��ʵ��strcat
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