#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main ()
{
	int i = 0;
	int n = 0;
	
	for( i=1; i<=13; i++)
	{
		if(i<=7)
		{
			for( n=1; n<14 ;n++)
			{
				if((n<8-i) || (n>=7+i))
					printf (" ");
				else
					printf ("%s","*");
			}
			printf("\n");
		}
		if(i>7)
		{
			for( n=1; n<14 ;n++)
			{
				if((n<=i-7) || (13-n<i-7))
					printf (" ");
				else
					printf ("%s","*");
			}
			printf("\n");
		}
	}

	return 0;
}