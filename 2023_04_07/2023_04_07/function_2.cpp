#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

#include"add.h"//�Զ��庯����˫����

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}


//��������


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf�ķ���ֵ - �ַ�����
//}

//����Ƕ�׵���
//��ʽ���� - ��һ�������ķ���ֵ��Ϊ��һ����
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//}


//void Add(int *p)
//{
//	++*p;//(*p)++
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)//�����ϴ�arr��һ��ָ��
//{
//	int right = sz - 1;
//	int left = 0;
//	while (left <= right)//ע��Ⱥų��������
//	{
//		int mid = (left + right) / 2;//���ֲ���ÿ��ѭ����Ҫ���м��±�
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//�ҵ������±꣬�Ҳ�������-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//���鴫�Σ�������Ԫ�ص�ַ
//	if (ret == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//������
//		if (1 == is_leap_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}

//int is_prime(int n)
//{
//	float a = n;
//	int b = 0;
//	for (b = 2; b <= sqrt(a); b++)
//	{
//		if (int(a) % b == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

