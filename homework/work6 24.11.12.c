#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	long long line = 0;
//	scanf("%lld", &line);
//	if (line > 20||line<1)
//	{
//		printf("Input Error");
//		return 0;
//	}
//
//	int arr[21] = {0};
//	int tparr[21] = {0};
//	arr[0] = 1;
//	
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf("%d,", arr[j]);
//		}
//		printf("\n");
//
//		for (int j = 0; j < i + 2; j++)
//		{
//			int left = 0;
//			int right = 0;
//
//			if (j == 0)
//				left = 0;
//			else
//				left = arr[j - 1];
//
//			if (j == i+1)
//				right = 0;
//			else
//				right = arr[j];
//
//			tparr[j] = right + left;
//		}
//		memcpy(arr, tparr, sizeof(tparr));
//	}
//
//	int i = 0;
//	return 0;
//}

//6: N ��ֱ���������
//����
//
//����һ�������� 20 �������� n����� n ��ֱ��������ǡ�
//
//����ʾ��ֱ��������ǵ�ÿһ�еĵ�һ���������һ������Ϊ 1���������־�Ϊ�����Ϸ������Ϸ�����֮�ͣ�
//
//
//
//����
//
//һ�������� 20 ����������
//
//
//
//���
//
//�����벻��������ʱ����� Input Error������������ n ��ֱ��������ǡ�
//
//��ע�⣺ÿ����������֣���Ӣ�ĸ�ʽ�µĶ������������
//
//
//
//���� 1
//
//����                                             ���
//
//1                                                   1,
//
//
//
//���� 2
//
//����                                             ���
//
//4                                                   1,
//
//1, 1,
//
//1, 2, 1,
//
//1, 3, 3, 1,
//
