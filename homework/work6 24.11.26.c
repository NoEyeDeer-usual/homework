#include <stdio.h>
#include <string.h>

int mystrstr(char a[], char b[])
{
	int i, j, k, lena, lenb;
	lena = strlen(a);
	lenb = strlen(b);
	for (i = 0; i <= lena - lenb; i++)
	{
		for (j = 0, k = i; j < lenb && k < lena; j++, k++)
		{
			if (a[k]!= b[j])
				break;
		}
		if (j == lenb)
			return i;
	}
	return -1;
}

//int main()
//{
//	char str1[500];
//	char str2[500];
//	scanf("%s", str1);
//	scanf("%s", str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	printf("%d", mystrstr(str1, str2));
//	
//	return 0;
//}

//6: ���strstr����
//����
//C��������һ������strstr�����Ǳ�дһ�����ƹ��ܵĺ�����mystrstr
//
//int mystrstr(char a[], char b[]);
//�����ǲ����ַ���a�г��ֵĵ�һ��b�����±꣬���û���ҵ������� - 1��
//
//����
//�ֱ����������ַ���a��b���ֱ�ռһ�С��ַ������Ȳ�����500���ַ���
//
//���
//�ַ���a�г��ֵĵ�һ��b�����±ꡣ
//
//����
//����
//
//abca
//bc
//���
//
//1