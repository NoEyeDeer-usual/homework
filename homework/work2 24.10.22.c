#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
//int main()
//{
//	int lie = 0;
//	scanf("%d", &lie);
//	for (int j = 0; j < lie; j++)
//	{
//		int flag = 0;
//		int m = 0;
//		int n = 0;
//		scanf("%d", &m);
//		scanf("%d", &n);
//		for (int h = m; h <= n; h++)
//		{
//			int wei = 0;
//			int arr[3] = { 0 };
//			int tp = h;
//			while (tp)
//			{
//				arr[wei] = tp % 10;
//				tp /= 10;
//				wei++;
//			}
//			int sum = 0;
//			for (int w = 0; w < 3; w++)
//			{
//				sum += pow(arr[w], 3);
//
//			}
//			if (sum == h)
//			{
//				printf("%d ", h);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d", -1);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int T, m, n, num, i, a, b, c, q = 0;
//    scanf("%d", &T);
//    for (i = 1; i <= T; i++) 
//    {
//        scanf("%d%d", &m, &n);
//        for (num = m; num <= n; num++)
//        {
//            c = num % 10;
//            b = (num / 10) % 10;
//            a = num / 100;
//            if (num == a * a * a + b * b * b + c * c * c)
//            {
//                printf("%d ", num);
//                q = 1;
//            }
//        }
//        if (q == 0) 
//        {
//            printf("%d", -1);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//2: 水仙花数
//描述
//水仙花是中国十大名花之一，在中国已有一千多年栽培历史，具有极高的观赏性。而在数学上，我们也发现，具有这样的美的“水仙花数”，它是指一个三位数，它的各位数字的立方和等于其本身，例如：
//153
//=
//1
//3
//+
//5
//3
//+
//3
//3
//153 = 1
//3
//+ 5
//3
//+ 3
//3
//。请编写程序计算输出指定范围内的水仙花数
//
//输入
//第1行是一个整数
//T
//T，表示随后有
//T
//T 组数据。每组数据占一行，包含两个整数
//m
//,
//n
//
//(
//	100
//	≤
//	m
//	≤
//	n
//	≤
//	999
//)
//m, n(100≤m≤n≤999)
//
//输出
//对每组数据，要求输出
//[
//	m
//		,
//		n
//]
//[m, n]范围的所有水仙花数，空格隔开，如果不存在则输出 - 1。
//
//样例
//输入
//
//2
//100 120 
//
//100 999
//输出
//
//- 1
//153 370 371 407