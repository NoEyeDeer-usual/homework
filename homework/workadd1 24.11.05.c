#define _CRT_SECURE_NO_WARNINGS

long long getjiec2(int tg)
{
	if (tg == 0 || tg == 1)
	{
		return (long long)1;
	}
	long long sum = 1;
	for (long long j = tg; j != 0; j--)
	{
		sum %= 1000000;
		sum *= (j % 1000000);
		sum %= 1000000;
	}
	return sum;

}

#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	while (line--)
//	{
//		long long num = 0;
//		scanf("%lld", &num);
//
//
//		if (num != 0 && num != 1)
//		{
//			long long sum = 0;
//			for (long long j = num; j != 0; j--)
//			{
//				sum %= 1000000;
//				sum += (getjiec2(j) % 1000000);
//				sum %= 1000000;
//			}
//			printf("%lld\n", sum);
//		}
//		else
//		{
//			printf("1\n");
//		}
//
//	}
//	return 0;
//}

//1: �׳����
//����
//
//
//
//�����¶��壺
//
//
//
//��f(n)������i!�ǽ׳����㣬mod��ȡģ���㡣
//
//
//
//����
//
//
//
//��һ��Ϊ������k(1 <= k < 100)����ʾ�����k�����ݡ�ÿ������ռһ�У�Ϊһ��������n��(1 <= n <= 1000000)��
//
//
//
//	���
//
//
//
//	��ÿ������n�����f(n)�������С�
//
//
//
//	����
//
//
//
//	����
//
//	���
//
//	3
//
//	1
//
//	5
//
//	10
//
//	1
//
//	153
//
//	37913
//
//
//
//
//
