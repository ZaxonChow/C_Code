#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//#define MAX 5

//void bubble_sort(int arr[], int n)
//{
//	//确认趟数
//	int i = 0;
//	for (i = 0; i < n - 1; i++)//0-8，9趟，10-1
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每趟冒泡排序
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)//省去重复次数i
//		{
//			if (arr[j] > arr[j + 1]);
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//本趟不完全有序
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
//	//冒泡排序
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//10个数
//	int i = 0;
//	//升序
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	//数组名 - 首元素地址
	//例外 - sizeof(数组名) - 表示整个数组，计算整个数组大小，单位字节
	//例外 - &数组名 - 表示整个数组，取出的是整个数组的地址
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%p\n", arr);//首元素地址
	printf("%p\n", arr + 1);

	printf("\n%p\n", &arr[0]);//首元素地址
	printf("%p\n", &arr[0] + 1);

	printf("\n%p\n", &arr);//整个数组的地址
	printf("%p\n", &arr + 1);

	printf("\n%p\n", *arr);	
	return 0;
}
