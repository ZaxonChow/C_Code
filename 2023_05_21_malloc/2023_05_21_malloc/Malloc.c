#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//空间大小无法改变
//	int a = 10;
//	int arr[10];
//
//	return 0;
//}

//动态内存管理
//malloc
// 开辟一块size字节的内存，返回一个指向起始位置的指针
// 失败返回空指针
//free
// 释放内存空间
//ralloc
//realloc


//C99标准 - 变长数组
//int n = 0;
//scanf("%d", &n);
//int arr[n];
//VS不支持

//int main()
//{
//	int arr[10] = { 0 };//40字节
//	
//	//动态内存开辟
//	//堆区
//	int* p = (int*)malloc(40);//40字节
//	if (p == NULL)
//	{
//		//开辟失败
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//开辟成功，使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//没有free
//	//并不指内存不回收
//	//当程序退出时，系统自动回收内存空间
//	// 
//	//内存泄漏
//	//使用玩内存空间不归还
//	return 0;//正常返回
//}

//int main()
//{
//	int arr[10] = { 0 };//40字节
//
//	//动态内存开辟
//	//堆区
//	int* p = (int*)malloc(40);//40字节
//	if (p == NULL)
//	{
//		//开辟失败
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//开辟成功，使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	free(p);//易产生野指针
//	p = NULL;//预防野指针
//
//	return 0;//正常返回
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//...
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	//malloc
	int* p = NULL;
	free(p);
	return 0;
}
