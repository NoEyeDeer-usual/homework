#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // ����ʹ��abs����
//
//int main() {
//    int n1, n2;
//
//    // ��ȡ��һ������
//    scanf("%d", &n1);
//    int arr1[n1];
//    for (int i = 0; i < n1; i++) {
//        scanf("%d", &arr1[i]);
//    }
//
//    // ��ȡ�ڶ�������
//    scanf("%d", &n2);
//    int arr2[n2];
//    for (int i = 0; i < n2; i++) {
//        scanf("%d", &arr2[i]);
//    }
//
//    int maxDistance = 0;
//
//    // ����������������ľ���ֵ��
//    for (int i = 0; i < n1; i++) {
//        for (int j = 0; j < n2; j++) {
//            int distance = abs(arr1[i] - arr2[j]); // �������ֵ��
//            if (distance > maxDistance) {
//                maxDistance = distance; // ����������
//            }
//        }
//    }
//
//    // ������
//    printf("%d\n", maxDistance);
//    return 0;
//}

//
//1: ����ľ���
//����
//����������a��b����a��ȡһ��������b��ȡһ�����������ľ���ֵ��
//
//�����о���ֵ������ֵ��Ϊ��������ľ��롣
//
//����
//ÿ������ռ1�У���1����������Ԫ�صĸ���n(n������10)��������n��������
//
//���
//�����������ľ��롣
//
//����
//����
//
//3 1 2 3
//4 1 2 3 4
//���
//
//3