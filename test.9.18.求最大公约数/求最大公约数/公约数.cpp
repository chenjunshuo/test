#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 int main ()
 {
	 printf("输入两个正整数：");
	 int x=0;
	 int y=0;
	 scanf("%d%d",&x,&y);
	 int i=0;
	 if (x>y)
	 {
		 x=x+y;
		 y=x-y;
		 x=x-y;
	 }
	 for(i=x;i>0;i--)
	 {
		 if(x%i==0)
		 {
			 if(y%i==0)
			 {
				 printf("两数的最大公约数为:%d",i);
				 break;
			 }
		 }
	 }

	 return 0;
 }