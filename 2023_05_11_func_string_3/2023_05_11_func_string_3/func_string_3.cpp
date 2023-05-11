#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
#include<assert.h>

//int main()
//{
//	//strerror
//	//把错误码对应的错误信息输出
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	//errno - C语言设置的全局变量 - 错误码存储
//	//记录最新的错误码
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		;
//	}
//	return 0;
//}

//int main()
//{
//	//字符分类函数
//	//isspace
//	/*int a = isspace('\t');
//	printf("%d\n", a);*/
//
//	//isdigit
//	/*int a = isdigit('8');
//	printf("%d\n", a);*/
//
//	//字符转化函数
//	//tolower
//	printf("%c\n", tolower('W'));
//
//	return 0;
//}

//

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return dest;
}

int main()
{
	//memcpy
	//从source的位置开始向后复制
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int arr2[10] = { 0 };
	//my_memcpy(arr1 + 2, arr1, 32);
	memcpy(arr1 + 2, arr1, 20);

	int i = 0;
	for (i = 0; i < 10;i++)
	{
		printf("%d\n", arr1[i]);
	}
	
	return 0;
}