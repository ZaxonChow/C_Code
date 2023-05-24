#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//柔性数组
//结构体中，最后一个元素是大小未知的数组
//结构中的柔性数组成员前，必须至少有一个成员
//sizeof返回的这种结果大小不包括柔性数组的内存
//包含柔性数组成员的结构用malloc()进行内存动态分配，并且分配的内存应大于结构的大小
//以适应柔性数组的预期大小

//方便内存释放
//有利于提高速度

//struct S
//{
//	int n;
//	int arr[];//柔性数组
//};
//
//int main()
//{
//	/*int sz = sizeof(struct S);
//	printf("%d\n", sz);*/
//	//struct S s;//4
//
//	//柔性数组的使用
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));//统一放到堆区
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	ps->arr = (int*)malloc(40);
	if (ps->arr == NULL)
	{
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//扩容
	int* ptr = realloc(ps->arr, 80);
	if (ptr == NULL)
	{
		return 1;
	}
	ps->arr = ptr;
	ptr = NULL;
	//释放
	free(ps->arr);
	free(ps);
	ps = NULL;

	return 0;
}
