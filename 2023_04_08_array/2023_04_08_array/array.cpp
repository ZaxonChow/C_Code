#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

//int main()
//{
//	int arr[10] = { 1, 2, 3 };//不完全初始化，剩余元素默认为0
//	char arr2[5] = { 'a', 'b', 99};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//所占空间大小，字符包括'\0'，计算变量、数组、类型的大小 - 操作符
//	printf("%d\n", strlen(arr4));//'\0'之前字符个数,只针对字符串长度 - 库函数
//	char arr1[] = "abc";
//	char arr5[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr5));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr5));
//	return 0;
//}

//int main()
//{
//	//一维数组
//	//char arr[] = "abcdef";
//	//int i = 0;
//	//for (i = 0; i < strlen(arr); i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	//
//	//return 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);
//	}
//	//数组在内存中连续存放
//}

//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};
//	int arr2[3][4] = { { 1, 2, 3 }, { 4, 5 }};
//	int arr3[][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };//多维数组不能省略列
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr2[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr2[%d][%d] = %p\n", i, j, &arr2[i][j]);
//		}
//	}
//	return 0;
//}

