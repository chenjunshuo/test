#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include <windows.h>
//��һ��������5λ������������
//��1�����Ǽ�λ����
//��2���ֱ����ÿһλ���֣�
//��3�����������λ���֣�
int main()
{
	int num = 0;
	int i = 0;
	int a = 0;
	printf("����һ��������5λ����������");
	scanf("%d",&num);
	//(1)
	a = num;
	for( i=1; i<6; i++)
	{
		a = a / 10;
		if(a == 0)
		{
			printf("(1)%d��%dλ��\n",num,i);
			break;
		}
	}
	//(2)
	printf("(2)�ֱ����ÿһλ����:");
	a = i;
	int s = 0;
	int g = num;
	for( i=a-1; i>0; i--)
	{
		s = g/(int)pow(10.0,i);
		g = g - (int)pow(10.0,i)*s;
		printf("%d ",s);
	}
	printf("%d \n",g);
	//(3)
	printf("(3)���������λ����:");
	int n = num;
	for( i=1; i<a; i++)
	{
		s = n%10;
		n = n/10;
		printf("%d ",s);
	}
	printf("%d \n",n);


	return 0;
}
//int main()
//{
//	char ch;
//	printf("���ʾ�˷˧��\n");
//	scanf("%s",&ch);
//	
//	for(;ch!='˧';)
//	{
//		printf("����ʵ�ش�-˧");
//		Sleep(1000);
//		system("cls");
//		printf("���ʾ�˷˧��\n");
//		scanf("%s",&ch);
//
//	}
	//while(ch!='˧')
	//{
	//	printf("����ʵ�ش�-˧");
	//	Sleep(1000);
	//	system("cls");
	//	printf("���ʾ�˷˧��\n");
	//	scanf("%s",&ch);
	//	Sleep(10000);
	//}
	//printf("�ش���ȷ~\n");

	//printf ("\a");
	//Sleep(1000);
	//printf ("\a");
	//Sleep(1000);
	//printf ("\a");

//	return 0;
//}

 //int main()
 //{
 //	//welcome to bit!!!!!!
 //	//####################
 //	//w##################!
 //	//we################!!
 //	//wel##############!!!
 //	//....
 //	//char arr[] = "abc";
 //	//a b c \0
 //	//0 1 2 3
 //	char arr1[] = "welcome to bit!!!!!!";
 //	char arr2[] = "####################";
 //	int left = 0;
 //	int right = strlen(arr1)-1;
 //
 //	while(left<=right)
 //	{
 //		arr2[left] = arr1[left];
 //		arr2[right] = arr1[right];
 //		printf("%s\n", arr2);
 //		//Sleep(1000);
 //		//system("cls");
 //		left++;
 //		right--;
 //	}
 //
 //	return 0;
 //}
    

	//int main()
	//{
	//int i = 0;
	//int arr[10] = {0};

	//for( i=0; i<=12; i++)//��i=12ѭ��������û������ѭ�����ǻص�0���¿�ʼѭ��
	//{
	//	printf("hehe\n");
	//	arr[i] = 0;
	//}

	//return 0;
	//}