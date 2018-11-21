#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>

//void set(int *p)
//{
//	p = (int*)malloc(sizeof(int));
//	*p = 100;
//}//形参是实参的一份临时拷贝，开辟的动态空间地址赋给了形参p；
// //而无法传给实参，应该为使用二级指针
//void set2(int* * p)
//{
//	*p = (int*)malloc(sizeof(int));
//	**p = 100;
//}//正确
//
//int main()
//{
//	int* p;
//	set2(&p);
//	if(p != NULL)
//	{
//		printf("%d\n",*p);
//	}
//	else
//	{
//		printf("P is NULL");
//	}
//
//	return 0;
//}

//int* add(int a,int b)
//{
//	int sum = a + b;
//	return &sum;
//}//sum是临时变量，生命周期是add函数，返回一个以及释放的变量属于未定义行为
//
//int* add2(int a,int b, int* sum)
//{
//	*sum = a + b;
//	return sum;
//}//正确
//
//int main()
//
//{
//	int a,b,sum;
//	while(scanf("%d %d",&a,&b)  != EOF)
//	{
//		int *p = &sum;
//		p = add2(a,b,p);
//		printf("%d\n",*p);
//	}
//	return 0;
//}
//
//题目：求一个字符在一个字符串里的位置
//输入：多组数据，每组一行，包括一个字符c和一个字符串s，
//用空格分隔，字符c从字母中选择，字符串s长度不超过10
//
//输出：对每组数据输出一个整数，字符第一次出现在字符串的下标，若不存在输出-1，每个数字一行

int find_in_string(const char* s, char c) 
{
    int i = 0;
    for (i = 0; s[i]; i++) 
	{
        if (s[i] == c)
			return i;
    }
    return -1;
}
//int main() 
//{
//    char c, s[11];
//
//    while (scanf("%c%s", &c, s) != EOF)
//	{
//        printf("%d\n", find_in_string(s, c));
//    }
//    return 0;
//}
//原因是在input函数里面有接受用户输入的动作，而输入一定是以回车结束，
//那么这个回车就会残留在缓存中，而当你的scanf读取flag的时候，
//程序会自动获取前面的那个回车符号

//改法一
//int main() 
//{
//    char c, s[11];
//
//    while (scanf("%c%s", &c, s) != EOF)
//	{
//        printf("%d\n", find_in_string(s, c));
//		fflush(stdin);//清空缓存
//    }
//    return 0;
//}

//改法二
//int main() 
//{
//    char c, s[11];
//
//    while (scanf("%s%s", &c, s) != EOF)
//	//用%s的话，程序就会等待下一行输入，回车符号并不会被接收
//	{
//        printf("%d\n", find_in_string(s, c));
//    }
//    return 0;
//}

//方法三
int main() 
{
    char c, s[11];

    while (scanf("%c%s", &c, s) != EOF)
	{
		char ch = ' ';
        printf("%d\n", find_in_string(s, c));
	    while((ch = getchar())!='\n' && (ch != EOF));
    }
    return 0;
}
