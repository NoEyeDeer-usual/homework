#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//
//int tranr(int num,int r)
//{
//	if (num < r)
//	{
//		return num;
//	}
//	else
//	{
//		return num % r + 10 * tranr(num / r, r);
//	}
//}
//
//int judeWave(int num)
//{
//	if (num < 10)
//	{
//		return 1;
//	}
//	int arr[8];
//
//	int weishu = 0;
//	for (weishu; num; weishu++)
//	{
//		arr[weishu] = num % 10;
//		num /= 10;
//	}
//
//
//	int flag = 1;
//	for (int index1 = 0; index1 + 2 < weishu; index1++)
//	{
//		if (arr[index1] != arr[index1 + 2])
//			flag = 0;
//	}
//
//	for (int index2 = 1; index2 + 2 < weishu; index2++)
//	{
//		if (arr[index2] != arr[index2 + 2])
//			flag = 0;
//	}
//
//
//	if (flag == 1)
//		return 1;
//	return 0;
//}
//
//int judedoubeWave(int num,int rlow,int rhig )
//{
//	int numofwave = 0;
//	for (int i = rlow; i <= rhig; i++)
//	{
//		if (judeWave(tranr(num, i)))
//			numofwave++;
//	}
//	if (numofwave >= 2)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int rlow = 0;
//	int rhig = 0;
//	int numlow = 0;
//	int numhig = 0;
//	scanf("%d%d%d%d",&rlow,&rhig,&numlow,&numhig);
//
//	int flag2 = 0;
//	for (int i = numlow; i <= numhig; i++)
//	{
//		if (judedoubeWave(i, rlow, rhig))
//		{
//			flag2 =1;
//			printf("%d\n",i);
//		}
//	}
//	if (!flag2)
//	{
//		printf("NULL");
//	}
//	return 0;
//}

//2: ������
//����
//����������һ�Բ�ͬ����֮�佻��ת����������
//1212121
//1212121���ر�أ�ֻ��һλ����Ҳ����������������
//1
//1��
//
//˫�ز���������ָ���������ֽ����¶��ǲ�����������
//
//��ʮ������
//191919
//191919 ��һ��ʮ�����µĲ�����������Ӧ��ʮһ������
//121212
//121212 Ҳ��һ��������������ʮ������
//191919
//191919 ��һ��˫�ز�������
//
//������������ָ����Χ���ҳ�����˫�ز�������
//
//����
//����һ�а����ĸ��ÿո������ʮ��������
//m
//,
//n
//,
//L
//,
//R
//m, n, L, R��
//
//[
//	m
//		,
//		n
//]
//[m, n] ��ʾӦ�����ǵĽ��Ƶķ�Χ��
//[
//	L
//		,
//		R
//]
//[L, R] ��ʾӦ�����ǵ����ֵķ�Χ��
//
//���У�
//2
//��
//m
//��
//n
//��
//32
//2��m��n��32��
//1
//��
//L
//��
//R
//��
//1
//0
//7
//1��L��R��10
//7
//
//
//���
//��С������ʮ������ʽ���ָ����Χ�ڵ�ָ�������Ĳ�������һ�����һ������
//
//���û�У���ô���NULL��
//
//����
//����
//
//10 11 190000 960000
//���
//
//191919
//383838
//575757
//767676
//959595
//����
//
//10 11 7 9
//���
//
//7
//8
//9