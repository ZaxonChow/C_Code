#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

#include"add.h"//自定义函数用双引号

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}


//函数定义


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值 - 字符个数
//}

//函数嵌套调用
//链式访问 - 把一个函数的返回值作为另一参数
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

//int binary_search(int arr[], int k, int sz)//本质上此arr是一个指针
//{
//	int right = sz - 1;
//	int left = 0;
//	while (left <= right)//注意等号成立的情况
//	{
//		int mid = (left + right) / 2;//二分查找每次循环都要求中见下标
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
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//找到返回下标，找不到返回-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//数组传参，传的首元素地址
//	if (ret == -1)
//		printf("找不到指定的数字\n");
//	else
//		printf("找到了，下标为：%d\n", ret);
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
//		//求闰年
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
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

