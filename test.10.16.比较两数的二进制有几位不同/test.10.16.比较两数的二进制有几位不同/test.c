//4.���ʵ�֣� 
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//��������: 1999 2299 
//�������:7
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//void turn_binary(int *p,int n)
//{
//	if(n<0)
//	{
//		*p = 1;
//		n = -n;
//	}
//	p = p-31;
//	while(n)
//	{
//		*p = n&1;
//		n = n>>1;
//		p = p-1;
//	}
//}


int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int count = 0;
	//int n_binary[32] = {0};
	//int m_binary[32] = {0};

	printf("������������");
	scanf("%d%d",&n,&m);
	if(n*m < 0)
	{
		if(n<0)
			n = -n;
		else
			m = -m;
		count ++;
	}
	i = n^m;
	while(i)
	{
		if(i&1)
			count++;
		i = i>>1;
	}
	printf("%d\n",count);


	//turn_binary(n_binary,n);
	//turn_binary(m_binary,m);
	//printf("%d�Ķ����Ʊ��ʽ��",n);
	//for(i=0; i<32; i++)
	//{
	//	printf("%d ",n_binary[i]);
	//}
	//printf("\n%d�Ķ����Ʊ��ʽ��",m);
	//for(i=0; i<32; i++)
	//{
	//	printf("%d ",m_binary[i]);
	//}
	//printf("\n");

	return 0;
}