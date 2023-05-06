#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char* pc = &ch;
//	//指针类型：
//	//+1/-1会跳过几个字节（步长）
//	//解引用操作时的权限
//
//	//数组名：
//	//大部分情况首元素地址
//	//sizeof(数组名)
//	//&数组名 - 取出的是数组的地址
//
//	//数组指针
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//
//	//函数指针
//	//printf("%p\n", &Add);
//	int(*pf)(int,int) = &Add;
//	printf("%d\n", (*pf)(2, 3));
//	printf("%d\n", pf(2, 3));
//
//	//函数指针数组
//	int(*pfArr[4])(int, int) = { Add };
//	//pfArr每个元素的类型为int(*)(int,int)
//
//	//回调函数
//	//通过函数指针调用的函数
//
//	return 0;
//}

//指针+数组
int main()
{
	int a[] = { 1,2,3,4 };
	printf("1 %d\n", sizeof(a));//sizeof(数组名)计算整个数组大小 - 16

	printf("2 %d\n", sizeof(a+0));//首元素地址 - 4

	printf("3 %d\n", sizeof(*a));//首元素 - 4

	printf("4 %d\n", sizeof(a + 1));//第二个元素地址  - 4

	printf("5 %d\n", sizeof(a[1]));//1号元素 - 4

	printf("6 %d\n", sizeof(&a));//数组的地址 - 4

	printf("7 %d\n", sizeof(*&a));//解引用数组的地址 - 访问整个数组 - 16
	//&a  ---->  int(*)[4]

	printf("8 %d\n", sizeof(&a + 1));//数组的地址+1 - 4
	//跳过一个（由4个指针整形元素组成）数组

	printf("9 %d\n", sizeof(&a[0]));//首元素地址 - 4

	printf("A %d\n", sizeof(&a[0] + 1));//第二个元素的地址 - 4
	return 0;
}