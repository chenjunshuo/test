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
//	//**ppa = 30;//�ȼ��� *pa=30;/ a=30;
//	//printf("%d\n",a);
//	//*pa = 20;
//	//printf("%d\n",a);
//	return 0;
//}

int main()
{
	int a[5] = {1,2,3,4,5};
	//pa1Ϊָ�����飬�����ÿ��Ԫ��Ϊa����Ԫ�صĵ�ַ
	int* pa1[5] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
	//pa2Ϊ����ָ�룬ָ��ָ������a
	int (*pa2)[5] = &a;

	int arr[5];         //����Ϊ5����������
	int* parr1[10];     //parr1Ϊָ�����飬�����СΪ10��Ԫ��������ָ�����͵�ָ��
	int (*parr2)[10];   //parr2Ϊ����ָ�룬ָ��ָ��һ����СΪ10����������
	int (*parr3[10])[5];//parr3Ϊ���飬�����СΪ5
	                    //Ԫ�������ǣ���СΪ10��Ԫ��������ָ�����͵�ָ���ָ������

	return 0;
}