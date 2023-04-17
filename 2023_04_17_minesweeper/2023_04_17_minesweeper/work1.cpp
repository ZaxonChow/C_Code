#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	//找出只出现一次的元素
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret^arr[i];
	}
	printf("单身狗：%d\n", ret);
	////暴力求解
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	int j = 0;
	//	int count = 0;
	//	for (j = 0; j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//	}
	//	if (count == 1)
	//	{
	//		printf("只出现一次的数为：%d\n", arr[i]);
	//	}
	//}
	return 0;
}

//int main()
//{
//	//交换两个整形变量，不用第三变量
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d", a, b);
//	a = a^b;//^按位异或
//	b = a^b;
//	a = a^b;
//	////此方法需考虑溢出的情况
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	printf("交换后：a=%d b=%d", a, b);
//	return 0;
//}