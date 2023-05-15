#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//复杂对象
//利用自定义类型变量
//结构体
//联合
//枚举

//结构体
//结构 - 一些值的集合 - 成员变量 - 每个成员可以是不同类型的变量
//声明
//struct tag
//{
//	member_list;
//}variable_list;

//struct Stu
//{
//	char name[20];
//	int age;
//};

//struct Stu
//{
//	char name[20];
//	int age;
//}s1 = { "Saxon", 25 }, s2;//struct Stu类型的变量 - 全局变量
//
//int main()
//{
//	//struct Stu s1 = { "Saxon", 25 };
//	printf("%s %d\n", s1.name, s1.age);
//	return 0;
//}

//匿名结构体类型
//只能用一次
//struct
//{
//	char name[20];
//	int age;
//}s1;

//数据结构
//数据在内存中的存储结构

//线形
// 顺序表
// 链表

//树形
// 二叉树
//

//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}*linklist;
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklist;

struct score
{
	int n;
	char ch;
};

struct Stu
{
	char name[20];
	int age;
	struct score s;
};


int main()
{
	struct Stu s1 = { "Zaxon", 25, {100, 'q'} };
	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
	return 0;
}
