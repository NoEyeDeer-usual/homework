#include <stdio.h>
#include <math.h>

int sumfenzi = 0;
int sumfenmu = 1;

int getmaxgongyueshu(int m, int n)
{
    if (n == 0 || m == 0)
    {
        return 1;
    }
    if (m % n == 0)
        return n;
    else
        return getmaxgongyueshu(n, m % n);
}

void huajian()
{
    int dei = getmaxgongyueshu(abs(sumfenmu), abs(sumfenzi));
    sumfenmu /= dei;
    sumfenzi /= dei;
}

int calcau(int fenzi, int fenmu)
{
    if (fenmu == 0)
    {
        printf("error");
        return 1;
    }

    int tpsumfenmu = sumfenmu;
    sumfenmu *= fenmu;
    sumfenzi = sumfenzi * fenmu + tpsumfenmu * fenzi;

    huajian();
    return 0;
}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        int op1 = 0;
//        int op2 = 0;
//        scanf("%d/%d", &op1, &op2);
//        if (calcau(op1, op2))
//        {
//            return 0;
//        }
//    }
//    if (sumfenzi == 0)
//    {
//        printf("0");
//    }
//    else if (sumfenmu == 1)
//    {
//        printf("%d", sumfenzi);
//    }
//    else
//    {
//        printf("%d/%d", sumfenzi, sumfenmu);
//    }
//    return 0;
//}


//2: �������
//����
//����
//n
//n ����������������ͣ����û��������ʽ��ָ���ӷ�ĸ�����Լ��Ϊ1�������ս���ķ�ĸΪ1����ֱ����������ʾ��
//
//����
//ÿ���������һ��������������1������
//n
//
//(
//	1
//	��
//	n
//	��
//	10
//)
//n(1��n��10)�����һ�а���ʽ a1 / b1 a2 / b2 ... an / bn ����ʽ����
//n
//n ������������a1, a2, b1, b2, ��, an, bn������������Ŀ��֤���з��Ӻͷ�ĸ����16λ���ͷ�Χ�ڣ������ķ���һ�������ڷ���ǰ�档
//
//���
//�������ķ����Ϸ����������ʽ������������������ķ����޷����㣬�����error��
//
//����1
//����
//
//2
//1 / 2 1 / 3
//���
//
//5 / 6
//����2
//����
//
//2
//- 1 / 2 1 / 2
//���
//
//0