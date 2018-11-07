//实现memmove 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
 
void* my_memmove(void* dst,const void* src,size_t count)
{
    void* ret = dst;
    //dst <= src表示，如果dst在src的前面，从前往后复制不会覆盖src中还没有复制的内容

    if (dst <= src || (char*)dst >= ((char*)src + count))
    {
        //从前往后复制，则不会出现覆盖src中没有复制的内容
        while(count--)
        {
            *(char*)dst = *(char*)src; //char类型指针，表示一个字节一个字节的复制
            dst = (char*)dst + 1; //移动一个字节
            src = (char*)src + 1;
        }
    }
    else
    {
        //从后往前复制，则不会出现覆盖src中没有复制的内容
        dst = (char*)dst + count - 1;//移动到末尾
        src = (char*)src + count - 1;
        while(count--)
        {
            *(char*)dst = *(char*)src;
            dst = (char*)dst - 1; //移动一个字节
            src = (char*)src - 1;
        }
    }
    //返回dst的头指针，还方便左值操作。
    //如：ptstr = memmove(ptstr,src,count); cout << memmove(ptstr,src,count);
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