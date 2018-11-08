#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 1;
//	int* pa = &a;
//	*pa = 2;
//	printf("%p\n",&a);
//	printf("%p\n",pa);
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("&a=%p\n",&a);
//	printf("pa=%p\n",pa);
//	printf("&pa=%p\n",&pa);
//	printf("ppa=%p\n",ppa);
//	printf("&ppa=%p\n",&ppa);
//	//&a=006FFB74
//	//pa=006FFB74
//	//&pa=006FFB68
//	//ppa=006FFB68
//	//&ppa=006FFB5C
//	//**ppa = 30;//等价于 *pa=30;/ a=30;
//	//printf("%d\n",a);
//	//*pa = 20;
//	//printf("%d\n",a);
//	return 0;
//}

int main()
{
	int a[5] = {1,2,3,4,5};
	//pa1为指针数组，数组的每个元素为a数组元素的地址
	int* pa1[5] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
	//pa2为数组指针，指针指向数组a
	int (*pa2)[5] = &a;

	int arr[5];         //长度为5的整型数组
	int* parr1[10];     //parr1为指针数组，数组大小为10，元素类型是指向整型的指针
	int (*parr2)[10];   //parr2为数组指针，指针指向一个大小为10的整型数组
	int (*parr3[10])[5];//parr3为数组，数组大小为5
	                    //元素类型是：大小为10且元素类型是指向整型的指针的指针数组

	return 0;
}