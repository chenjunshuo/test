#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[20] = "happy everyday!";
//	char arr2[20] = {0};
//	char string[80] = {0};
//
//    //���ַ�������  size_t strlen( const char *string );
//	printf("arr1�ĳ���Ϊ%d\n",strlen(arr1));//����ֵΪ�ַ�����
//
//    //�����ַ������� char *strcpy( char *strDestination, const char *strSource );
//	strcpy(arr2,arr1);//����ֵΪĿ�꺯��
//	printf("%s\n",arr2);
//
//	//�����ַ��� char *strcat( char *strDestination, const char *strSource );
//	printf("%s\n",strcat(arr1,"QAQ"));//����ֵΪ���Ӻ���ַ���
//	strcpy( string, "Hello world from " );
//	strcat( string, "strcpy " );
//	strcat( string, "and " );
//	strcat( string, "strcat!" );
//	printf( "String = %s\n", string );
//
//	//�Ƚ��ַ������� int strcmp( const char *string1, const char *string2 );
//	printf("%d\n",strcmp("abc","abcd"));//�ַ���1С��2 ����-1
//	printf("%d\n",strcmp("abcd","abcd"));//�ַ���1����2 ����0
//	printf("%d\n",strcmp("abcde","abcd"));//�ַ���1����2 ����1
//	printf("%d\n",strcmp(arr1,arr2));
//
//	return 0;
//}


////���ַ��� char *strstr( const char *string, const char *strCharSet );
////����ֵ�����ַ����״���Ŀ���ַ����г��ֵ�����ĸ��ַ
//char str[] =    "lazy";
//char string[] = "The quick brown dog jumps over the lazy fox";
//char fmt1[] =   "         1         2         3         4         5";
//char fmt2[] =   "12345678901234567890123456789012345678901234567890";
//
//int main()
//{
//   char *pdest;
//   int  result;
//   printf( "String to be searched:\n\t%s\n", string );
//   printf( "\t%s\n\t%s\n\n", fmt1, fmt2 );
//   pdest = strstr( string, str );
//   result = pdest - string + 1;//����lazy��string�ĵڼ����ַ�����
//   if( pdest != NULL )
//      printf( "%s found at position %d\n\n", str, result );
//   else
//      printf( "%s not found\n", str );
//
//   return 0;
//}

int main()
{
	char arr1[50] = "hello world";
	char arr2[50] = "hello World";

//	//�����ַ������ַ�char *strncpy( char *strDest, const char *strSource, size_t count );
//	//strncpy(ԭ�ַ�����Ŀ���ַ�������������);
//	//����ֵΪ��������ַ���
	//printf("%s\n",arr1);
	//strncpy(arr1 + 6,"world",5);
	//printf("%s\n",arr1);

//  //�Ƚ������ַ������ַ�int strncmp( const char *string1, const char *string2, size_t count );
//  //����ֵΪ�ȽϽ��
	//printf("%d\n",strcmp(arr1,arr2));   //1
	//printf("%d\n",strncmp(arr1,arr2,5));//0

//  //�����ַ������ַ�char *strncat( char *strDest, const char *strSource, size_t count );
	strncat(arr1,arr2 + 5,6);
	printf("%s\n",arr1);//hello world World

	return 0;
 
}