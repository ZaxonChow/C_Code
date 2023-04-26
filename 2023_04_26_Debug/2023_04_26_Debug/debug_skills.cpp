#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//编译产生可执行程序
//debug - 调试版本可执行文件 - 文件中包含调试信息、不作优化 - 文件较大
//release - 发布版本可执行文件 - 往往进行了优化 - 文件较小、运行速度快



//环境 - debug
//调试快捷键
//F5 - 启动调试 - 和F9配合使用 - 跳到执行逻辑的下一个断点

//F9 - 切换断点

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

//F10 - 逐过程
//F11 - 逐语句

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//调试时
//监视窗口 
//内存窗口 
//反汇编窗口
//寄存器窗口


//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//调用堆栈

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//数组随着下标的增长，地址由低到高变化
//栈区的默认使用：
//先使用高地址处的空间
//再使用低地址出的空间
//

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	//release优化可优化变量空间，使得本例死循环失效
//	system("pause");
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//如何写出好（易于调试）的代码
//运行正常
//bug少
//效率高
//可读性高
//可维护性高
//注释清晰
//文档齐全

//技巧
//使用assert - 断言
//尽量使用const - 
//养成良好编码风格
//添加必要的注释
//避免编程的陷阱

#include<string.h>

//void my_strcpy(char *dest, char *src)
//{
//	//while (*src != '\0')
//	//{
//	//	/**dest = *src;
//	//	dest++;
//	//	src++;*/
//	//	*dest++ = *src++;
//	//}
//	//*dest = *src;
//	if (dest != NULL && src != NULL)
//	{//警惕空指针
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//	
//}

#include<assert.h>
//scr源不改变，用const限制
//char *my_strcpy(char *dest, const char *src)
//{
//	char *ret = dest;//保存目的地数组首地址
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	//把src指向字符串拷贝到dest指向的空间，包含‘\0’
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回首地址
//}
//
//int main()
//{
//	//strcmp
//	//字符串拷贝
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	const int *p = &num;
//	//const修饰指针变量
//	//*左边 - const int *p - 修饰的是*p，不能通过p改变*p的值
//	//*右边 - int * const p - 修饰指针变量p本身，p不能被改变
//
//	printf("%d\n", num);
//	return 0;
//}

//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//常见错误
//编译错误 - 语法错误
//链接错误 - 标识符名不存在或拼写错误
//运行错误 - 借助调试，逐步定位问题

//int Add(int x, int y)
//{
//	return x + y;
//}

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}