#define _CRT_SECURE_NO_WARNINGS

long long getjiec(int tg)
{
	long long sum = 1;
	for (int j = tg; j != 0; j--)
	{
		sum *= j;
	}
	return sum;

}

#include<stdio.h>
//int main()
//{
//	long long sum = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//	for (int i = n; i != 0; i--)
//	{
//		sum += getjiec(i);
//	}
//	printf("%lld",sum);
//
//	return 0;
//}

//3: 1!+ 2!+ �� + n!
//����
//
//����һ��������n�� ��sum = 1!+ 2!+ �� + n!��ֵ�������
//
//
//
//����
//
//һ��������n��
//
//
//
//���
//
//1!+ 2!+ �� + n!�ĺ�sum������ȷ��sum����32λ�з���������ʾ��
//
//
//
//����
//
//����                                 ���
//
//3                                    9
//
