#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int countTrailingZerosInFactorial(int n) {
	int count = 0;
	while (n >= 5) {
		n /= 5;
		count += n;
	}
	return count;
}
//
//int main() {
//	int line = 0;
//	scanf("%d", &line);
//	while (line--) {
//		int n;
//		scanf("%d", &n);
//		int result = countTrailingZerosInFactorial(n);
//		printf("%d\n", result); // ���100!ĩβ��ĸ���}
//	}
//	return 0;
//}


//7: 100!��ĩβ�ж��ٸ��㣿
//����
//
//˼��100!��ĩβ�ж��ٸ��㣿
//
//
//
//��ʾ1��ֱ���ϻ������100����ֵ��Ȼ�������ĩβ�ж��ٸ��㡣��ʵ�ϣ����ڼ�������ܱ�ʾ��������Χ���ޣ����ַ�ʽ�ǲ����еġ�
//
//
//��ʾ2���۲�һ����ĩβ����������������ѿ�����һ������ĩβÿ����һ���㣬���൱�ڳ���һ��10����10 = 5 * 2��
//
//
//
//����
//
//�ޡ�
//
//
//
//���
//
//100!ĩβ����ĸ�����
//
//
//
//����
//
//����                                  ���
//
//100��ĩβ0�ĸ���
//
