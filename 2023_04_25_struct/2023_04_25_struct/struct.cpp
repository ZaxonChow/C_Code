#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//调试
//发现程序错误的存在
//以隔离、消除等方式对错误进行定位
//确定错位产生的原因
//提出纠正错误的方法
//对程序错误给予改正，重新测试

//结构是一些值的集合 - 成员变量
//结构的每个成员可以是不同类型的变量
//struct tag
//{
//	member-list
//}variable-list;

//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//全局结构体变量
//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//类型
//
//int main()
//{
//	struct Stu s1 = { "Saxon", 25, "17602912937", "男" };//局部结构体变量
//	Stu s2 = {"Da", 26, "11012011911", "女"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char b;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//类型
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "李四", 40, "155998855", "男" };
//	//比较两种情况
//	//print2更佳
//	//节省时间空间
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


//栈区 - 局部变量、函数形参、函数调用也开辟空间
//堆区 - 动态内存分配、malloc、free、realloc、calloc
//静态区 - 全局变量、静态变量
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}