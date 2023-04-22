#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	double a = 5 / 2.0;
//	int b = 5 % 2;
//	printf("a = %lf\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//00000000 00000000 00000000 00010000
//	a = a >> 1;
//	//00000000 00000000 00000000 00001000
//	//右移操作符：
//	//1.算术右移
//	//右边丢弃，左边补原符号位
//	//2.逻辑右移
//	//右边丢弃，左边补0
//	printf("a = %d\n", a);
//	int b = -4;
//	b = b >> 1;
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000 00000000 00000000 00000001 - 原码
//	//11111111 11111111 11111111 11111110 - 反码
//	//11111111 11111111 11111111 11111111 - 补码
//	a = a >> 1;
//	//11111111 11111111 11111111 11111111 - 补码
//	//11111111 11111111 11111111 11111110 - 反码
//	//10000000 00000000 00000000 00000001 - 原码
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	int b = a << 1;
//	//左移操作符:左边丢弃，右边补0；
//	//移位不要移动负数位如:a>>-1；只作用于整数
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	//& - 按二进制位与
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	printf("c = %d\n", c);
//	//|- 按位或
//	int x = 3;
//	int y = 5;
//	int z = x | y;
//	printf("z = %d\n", z);
//	//^ - 按位异或
//	int u = 3;//0011
//	int v = 5;//0101
//	int w = u^v;//0110
//	printf("w = %d\n", w);
//	return 0;
//}

//int main()
//{
//	//不用tmp交换变量
//	int a = 3;//0011
//	int b = 5;//0101
//	//加减法 - 解决部分问题，可能会溢出
//	//异或的方法
//	a = a^b;//0110 - 6
//	b = a^b;//0011 - 3
//	a = a^b;//0101 - 5
//	printf("a = %d\tb = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	//32bit
//	//00000000 00000000 00000000 00000011
//	//num & 1 == 1 
//	int  i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num>>i)&1))
//			count++;
//	}
//	printf("%d\n", count);
//	/*while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}*/
//	//printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	//赋值操作符
//	//复合赋值符
//	//单目操作符 - 只有一个操作数
//	//! - 非
//	int a = 0;
//	if (!a)
//	{
//		printf("hh\n");
//	}
//	//“-” - 负值
//	//& - 取地址操作符
//	int b = 10;
//	//* - 解引用操作符
//	int *p = &a;
//	*p = 20;
//	return 0;
//}

int main()
{
	//sizeof - 
	int a = 10;
	char c = 'r';
	char *p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(char *));

	printf("%d\n", sizeof(arr));
	return 0;
}