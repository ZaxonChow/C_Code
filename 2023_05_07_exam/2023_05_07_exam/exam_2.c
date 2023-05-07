#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char a[] = { 'a','b','c','d','e','f' };
//	printf("1 %d\n", sizeof(a));//sizeof(数组名)计算整个数组大小 - 6
//
//	printf("2 %d\n", sizeof(a + 0));//首元素地址 - 4
//
//	printf("3 %d\n", sizeof(*a));//首元素 - 1
//
//	printf("4 %d\n", sizeof(a + 1));//第二个元素地址  - 4
//
//	printf("5 %d\n", sizeof(a[1]));//1号元素 - 1
//
//	printf("6 %d\n", sizeof(&a));//数组的地址 - 4
//
//	printf("7 %d\n", sizeof(*&a));//解引用数组的地址 - 访问整个数组 - 6
//	//&a  ---->  int(*)[4]
//
//	printf("8 %d\n", sizeof(&a + 1));//数组的地址+1 - 4
//	//跳过一个（由6个指向字符元素组成）数组
//
//	printf("9 %d\n", sizeof(&a[0]));//首元素地址 - 4
//
//	printf("A %d\n", sizeof(&a[0] + 1));//第二个元素的地址 - 4
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//
//	//printf("%d\n", strlen(*arr));//野指针 - strlen('a')
//	//printf("%d\n", strlen(arr[1]));//野指针 - strlen('b')
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值 - 跳过arr数组 - 比上方少6个字节
//	printf("%d\n", strlen(&arr[0] + 1));//随机值 - 从'b'开始计算 - 比上方少1个字节 
//	return 0;
//}


//虚拟地址-->物理地址

//int main()
//{
//	char arr[] = "abcdef";//最后添加'\0'
//	printf("%d\n", sizeof(arr));//数组大小 - 7
//	printf("%d\n", sizeof(arr + 0));//首元素地址 - 4
//	printf("%d\n", sizeof(*arr));//首元素大小 - 1
//	printf("%d\n", sizeof(arr[1]));//第二个元素大小 - 1
//	printf("%d\n", sizeof(&arr));//整个数组地址 - 4
//	printf("%d\n", sizeof(&arr + 1));//数组后地址 - 4
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素地址 - 4
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//最后添加'\0'
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//野指针
//	//printf("%d\n", strlen(arr[1]));//野指针
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

int main()
{
	char* p = "abcdef";//常量字符串 - p存放首字符地址，指向a
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1  === *(p+0)
	printf("%d\n", sizeof(&p));//4 - 二级指针
	printf("%d\n", sizeof(&p + 1));//4 - 跳过
	printf("%d\n", sizeof(&p[0] + 1));//4

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//野指针
	//printf("%d\n", strlen(p[0]));//野指针
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}