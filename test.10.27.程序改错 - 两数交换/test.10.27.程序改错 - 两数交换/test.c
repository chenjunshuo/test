#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void swap(int *a,int *b)
//
//{
//	int *t = a;
//
//	a = b;
//
//	b = t;
//}
void swap(int *a,int *b)

{
	int t = *a;

	*a = *b;

	*b = t;
}

int main()

{
	int a,b;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		swap(&a,&b);
		printf("%d %d\n",a,b);
	}

	return 0;

}