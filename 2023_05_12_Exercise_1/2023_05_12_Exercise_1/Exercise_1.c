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
//	//С���ָ�����
//	//��һ�����ֵ�ÿһλ�������1��ż�����0
//	//0~10^9
//	int num = 0;
//	printf("������һ������:\n");
//	int ret = scanf("%d", &num);
//	digit_change(num);
//	return 0;
//}

//int main()
//{
//	//���ո�ֱ��������ͼ��
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
//	//����
//	//˫ʮһ��7��
//	//˫ʮ����8��
//	//�Ż�ȯ�����50��ֻ��˫ʮһ˫ʮ��ʹ��
//	//
//
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;//���Ż�ȯΪ0��
//	printf("������۸��·ݣ����ڣ������Ż�ȯ����Ϊ1����Ϊ0�����ÿո������");
//	scanf("%lf %d %d %d", &price, &m, &d, &flag);
//	//����
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price * 0.8 - flag * 50;
//	}
//
//	//���
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
	//��������
	printf("%d %d", a + b, c);
	return 0;
}