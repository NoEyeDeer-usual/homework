#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int resfenzi = 0;
//int resfenmu = 0;
//
//int getmaxgongyueshu(int m, int n)
//{
//	if (m % n == 0)
//		return n;
//	else
//		return getmaxgongyueshu(n, m % n);
//}
//
//void calcu(int fenzi1,int fenmu1,int fenzi2,int fenmu2)
//{
//	if (fenzi1 == 0 || fenzi2 == 0)
//	{
//		resfenzi = fenzi1 + fenzi2;
//		resfenmu = fenmu1 + fenmu2;
//		return;
//	}
//
//	resfenzi = fenzi1 * fenmu2 + fenzi2 * fenmu1;
//	resfenmu = fenmu1 * fenmu2;
//}
//
//void huajian() 
//{
//	int dei = getmaxgongyueshu(resfenmu,resfenzi);
//	resfenzi /= dei;
//	resfenmu /= dei;
//	//if (resfenzi % resfenmu ==0)
//	//{
//	//	resfenzi = resfenzi / resfenmu;
//	//	resfenmu = 0;
//	//}
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);
//
//
//
//	while (line--)
//	{
//		int fenzi = 0;
//		int fenmu = 0;
//		scanf("%d/%d",&fenzi,&fenmu);
//		calcu(fenzi,fenmu,resfenzi,resfenmu);
//	}
//	huajian();
//
//	if(resfenmu!=1)
//		printf("%d/%d",resfenzi,resfenmu);
//	else
//	{
//		printf("%d", resfenzi);
//	}
//
//	return 0;
//}
//
//3: �������
//����
//����
//n
//n ����������������ͣ����������ʽ��ʾ����ν�����ʽ��ָ�����ӷ�ĸ�����Լ��Ϊ
//1
//1�������ս���ķ�ĸΪ
//1
//1����ֱ����������ʾ��
//
//�磺5 / 6��10 / 3���������ʽ����3 / 6��Ҫ����Ϊ1 / 2, 3 / 1��Ҫ����Ϊ3��
//
//���Ӻͷ�ĸ����Ϊ
//0
//0��Ҳ��Ϊ������
//
//����
//��һ����һ������
//n
//n����ʾ����������
//1
//��
//n
//��
//10
//1��n��10��
//������
//n
//n �У�ÿ��һ���������� p / q ����ʽ��ʾ�������ո�p��q��������
//10
//10��
//
//���
//���ֻ��һ�У������ս���������ʽ����Ϊ�������� p / q ����ʽ��ʾ��
//
//����
//����
//
//2
//1 / 2
//1 / 3
//���
//
//5 / 6