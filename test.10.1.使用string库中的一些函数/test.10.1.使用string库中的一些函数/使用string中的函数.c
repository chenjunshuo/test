#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[20] = "happy everyday!";
//	char arr2[20] = {0};
//	char string[80] = {0};
//
//    //求字符串长度  size_t strlen( const char *string );
//	printf("arr1的长度为%d\n",strlen(arr1));//返回值为字符长度
//
//    //拷贝字符串数组 char *strcpy( char *strDestination, const char *strSource );
//	strcpy(arr2,arr1);//返回值为目标函数
//	printf("%s\n",arr2);
//
//	//附加字符串 char *strcat( char *strDestination, const char *strSource );
//	printf("%s\n",strcat(arr1,"QAQ"));//返回值为附加后的字符串
//	strcpy( string, "Hello world from " );
//	strcat( string, "strcpy " );
//	strcat( string, "and " );
//	strcat( string, "strcat!" );
//	printf( "String = %s\n", string );
//
//	//比较字符串长度 int strcmp( const char *string1, const char *string2 );
//	printf("%d\n",strcmp("abc","abcd"));//字符串1小于2 返回-1
//	printf("%d\n",strcmp("abcd","abcd"));//字符串1等于2 返回0
//	printf("%d\n",strcmp("abcde","abcd"));//字符串1大于2 返回1
//	printf("%d\n",strcmp(arr1,arr2));
//
//	return 0;
//}


////子字符串 char *strstr( const char *string, const char *strCharSet );
////返回值是子字符串首次在目标字符串中出现的首字母地址
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
//   result = pdest - string + 1;//计算lazy从string的第几个字符出现
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

//	//拷贝字符串的字符char *strncpy( char *strDest, const char *strSource, size_t count );
//	//strncpy(原字符串，目标字符串，拷贝长度);
//	//返回值为拷贝后的字符串
	//printf("%s\n",arr1);
	//strncpy(arr1 + 6,"world",5);
	//printf("%s\n",arr1);

//  //比较两个字符串的字符int strncmp( const char *string1, const char *string2, size_t count );
//  //返回值为比较结果
	//printf("%d\n",strcmp(arr1,arr2));   //1
	//printf("%d\n",strncmp(arr1,arr2,5));//0

//  //附加字符串的字符char *strncat( char *strDest, const char *strSource, size_t count );
	strncat(arr1,arr2 + 5,6);
	printf("%s\n",arr1);//hello world World

	return 0;
 
}