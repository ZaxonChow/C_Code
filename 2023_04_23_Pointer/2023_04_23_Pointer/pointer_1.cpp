#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	//指针与指针类型
//	//指针类型决定了指针进行解引用操作时，能访问的空间的大小
//	//int* p, *p访问4个字节
//	//char* p, *p访问1个字节
//	//double* p, *p访问8个字节
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	printf("%p\n", pa);
//	printf("%d\n", *pa);
//	return 0;
//}

//int main()
//{
//	//指针类型决定了指针走一步走多远 - 指针的步长
//	int a = 0x11223344;
//	int* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//四个字节
//	char b = 'a';
//	char* pb = &b;
//	printf("%p\n", pb);
//	printf("%p\n", pb + 1);//一个字节
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	printf("%p\n", p);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d ", *(p + i));
//		printf("%p\t", (p + i));
//	}
//	printf("\n");
//	return 0;
//}

//野指针
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//指针指向位置不可知
//	//未初始化
//	//int* p;
//	//指针越界
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 11; i++)
//	//{
//	//	*(p++) = i;
//	//}
//	//指针指向的空间释放
//	int* p = test();
//	*p = 20;//返回局部变量或临时变量的地址
//	return 0;
//}