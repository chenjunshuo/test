#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>

//void set(int *p)
//{
//	p = (int*)malloc(sizeof(int));
//	*p = 100;
//}//�β���ʵ�ε�һ����ʱ���������ٵĶ�̬�ռ��ַ�������β�p��
// //���޷�����ʵ�Σ�Ӧ��Ϊʹ�ö���ָ��
//void set2(int* * p)
//{
//	*p = (int*)malloc(sizeof(int));
//	**p = 100;
//}//��ȷ
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
//}//sum����ʱ����������������add����������һ���Լ��ͷŵı�������δ������Ϊ
//
//int* add2(int a,int b, int* sum)
//{
//	*sum = a + b;
//	return sum;
//}//��ȷ
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
//��Ŀ����һ���ַ���һ���ַ������λ��
//���룺�������ݣ�ÿ��һ�У�����һ���ַ�c��һ���ַ���s��
//�ÿո�ָ����ַ�c����ĸ��ѡ���ַ���s���Ȳ�����10
//
//�������ÿ���������һ���������ַ���һ�γ������ַ������±꣬�����������-1��ÿ������һ��

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
//ԭ������input���������н����û�����Ķ�����������һ�����Իس�������
//��ô����س��ͻ�����ڻ����У��������scanf��ȡflag��ʱ��
//������Զ���ȡǰ����Ǹ��س�����

//�ķ�һ
//int main() 
//{
//    char c, s[11];
//
//    while (scanf("%c%s", &c, s) != EOF)
//	{
//        printf("%d\n", find_in_string(s, c));
//		fflush(stdin);//��ջ���
//    }
//    return 0;
//}

//�ķ���
//int main() 
//{
//    char c, s[11];
//
//    while (scanf("%s%s", &c, s) != EOF)
//	//��%s�Ļ�������ͻ�ȴ���һ�����룬�س����Ų����ᱻ����
//	{
//        printf("%d\n", find_in_string(s, c));
//    }
//    return 0;
//}

//������
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
