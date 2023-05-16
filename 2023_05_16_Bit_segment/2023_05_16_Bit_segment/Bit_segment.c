#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//位段
//节省空间
//位段的成员可以是int - unsigned int - signed int或者是char（属于整型家族）
//位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式进行开辟
//位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段

//跨平台问题
//int位段被当成有符号数还是无符号数不确定
//位段中最大位的数目不确定（16位机最大16，32位机最大32,写成27，在16位机器会出问题）
//位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义
//当一个结构包含两个位段，第二个位段成员较大，无法容纳于第一个位段剩余的位时，舍弃还是利用剩余的位，这是不确定的

//struct A
//{
//	int _a : 2;//需要的空间bit数量
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));
	s.a = 10;//1010
	s.b = 12;
	s.c = 3;
	s.d = 4;
	printf("%d", s.a);
	return 0;
}
