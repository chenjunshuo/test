#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void Func ( char str[100]) 
//{ 
//	printf("%d\n",sizeof( str ));//4
//}

//void GetMemory(char *p) 
//{ 
//	p = (char *)malloc(100); 
//} //�β�ֻ��ʵ�ε�һ����ʱ������
////�˺����뽫���뵽�Ķ�̬�ڴ�ĵ�ַ����str����ʵ�����ǽ�
////��ַ�������β�p
//void Test(void) 
//{ 
//	char *str = NULL; 
//	GetMemory(str); //str��Ϊ��ָ��
//	strcpy(str, "hello world"); 
//	printf(str); 
//} 

//char *GetMemory(void) 
//{ 
//	char p[] = "hello world"; 
//	return p; 
//} //�����е�pΪ�ֲ�����������������GetMemory������
////������������p�ᱻ�ͷţ����ص�ָ��ָ������������ֵ
//void Test(void) 
//{ 
//	char *str = NULL; 
//	str = GetMemory(); 
//	printf(str); 
//} 

//void Test(void) 
//{ 
//	 char *str = (char *) malloc(100);
//	 strcpy(str, "hello"); 
//	 free(str); 
//	 if(str != NULL) //��Ȼ�Ѿ��ͷ���str����str�����ǿ�ָ��
//	 { 
//		strcpy(str, "world"); 
//		printf(str); //world
//	} 
//} 

void GetMemory(char **p, int num) 
{ 
	*p = (char *)malloc(num); 
}//ʹ�ö���ָ�봫�� �Ϳ���ʹstr����һ����̬�ڴ濪�ٵĿռ�
void Test(void) 
{ 
	char *str = NULL; 
	GetMemory(&str, 100); 
	strcpy(str, "hello"); 
	printf(str); //hello
}

int main()
{
	Test();

	//char str[] = "Hello" ; 
	//char *p = str ; 
	//int n = 10;
	//void *pm = malloc( 100 ); 	//Func(str);
	//printf("%d\n",sizeof(str));//6
	//printf("%d\n",sizeof(p));//4
	//printf("%d\n",sizeof(n));//4
	//printf("%d\n",sizeof(pm));//4
	return 0;
}