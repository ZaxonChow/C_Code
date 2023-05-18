#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//枚举 - enum
//优点
//增加代码可读性
//和#define定义的标识符比较枚举有类型检查，更加严谨
//防止命名污染（封装）
//便于调试
//一次可以定义多个常量

enum Day
{
	//枚举常量
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

enum Sex
{
	Male,
	Female,
	Secrete
};

int main()
{
	enum Day d = Friday;
	/*printf("%d\n", Monday);
	printf("%d\n", Tuesday);
	printf("%d\n", Wednesday);
	printf("%d\n", Male);
	printf("%d\n", sizeof(enum Day));*/
	return 0;
}
