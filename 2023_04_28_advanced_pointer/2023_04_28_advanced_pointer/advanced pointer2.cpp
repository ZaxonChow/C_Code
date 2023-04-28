#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数组指针 - 指针

//int main()
//{
//	/*int *p = NULL;//p是整型指针 - 指向整形的指针 - 可以存放整型的地址
//	char *pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址*/
//	//数组指针 - 指向数组的指针 - 可以存放数组的地址
//	int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//数组的地址要存起来
//
//	return 0;
//}

//int main()
//{
//	char *arr[5] = { NULL };
//	char *(*pa)[5] = &arr;//保存arr指针数组的地址的指针
//	//arr是指针数组
//	//&arr是指针数组的地址
//	//*pa表示指针
//	//[5]表示数组
//	return 0;
//}

//int main()
//{
//	//&数组名表示数组的地址
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//print1(arr, 3, 5);//arr - 数组名 - 首元素地址
//	print2(arr, 3, 5);
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int i = 0;
//	//int *p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//	//}
//	return 0;
//}

//int arr[5] - arr是一个5元素的整型数组
//int *parr1[10] - parr1是一个数组，数组有10个元素，每个元素的类型是int*，parr1是指针数组
//int (*parr2)[10] - parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int，parr2是数组指针
//int (*parr3[10])[5] - parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有五个元素，每个元素是int

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcedf";//p2指向常量字符串首地址
//	//指针数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针
//	int arr2[5];
//	int (*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针 - int (*)[5] - 数组指针类型
//	int (*parr3[10])[5];
//	return 0;
//}

//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组传参
//	test1(arr);
//	test2(arr);
//	return 0;
//}

//
//一级指针传参
//
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//void test1(int* p)
//{
//
//}
//
//void test2(char *p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int *p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = 'w';
//	char *pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}

//void test(int** p)
//{}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//
//二级指针
//
//void test(int **p)
//{
//
//}
//
//int main()
//{
//	int *ptr;
//	int **pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组的数组名
//	return 0;
//}

//函数指针 - 指向函数的指针 - 存放函数地址
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//	//&函数名 和 函数名 - 都是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	int(*pa)(int, int) = &Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

void Print(char *str)
{
	printf("%s\n", str);
}

int main()
{
	void(*p)(char*) = Print;
	(*p)("hello bit");//(*p)指向函数Print，该函数参数为("hello bit")
	return 0;
}