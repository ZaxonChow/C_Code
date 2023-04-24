#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int *p = NULL;//NULL用来初始化指针
//	*pa = 20;
//	pa = NULL;
//	//使用指针前，检测指针有效性
//	if (pa != NULL)
//	{
//		*pa = 10;
//	}
//	return 0;
//}

//int main()
//{
//	//指针+-整数
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (i = 0; i < sz/2; i++)
//	{
//		printf("%d ", *p);
//		p+=2;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n",&arr[9] - &arr[8]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char *start = str;
//	char *end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	//允许指向数组的指针与指向数组元素最后一个元素后面的内存位置的指针比较
//	//不允许与指向第一个元素之前的那个内存位置的指针进行比较
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr - &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
//	//2.sizeof(arr) - sizeof(数组名) - 数组名表示整个数组 - 计算整个数组的大小
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p   =======  %p\n", p+i, &arr[i]);
//	//}
//	return 0;
//}
//
//int main()
//{
//	//二级指针
//	int a = 10;
//	int *pa = &a;
//	int **ppa = &pa;//二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	return 0;
//}

int main()
{
	//指针数组 - 数组 - 存放指针
	//数组指针 - 指针
	int a = 10;
	int b = 20;
	int c = 30;
	//int *pa = &a;
	//int *pb = &b;
	//int *pc = &c;
	//整形数组 - 存放整形
	//字符数组 - 存放字符
	int arr[10] = {0};
	int *arr2[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr2[i]);
	}
	return 0;
}