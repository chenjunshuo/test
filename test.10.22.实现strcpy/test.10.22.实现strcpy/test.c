#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strcpy(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[10] = {0};
	my_strcpy(arr2, arr1);
	printf("%s\n",my_strcpy(arr2, arr1));

	//const char *p = arr1;//����pָ������� �����Ըĵ�ַ
    //*p = 20;      //������
	//p = &arr1[2]; //����

	//char *const p2 = arr1;//����p�ĵ�ַ �����Ը�����
	//*p2 = 'a';     //����
	//p2 = &arr1[2]; //������

	//const char * const p = arr1;//����p�ĵ�ַ������
	//*p = 'a';     //������
	//p = &arr1[2]; //������

	return 0;
}

