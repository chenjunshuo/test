//ʵ��memmove 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
 
void* my_memmove(void* dst,const void* src,size_t count)
{
    void* ret = dst;
    //dst <= src��ʾ�����dst��src��ǰ�棬��ǰ�����Ʋ��Ḳ��src�л�û�и��Ƶ�����

    if (dst <= src || (char*)dst >= ((char*)src + count))
    {
        //��ǰ�����ƣ��򲻻���ָ���src��û�и��Ƶ�����
        while(count--)
        {
            *(char*)dst = *(char*)src; //char����ָ�룬��ʾһ���ֽ�һ���ֽڵĸ���
            dst = (char*)dst + 1; //�ƶ�һ���ֽ�
            src = (char*)src + 1;
        }
    }
    else
    {
        //�Ӻ���ǰ���ƣ��򲻻���ָ���src��û�и��Ƶ�����
        dst = (char*)dst + count - 1;//�ƶ���ĩβ
        src = (char*)src + count - 1;
        while(count--)
        {
            *(char*)dst = *(char*)src;
            dst = (char*)dst - 1; //�ƶ�һ���ֽ�
            src = (char*)src - 1;
        }
    }
    //����dst��ͷָ�룬��������ֵ������
    //�磺ptstr = memmove(ptstr,src,count); cout << memmove(ptstr,src,count);
    return ret; 
}

int main()
{
	char str1[1024] = "abcdefghijk";
	char str2[1024] = "abcdefghijk";
	memmove(str1, str1+3, 8);//defghijkijk
	my_memmove(str2, str2+3, 8);//defghijkijk
	puts(str1);
	puts(str2);

	return 0;
}