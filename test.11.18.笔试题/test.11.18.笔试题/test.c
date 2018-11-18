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
//} //形参只是实参的一份临时拷贝；
////此函数想将申请到的动态内存的地址赋给str，但实际上是将
////地址赋给了形参p
//void Test(void) 
//{ 
//	char *str = NULL; 
//	GetMemory(str); //str仍为空指针
//	strcpy(str, "hello world"); 
//	printf(str); 
//} 

//char *GetMemory(void) 
//{ 
//	char p[] = "hello world"; 
//	return p; 
//} //函数中的p为局部变量，生命周期是GetMemory函数；
////当函数结束，p会被释放，返回的指针指向的内容是随机值
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
//	 if(str != NULL) //虽然已经释放了str，但str不会是空指针
//	 { 
//		strcpy(str, "world"); 
//		printf(str); //world
//	} 
//} 

void GetMemory(char **p, int num) 
{ 
	*p = (char *)malloc(num); 
}//使用二级指针传参 就可以使str接受一个动态内存开辟的空间
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