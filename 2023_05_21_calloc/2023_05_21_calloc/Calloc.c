#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//calloc
//void* calloc(size_t num, size_t size);
//num 元素个数
//size 每个元素大小
//内容初始化为0，并返回起始地址

//根据要不要初始化，选择malloc、calloc

//int main()
//{
//	//开辟十个整形空间
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打印
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	return 0;
//}

//realloc
//void* realloc(void* ptr, size_t size);
//ptr 要修改内容起始地址
//size 调整后大小
//堆区中查找符合大小的空间，复制内存空间数据
//释放原来内存数据，返回地址
//不可直接把地址直接返回给原来的指针

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//扩容
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		//扩容成功
//		p = ptr;
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(p + i));
//	free(p);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//等价于malloc
//	return 0;
//}


