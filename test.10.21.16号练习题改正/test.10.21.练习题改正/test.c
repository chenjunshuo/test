#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.дһ���������ز����������� 1 �ĸ��� 
//���磺 15 0000 1111 4 �� 1 
//����ԭ�ͣ� 
//int count_one_bits(unsigned int value) 
//{ 
// // ���� 1��λ�� 
//} 
//int count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int count = 0;
//	for(i=0; i<32; i++)
//	{
//		if(value&1)
//			count ++;
//		value >>= 1;
//	}
//	return count;
//
//}
//
//int count_one_bits2(unsigned int value)
//{
//	int count = 0;
//	while(value)
//	{
//		value = value&(value-1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%u",&i);
//	printf("%d\n",count_one_bits(i));
//	printf("%d\n",count_one_bits2(i));
//
//	return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ���ֱ��������������
//void print (int n)
//{
//	int i = 0;
//	for (i=31; i>0; i-=2)//���ż��λ�Ķ�����
//	{
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	for (i=30; i>=0; i-=2)
//	{
//		printf("%d ",(n>>i)&1);//�������λ�Ķ�����
//	}
//	printf("\n");
//}
//
//int main()
//{
//    int n = 0;
//	scanf("%d",&n);
//	print(n);
//	return 0;
//}

//3. ���һ��������ÿһλ��
//void print(int n)
//{
//	if(n > 9)
//		print(n/10);
//	printf("%d ",n%10);
//	//if(n > 0)
//	//{
//	//	print(n/10);
//	//	printf("%d ",n%10);
//	//}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print(n);
//	printf("\n");
//	return 0;
//}

//4.���ʵ�֣� 
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//��������: 1999 2299 
//�������:7

int count_1(int n,int m)//�Ƚ�n��m�����Ƶ�ÿһλ�����������һ��
{
	int count = 0;
	int i = 0;
	for(i=0; i<31; i++)
	{
		if( ( (m>>i) & 1) != ( (n>>i) & 1) )
			count++;
	}
	return count;
}

int count_2(int n,int m)//��n��m�������󸳸�i������i�е�1�ĸ�����
{
	int i = n^m;
	int count = 0;
    while(i)
	{
		if(i&1)
			count++;
		i = i >> 1;
	}
	return count;
}

int main()
{
	int n = 0;
	int m = 0;
	printf("������������");
	scanf("%d%d",&n,&m);
	printf("%d\n",count_1(n,m));
	printf("%d\n",count_2(n,m));

	return 0;
}

