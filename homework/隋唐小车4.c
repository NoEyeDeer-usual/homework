#include <stdio.h>

//�ݹ��ҳ����Լ��
int getmaxgongyuesgu(int m, int n)
{
	if (m % n == 0)
		return n;
	else
		return getmaxgongyuesgu(n, m % n);
}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d", &m);
//	scanf("%d", &n);
//	printf("%d", getmaxgongyuesgu(m, n));
//}