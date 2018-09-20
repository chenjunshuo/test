//¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ¡£
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	double sum = 0.0;
    
	//sum = pow(-2.0 , 2);
	//printf("%f\n",sum);

	for(i=1;i<=100;i++)
	{
		sum = sum + pow(-1.0 , i+1)/i;
	}

	printf("1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100=%f\n",sum);

	return 0;
}