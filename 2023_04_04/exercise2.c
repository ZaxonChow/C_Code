#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	//100-200����
	//��������n�־���
	float i = 0;
	int j = 0;
	int count = 0;
	//for(i = 100; i <= 200; i++)
	for (i = 101; i < 200; i += 2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (int(i) % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", int(i));
		}
	}
	//for (i = 100; i <= 200; i++)
	//{
	//	//�Գ���
	//	//����[2, i-1]
	//	for (j = 2; j < i; j++)
	//	{
	//		if (i%j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j == i)
	//	{
	//		printf("%d ", i);
	//		count++;
	//	}
	//}
	printf("\ncount=%d", count);
	return 0;
	////1000-2000��֮������
	//int year = 1000;
	//int count = 0;
	//for (year = 1000; year <= 2000; year++)
	//{//�ܱ�4���������ܱ�100����
	// //�ܱ�400����
	//	if (year % 4 == 0 && year % 100 != 0)
	//	{
	//		printf("%d ", year);
	//		count++;
	//	}
	//	else if (year % 400 == 0)
	//	{
	//		printf("%d ", year);
	//		count++;
	//	}
	//}
	//printf("\n����%d������\n", count);
	//return 0;
	//int m = 0;
	//int n = 0;
	//int r = 0;
	//scanf("%d%d", &m, &n);
	////շת����������Լ��
	//while (m%n)
	//{
	//	r = m % n;
	//	m = n;
	//	n = r;
	//}
	//printf("%d\n", n);
	//return 0;
	/*int i = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}
	return 0;*/
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int temp = 0;
	//scanf("%d %d %d", &a, &b, &c);
	////�㷨
	////a=max, c=min, c = middle
	//if (a < b)
	//{
	//	temp = a;
	//	a = b;
	//	b = temp;
	//}
	//if (a < c)
	//{
	//	temp = a;
	//	a = c;
	//	c = temp;
	//}
	//if (b < c)
	//{
	//	temp = b;
	//	b = c;
	//	c = temp;
	//}
	//printf("%d %d %d\n", a, b, c);
	//return 0;
}

