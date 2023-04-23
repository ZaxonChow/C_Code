#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	/*int a = 10;
//	char b = 'a';
//	int arr[10] = { 0 };*/
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//sizeof 内部表达式不运算
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	//00000000 00000000 00000000 00000000 - 补码
//	//11111111 11111111 11111111 11111111 - 补码
//	//11111111 11111111 11111111 11111110 - 反码
//	//10000000 00000000 00000000 00000001 - 原码
//	//~按位取反
//	printf("%d\n", ~a);
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & ~(1 << 2);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	printf("%d\n", ++a);	
//	return 0;
//}

//int main()
//{
//	int a = (int)3.54;
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//整个数组大小4*10
//	printf("%d\n", sizeof(ch));//1*10
//	test1(arr);//数组传首元素地址
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	printf("%d\n", c = 0 || 1);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//&&有一个为0就结束，后续不执行了，只有a++
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n i=%d\n", a, b, c, d, i);
//	printf("\n");
//	i = a++ || ++b || d++;//||有一个为1就结束，后面不执行了，只有a++
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n i=%d\n", a, b, c, d, i);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	b = a > 5 ? 3 : -3;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//逗号表达式
//	//逗号隔开，从左向右，依次计算，结果为最后一个表达式
//	//[]下标引用操作符，一个数组名+一个索引值
//	int a[10] = { 0 };
//	a[4] = 10;
//	printf("%d\n", a[4]);
//	//调用函数时()就是函数调用操作符
//	return 0;
//}


//学生
//创建一个结构体类型 - struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创造一个学生对象s1，并初始化
//	struct Stu s1 = {"Saxon", 25, "2023042314"};
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//printf("%s\n", (*ps).name);
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	return 0;
//}

//int main()
//{
//	//隐式类型转换
//	char a = 3;
//	//00000000 00000000 00000000 00000011
//	//00000011 - a
//	char b = 127;
//	//00000000 00000000 00000000 01111111
//	//01111111 - b
//	char c = a + b;
//	//00000000 00000000 00000000 10000010
//	//10000010 - c
//	//按符号位填充，整形提升，再进行运算
//	//11111111 11111111 11111111 10000010 - 补码
//	//11111111 11111111 11111111 10000001 - 反码
//	//10000000 00000000 00000000 01111110 - 原码
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//}

int main()
{
	//算数转换
	//操作符优先级
	//int a = 10;
	//int b = 20;
	//int c = b + a * 3;
	//a*b + c*d + e*f
	//问题表达式
	//c + --c
	int c = 1;
	c = c + c--;
	printf("%d\n", c);
	c = 1;
	c = c + --c;
	printf("%d\n", c);
	return 0;
}