#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;//相等
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

//int main()
//{
//	//strcmp
//	//比较两个字符串内容是否相等
//	//比较ASCII值大小
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	int ret = my_strcmp(arr1, arr2);
//	if ( ret == 0)
//	{
//		printf("==\n");
//	}
//	else if(ret < 0)
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;
//}

//strcpy
//strcat
//strcmp
//长度不受限制的函数

//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello");
//	printf("%s\n", arr);
//}

//长度受限制的字符串函数
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//
//	//strncat(arr1, arr2, 5);
//	//printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//	if (ret == 0)
//		printf("==\n");
//	else if (ret < 0)
//		printf("<\n");
//	else
//		printf(">\n");
//	return 0;
//}

//int main()
//{
//	//strstr
//	//查找子串
//	char email[] = "zpw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

//KMP算法
//实现在一个字符串中查找子字符串
//效率高，实现难度大

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p != '\0')
	{
		s1 = p;
		s2 = str2;
		while (*s1!='\0' && *s2!='\0' && * s1 == *s2)
		{
			//源或者目标到字符串结尾结束查找
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			//目标到达字符串结尾，说明存在目标对象
			return (char*)p;
		}
		p++;
	}
	return NULL;
}

//int main()
//{
//	//strstr
//	//查找子串
//	char email[] = "zpw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}


int main()
{
	//strtok
	//切割字符串
	//找到标记，并改为\0，同时返回字段起始位置
	//会改变被操纵的字符
	//第一个参数不为NULL，找到str中第一个标记，strtok保存它在字符串中的位置
	//第一个参数为NULL，将在同一个字符串中被保存的位置开始，查找下一个标记
	//字符串中不存在更多的标记，返回NULL指针
	//zhangpengwei@bitejiuyeke.com
	char email[] = "zhangpengwei@bitejiuyeke.com";
	const char* sep = "@.";
	char cp[30] = { 0 };
	strcpy(cp, email);

	char* ret = strtok(email, sep);
	printf("%s\n", ret);

	ret = strtok(NULL, sep);
	printf("%s\n", ret);

	ret = strtok(NULL, sep);
	printf("%s\n", ret);
	return 0;
}
