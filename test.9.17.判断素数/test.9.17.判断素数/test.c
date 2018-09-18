#include<stdio.h>
int main()
{
	int n=100;
	int a=1;
	printf("100-200之间的素数有：");
	for(n=100;n<=200;n++)
	{
		int y=0;
		for(a=2;a<n;a++)
		{
			if (n%a==0) y=y+1;
		}
		if (y==0) printf("%d,",n);
	}
	return 0;

}