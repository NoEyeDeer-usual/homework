#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	while (line--)
//	{
//		double money = 0.0;
//		scanf("%lf", &money);
//		int tpmoney = 100 * money;
//
//		int yuan_100 = 0;
//		int yuan_50 = 0;
//		int yuan_10 = 0;
//		int yuan_5 = 0;
//		int yuan_2 = 0;
//		int yuan_1 = 0;
//		int jiao_1 = 0;
//		int fen_5 = 0;
//		int fen_1 = 0;
//
//		yuan_100 = tpmoney / 10000;
//		tpmoney %= 10000;
//
//		yuan_50 = tpmoney / 5000;
//		tpmoney %= 5000;
//
//		yuan_10 = tpmoney / 1000;
//		tpmoney %= 1000;
//
//		yuan_5 = tpmoney / 500;
//		tpmoney %= 500;
//
//		yuan_2 = tpmoney / 200;
//		tpmoney %= 200;
//
//		yuan_1 = tpmoney / 100;
//		tpmoney %= 100;
//
//		jiao_1 = tpmoney / 10;
//		tpmoney %= 10;
//
//		fen_5 = tpmoney / 5;
//		tpmoney %= 5;
//
//		fen_1 = tpmoney;
//
//		printf("%d,%d,%d,%d,%d,%d,%d,%d,%d\n", yuan_100, yuan_50, yuan_10, yuan_5, yuan_2, yuan_1, jiao_1, fen_5, fen_1);
//	}
//	return 0;
//}

//
//5: ֽ��֧������
//����
//����1�֡�5�֡�1�ǡ�1Ԫ��2Ԫ��5Ԫ��10Ԫ��50Ԫ��100Ԫ��������Ҹ����ɡ���Ҫ��Ӽ��̶�������һ�����A����ԪΪ��λ����345.78����Ȼ����ʾ֧���ý�A����Ҫ�ĸ����������ҵ�������������ʾ100Ԫ��50Ԫ��10Ԫ��5Ԫ��2Ԫ��1Ԫ��1�ǡ�5�֡�1����9����������Ҹ�������ţ����ֲ�����ֵ�������֮���ö��ŷָ���
//
//����
//��1����һ������n����ʾ�����n�����ݡ�ÿ������ռһ�С�
//
//���
//��ÿ�����������ʾ֧���ý�A����Ҫ�ĸ����������ҵ������������С�
//
//����
//����
//
//2
//221.5
//201
//���
//
//2, 0, 2, 0, 0, 1, 5, 0, 0
//2, 0, 0, 0, 0, 1, 0, 0, 0
//ʾ������
//#include <stdio.h>
//
//int main() {
//	int n;
//	float A = 0;
//
//	scanf("%d", &n);  // ��n������
//	for (int i = 0; i < n; i++) {
//		int m100 = 0, m50 = 0, m10 = 0, m5 = 0, m2 = 0, m1 = 0, m_10 = 0, m_5 = 0, m_1 = 0;
//
//		scanf("%f", &A);  // ����һ������
//
//		// ����
//
//		printf("%d,%d,%d,%d,%d,%d,%d,%d,%d\n", m100, m50, m10, m5, m2, m1, m_10, m_5, m_1);  // ���������
//	}
//
//	return 0;
//}