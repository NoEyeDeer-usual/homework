#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void min_number(int digits_count[], char* result) {
//    int index = 0;
//
//    // �ҵ���һ����������
//    for (int i = 1; i < 10; i++) {
//        if (digits_count[i] > 0) {
//            result[index++] = '0' + i;  // ��ӷ������ֵ����
//            digits_count[i]--;            // ��������������һ
//            break;
//        }
//    }
//
//    // Ȼ�����0
//    if (digits_count[0] > 0) {
//        while (digits_count[0] > 0) {
//            result[index++] = '0'; // ���0�����
//            digits_count[0]--;
//        }
//    }
//
//    // ���ʣ�������
//    for (int i = 0; i < 10; i++) {
//        while (digits_count[i] > 0) {
//            result[index++] = '0' + i; // ���ÿ������
//            digits_count[i]--;
//        }
//    }
//
//    result[index] = '\0'; // ����ַ���������־
//}
//
//int main() {
//    int digits_count[10];
//
//    // ���봦��
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &digits_count[i]);
//    }
//
//    char result[51]; // ���50�����֣�����һ��������
//    min_number(digits_count, result);
//
//    printf("%s\n", result);
//
//    return 0;
//}

//4: ��С����
//����
//����0 - 9���ָ����ɸ���������˳��������Щ���֣�ʹ�����õ�����������С��0 ��������λ����
//
//����
//��һ���и��� 10 ���Ǹ�������˳���ʾ���� 0������ 1���������� 9 �ĸ�������������һ���ո�ָ���10 �����ֵ��ܸ��������� 50��������ӵ�� 1 ���� 0 �����֡�
//
//���
//��һ��������ܹ���ɵ���С������
//
//����
//����
//
//2 2 0 0 0 3 0 0 1 0
//���
//
//10015558