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