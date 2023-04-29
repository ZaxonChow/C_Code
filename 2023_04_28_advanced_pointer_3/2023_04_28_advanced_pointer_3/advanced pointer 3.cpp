#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Print(char*str)
//{
//
//}
//
//int main()
//{
//	int a;
//	int *pa;
//	void(*p)(char*) = Print;
//	return 0;
//}


//void(*)() - 函数指针类型
//(* ( void(*)() ) 0 ) ();
//把0强制类型转换成：void(*)() 函数指针类型 - 0就是一个函数的地址
//调用0地址处的该函数


void (*signal(int, void(*)(int)))(int);
//void (*   )(int)
//signal是一个函数声明
//signal函数的参数有2个：
//第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void

//signal函数的返回类型也是一个函数指针：
//该函数指针指向的函数的参数是int，返回值是void

//简化
typedef void(* pfun_t)(int);

pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));//
//	printf("%d\n", Add(2, 3));
//
//	printf("%d\n", (*pa)(2, 3));//函数指针 调用时*意义不大
//	
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//指针数组
//	int *arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;
//	//函数指针数组
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](4, 2));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	return dest;
}
//写一个函数指针pf，能够指向my_strcpy
//写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址

int main()
{
	char* (*pf)(char*, const char*) = my_strcpy;
	char* (*pfArr[4])(char*, const char*) = { my_strcpy };
	return 0;
}