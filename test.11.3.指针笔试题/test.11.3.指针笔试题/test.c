#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char * a[] = {"work", "at", "alibaba"};
//	char ** pa = a;
//	pa++;
//	printf("%s\n",*pa);
//	return 0;
//}

int main()
{
	char *c[] = {"ENTER", "NEW", "POINT", "TIRSF"};
	char ** cp[] = {c+3, c+2, c+1, c};
	char *** cpp = cp;
	printf("%s\n",**++cp);
	printf("%s\n",*--*++cp+3);
	printf("%s\n",*cp[-2]+3);
	printf("%s\n",cp[-1][-1]+1);

	return 0;
}
