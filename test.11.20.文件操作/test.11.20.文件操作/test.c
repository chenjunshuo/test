#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//FILE * pf;
	char str[1024] = {0};

	sprintf(str, "%d", 12345);
	printf("%s\n",str); //12345

	//pf = fopen("test.txt","w");
	//if(pf != NULL)
	//{
	//	fputs("fopen example",pf);
	//	fclose(pf);
	//}

	//pf = fopen("test.txt", "a");
	//fputs(" dede",pf);
	//fclose(pf);
	//pf = fopen("test.txt","r");
	//fread(str, sizeof(str), 1, pf);
	//fclose(pf);
	//printf("%s\n",str);

	//pf = fopen("test.txt","r");
	//fgets(str, 1024, pf);
	////fread(str,sizeof(str),1,pf);
	//fclose(pf);
	//printf("%s\n",str);

	return 0;
}