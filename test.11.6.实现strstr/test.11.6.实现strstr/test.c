// µœ÷strstr
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

char* my_strstr(const char* p1, const char* p2)
{
	while(*p1)
	{
		char* r1 =(char*)p1;
		char* r2 =(char*)p2;
		if(*p1 == *p2)
		{
			while(*p2)
			{
				p1++;
				p2++;
				if((*p1 != *p2)&&(*p2 != '\0'))
				{
					p2 = r2;
					break;
				}
				else if(*p2 == '\0')
					return r1;
			}
		}
		p1++;
	}
	return NULL;
}

int main()
{
	char a1[1025] = "my name is lili";
	char a2[1025] = "name";
	char *pch = my_strstr(a1, a2);
	printf("%s\n",pch);
	return 0;
}