#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//程序环境
//翻译环境 - 源代码转化为机器指令
//执行环境 - 实际执行代码
//每个源文件经过编译器处理生成目标文件
//多个目标文件与链接库经过链接器处理生成可执行文件
//编译
// 预编译/预处理
//  头文件的包含#include
//  define定义符号的替换，删除定义的符号
//  注释删除
// 编译
//  把c语言代码转化成汇编代码
//  语法分析
//  词法分析
//  符号汇总
//  语义分析
// 汇编
//  把汇编代码转化成机器语言
//  
//链接


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}