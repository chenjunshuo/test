//1.дһ���������ز����������� 1 �ĸ��� 
//���磺 15 0000 1111 4 �� 1 
//����ԭ�ͣ� 
//int count_one_bits(unsigned int value) 
//{ 
// // ���� 1��λ�� 
//} 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int count_one_bits(unsigned int valu)
{
	int count = 0;
	while(valu)
	{
		if(valu&1)
			count++;
		valu = valu>>1;
	}
	return count;
}

int main()
{
	unsigned int i = 0;
	scanf("%u",&i);
	printf("%d\n",count_one_bits(i));

	return 0;
}