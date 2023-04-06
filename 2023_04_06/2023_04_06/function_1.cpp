#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//当实参传递给形参时
//形参其实是实参的临时拷贝
//当对形参进行操作时，不会影响实参
//void exchange(int *pa, int *pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b =%d\n", a, b);
//	exchange(&a, &b);//函数调用 - 传值调用与传址调用
//	printf("a=%d b =%d\n", a, b);
//	return 0;
//}

//自定义函数
//ret_type func_name(paral, *)
//{
//	statement;//函数体 - 功能实现
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//memset - memory set - 内存设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	//IO函数
//	//字符串操作函数
//	//字符操作函数
//	//内存操作函数
//	//时间、日期函数
//	//数学函数
//	//其他库函数
//	//strlen - string length - 字符串长度
//	//strcpy - string copy - 字符串拷贝
//	char arr1[] = "bit";
//	char arr2[10] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

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
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
