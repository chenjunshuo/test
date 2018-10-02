#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	//char arr1[20] = "My name is Jun.";
	//printf("Bfore:%s\n",arr1);
	//printf("After:%s\n",_strlwr(arr1));
	//printf("After:%s\n",_strupr(arr1));
	char arr1[50] = {0};
	while(1){
		gets(arr1);
		puts(_strlwr(arr1));
	}
	

	return 0;
}