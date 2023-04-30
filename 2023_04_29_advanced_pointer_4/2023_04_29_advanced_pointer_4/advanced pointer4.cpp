#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算器
//void menu()
//{
//	printf("************************\n");
//	printf("**  1. add    2. sub  **\n");
//	printf("**  3. mul    4. div  **\n");
//	printf("**  5. Xor    0. exit **\n");
//	printf("************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x^y;
//}

//指向函数指针数组的指针
//一个指针 - 指针指向一个数组 - 数组元素都是函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取出数组的地址
//
//	int(*p)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针的数组
//	//ppfArr是一个指向[函数指针数组]的指针
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//
//	//ppfArr是一个数组指针，指针指向的数组有四个元素
//	//指向的数组的每个元素的类型时一个函数指针 int(*)(int, int)
//	//
//	return 0;
//}

//回调函数 - 通过函数指针调用的函数
//把函数的指针（地址）作为参数传递给另一个函数
//当这个指针被用来调用其所指向的函数时，称其为回调函数
//回调函数不是由该函数的实现方直接调用
//而是在特定的事件或者条件发生时由另外的一方调用
//用于对该事件或条件进行响应
//void Calc(int(*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数字：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}



//void menu()
//{
//	printf("************************\n");
//	printf("**  1. add    2. sub  **\n");
//	printf("**  3. mul    4. div  **\n");
//	printf("**  5. Xor    0. exit **\n");
//	printf("************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x^y;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//函数指针数组 - 转移表
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };
//	int sz = sizeof(pfArr) / sizeof(pfArr[1]);
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= sz - 1)
//		{
//			printf("请输入操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

//void print(char *str)
//{
//	printf("hehe:%s\n", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

void BubbleSort(int arr[], int sz)
{
	
}

//qsort - 可以排序任意类型数据

int main()
{
	//冒泡排序
	//智能排序整形数组
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}