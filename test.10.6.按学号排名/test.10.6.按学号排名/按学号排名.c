#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Student
{
	int num;
	char name[20];
	char sex;
}stu[5] = {{10002,"Meimei",'W'},{10001,"Chune",'M'},{10005,"Jun",'W'},{10006,"Ghun",'M'},{10003,"Kssd",'M'}};

void sort(struct Student stu[],int n)
{
	int i = 0;
	int j = 0;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(stu[j].num>stu[j+1].num)
			{
				struct Student tmp = stu[j+1];
				stu[j+1] = stu[j];
				stu[j] = tmp;
			}
		}
	}
}

int main()
{
	int i = 0;
	//int j = 0;
	////for(i=0; i<5; i++)
	////{
	////	printf("%d_%s\n", stu[i].num, stu[i].name);
	////} 
	//for(i=0; i<4; i++)
	//{
	//	for(j=0; j<4; j++)
	//	{
	//		if(stu[j].num>stu[j+1].num)
	//		{
	//			struct Student tmp = stu[j+1];
	//			stu[j+1] = stu[j];
	//			stu[j] = tmp;
	//		}
	//	}
	//}
	sort(stu,5);
	for(i=0; i<5; i++)
	{
		printf("%d_%s\n",stu[i].num,stu[i].name);
	}
	return 0;
}