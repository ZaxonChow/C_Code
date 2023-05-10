#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <assert.h>

//int main()
//{
//	//strlen
//	//求字符串长度 - 不包含\0
//	//char arr[] = "abcdef";//abcdef\0
//	//char arr1[] = { 'b','i','t' };//t后不知道哪里有\0
//	////int len1 = strlen(arr1);//没有意义
//	//int len2 = strlen(arr);
//	//printf("%d\n", len2);
//
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen返回无符号数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//模拟实现

//计数器方法
//指针-指针
//递归的方法
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}

char * my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	/*assert(src);
	assert(dest);*/
	char* ret = dest;
	while (*dest++ = *src++)
		;
	//while (*src != '\0')
	//{
	//	*dest++ = *src++;
	//	/*dest++;
	//	src++;*/
	//}
	//*dest = *src;
	return ret;
}


char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//找到目标空间的末尾\0
	while (*dest != '\0')
	{ 
		dest++;
	}
	//追加内容
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	//char arr1[] = "abcdef";
	//char arr2[20] = { 0 };
 	////"zhangsan"
	////strcpy - 拷贝\0及之前所以内容
	////源数据包含\0
	////目的空间足够且可修改
	//strcpy(arr2, arr1);
	//my_strcpy(arr2, arr1);
	//printf("%s\n", arr2);


	//字符串追加
	//strcat
	//目标空间足够大，可修改
	char arr1[20] = "hello ";
	char arr2[] = "world";
	//strcat(arr1, "world");
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}