#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//#define MAX 5

//void bubble_sort(int arr[], int n)
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < n - 1; i++)//0-8��9�ˣ�10-1
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿ��ð������
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)//ʡȥ�ظ�����i
//		{
//			if (arr[j] > arr[j + 1]);
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//���˲���ȫ����
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	//int arr[MAX] = {0};
//	//ð������
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//10����
//	int i = 0;
//	//����
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	//������ - ��Ԫ�ص�ַ
	//���� - sizeof(������) - ��ʾ�������飬�������������С����λ�ֽ�
	//���� - &������ - ��ʾ�������飬ȡ��������������ĵ�ַ
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%p\n", arr);//��Ԫ�ص�ַ
	printf("%p\n", arr + 1);

	printf("\n%p\n", &arr[0]);//��Ԫ�ص�ַ
	printf("%p\n", &arr[0] + 1);

	printf("\n%p\n", &arr);//��������ĵ�ַ
	printf("%p\n", &arr + 1);

	printf("\n%p\n", *arr);	
	return 0;
}
