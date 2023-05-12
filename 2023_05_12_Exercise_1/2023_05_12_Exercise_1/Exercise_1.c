#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//void digit_change(int num)
//{
//	int bit = 0;
//	int sum = 0;
//	int i = 0;
//	while (num)
//	{
//		bit = num % 10;
//		if (bit % 2 == 1)
//		{
//			bit = 1;
//		}
//		else
//		{
//			bit = 0;
//		}
//		sum += bit * pow(10, i);
//		i++;
//		num /= 10;
//	}
//	printf("%d\n", sum);
//}

//int main()
//{
//	//小乐乐该数字
//	//把一个数字的每一位奇数变成1，偶数变成0
//	//0~10^9
//	int num = 0;
//	printf("请输入一个整数:\n");
//	int ret = scanf("%d", &num);
//	digit_change(num);
//	return 0;
//}

//int main()
//{
//	//带空格直角三角形图案
//	int n = 0;
//	while (scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//网购
//	//双十一打7折
//	//双十二打8折
//	//优惠券额外减50，只可双十一双十二使用
//	//
//
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;//无优惠券为0；
//	printf("请输入价格，月份，日期，有无优惠券（有为1，无为0），用空格隔开：");
//	scanf("%lf %d %d %d", &price, &m, &d, &flag);
//	//计算
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price * 0.8 - flag * 50;
//	}
//
//	//输出
//	if (price < 0.0)
//	{
//		printf("%.2lf\n", 0.0);
//	}
//	else
//	{
//		printf("%.2lf\n", price);
//	}
//	return 0;
//}

int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	
	c = a + b;
	//整型提升
	printf("%d %d", a + b, c);
	return 0;
}