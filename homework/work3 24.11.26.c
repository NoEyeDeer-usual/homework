#include <stdio.h>
//int main()
//{
//	char c = '\0';
//	while (c!='\n')
//	{
//		scanf("%c", &c);
//		if ('a' <= c && c <= 'z')
//		{
//			char m;
//			if(c>='z'-4)
//				m = c - 22;
//			else
//				m = c + 4;
//			printf("%c",m );
//		}
//		else if ('A' <= c && c <= 'Z')
//		{
//			char m;
//			if (c >= 'Z' - 4)
//				m = c - 22;
//			else
//				m = c + 4;
//			printf("%c", m);
//		}
//		else
//		{
//			printf("%c", c);		
//		}
//	}
//	return 0;
//}

//4: 将数组中的0移到末尾
//描述
//将数组中的0移到末尾。
//
//输入
//第1行是一个整数n，表示随后有n组数据。
//
//每组数据包含2行，第1行是表示元素个数的整数m，第2行是数组元素。
//
//输出
//对每组数据，将数组中的0移到数组末尾，其他元素保持原来的顺序往前移，输出数组元素，以空格隔开，并换行。
//
//样例
//输入
//
//1
//10
//1 2 0 6 4 0 8 0 9 18
//输出
//
//1 2 6 4 8 9 18 0 0 0