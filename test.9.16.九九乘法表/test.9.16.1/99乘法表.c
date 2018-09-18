#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int x=0;
	for(a=1;a<10;a++)
	{
		for(b=1;b<=a;b++)
		{
			x=a*b;
			printf("%d*%d=%d ",a,b,x);
		}
		printf("\n");

	}

	return 0;
}