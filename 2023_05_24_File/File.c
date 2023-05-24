#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//文件
//程序文件
//数据文件
// 
//文件名
//文件路径+文件名+文件后缀

//操作
//打开文件
//读取文件
//关闭文件
//文件指针
//在打开文件的同时，返回一个FILE* 指针变量指向该文件，相当于建立指针和文件的关系

//fopen
//FILE* fopen(const char* filename, const char*

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//读文件

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}