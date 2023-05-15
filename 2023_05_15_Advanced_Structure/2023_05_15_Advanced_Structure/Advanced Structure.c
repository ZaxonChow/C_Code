#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>

//结构体内存对齐
//第一个成员在与结构体变量偏移量为0的地址处
//其他成员变量要对齐到某个数（对齐数）的整数倍的地址处
//对齐数=编译器默认的一个对齐数与该成员大小的较小值
//VS中默认为8
//结构体的总大小为最大对齐数（每个成员都有对齐数）的整数倍
//如果嵌套了结构体，嵌套的结构体对齐到自己的最大对齐数的整数倍
//结构体的整体大小是所有最大对齐数（含嵌套）的整数倍

//内存对齐原因
//平台
//不是所有的硬件平台都能访问任意地址上的任意数据
//某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常
//性能
//数据结构（尤其是栈）尽可能在自然边界上对齐
//原因在于，为了访问未对齐的内存，处理器需要作两次内存访问
//对齐的内存访问仅需要一次访问

//结构体的内存对齐
//总体上是拿空间换取时间的过程

//让占用空间小的成员集中在一起

//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};

struct S2
{
	char c1;
	char c2;
	int i;
};

struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

//int main()
//{
//	/*struct S1 s1;
//	struct S2 s2;
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));*/
//
//	//printf("%d\n", offsetof(struct S1, c1));
//	//printf("%d\n", offsetof(struct S1, i));
//	//printf("%d\n", offsetof(struct S1, c2));
//
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));
//	return 0;
//}

//修改默认对齐数
#pragma pack(4)

struct S
{
	int i;
	double d;
};
#pragma pack()

#pragma pack(1)
struct S1
{
	char c1;//1
	int i;//4
	char c2;//1
};
#pragma pack()

#pragma once
//头文件中使用，功能：防止头文件被多次引用

int main()
{
	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(struct S1));
	return 0;
}
