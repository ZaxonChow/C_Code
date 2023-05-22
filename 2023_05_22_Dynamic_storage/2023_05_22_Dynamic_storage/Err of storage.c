#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//常见错误
//1.对NULL解引用操作

//int main()
//{
//	int* p = (int*)malloc(40);
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//方式
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//越界
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//...
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.使用free释放动态开辟的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;//p[i],*(p+i)
//		p++;
//	}
//	//释放
//	free(p);//必须指向开始的起始位置
//	p = NULL;
//	return 0;
//}

//5.对同一块空间的多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	//...
//	free(p);
//	p = NULL;
//	//...
//	free(p);
//
//	return 0;
//}

//6.动态开辟内存忘记释放(内存泄露)
//void test()
//{
//	int* p = (int*)malloc(100);
//	//...
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//		return;
//	//
//	free(p);
//	p = NULL;
// }
//
//int main()
//{
//	test();
//	return 0;
//}

//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return p;
//	}
//	//...
//	return p;
//}
//
//int main()
//{
//	int* ret = test();
//	//忘记释放
//
//	return 0;
//}

//笔试题
//1.test()结果
//void GetMemory(char* p)
//void GetMemory(char** p)
//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void test()
//{
//	char* str = NULL;
//	//GetMemory(str);
//	//GetMemory(&str);
//	str = GetMemory();
//	//动态开辟的100字节的地址
//	strcpy(str, "hello world");//str是空指针
//	printf(str);
//	//释放
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	char* p = "hello world\n";
//	printf(p);
//	printf("%s", "hello world\n");
//	return 0;
//}

//2.
int* f1(void)
{
	int x = 10;
	return (&x);//野指针，局部变量销毁
}

int* f3(void)
{
	int* ptr;//未初始化，ptr内随机值
	*ptr = 10;
	return ptr;//野指针
}