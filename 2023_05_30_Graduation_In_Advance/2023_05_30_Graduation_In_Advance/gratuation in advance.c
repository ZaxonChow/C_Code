#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>
#include<math.h>

//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3)
//	{
//		j++;
//	}
//	printf("%d\n", j);
//	return 0;
//}

//int main()
//{
//	char a = 0, ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//		{
//			ch = ch - 'a' + 'A';
//		}
//		a++;
//		putchar(ch);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long c = a + b;
//	printf("%ld\n", c);
//	return 0;
//}

//Fibonacci
//寻找F数
//int main()
//{
//	int n = 0;
//	printf("请输入一个数：");
//	if (scanf("%d", &n) == 1)
//	{
//		int a = 0;
//		int b = 1;
//		int c = 0;
//		
//		while (1)
//		{
//			if (n == b)
//			{
//				printf("0\n");
//				break;
//			}
//			else if (n < b)
//			{
//				if (abs(a - n) > abs(b - n))
//				{
//					printf("%d\n", abs(b - n));
//				}
//				else
//				{
//					printf("%d\n", abs(a - n));
//				}
//				break;
//			}
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	}
//	return 0;
//}

//替换空格
//替换成%20

void replaceSpace(char* str, int length)
{
	char* cur = str;
	int space_count = 0;
	while (*cur)
	{
		if (*cur == ' ')
			space_count++;
		cur++;
	}
	int end1 = length - 1;
	int end2 = length + space_count * 2 - 1;
	while (end1 < end2)
	{
		if (str[end1] != ' ')
		{
			str[end2] = str[end1];
			end2--;
			end1--;
		}
		else if(str[end1] == ' ')
		{
			end1--;
			str[end2--] = '0';
			str[end2--] = '2';
			str[end2--] = '%';
		}
	}
}

int main()
{
	char s[] = "we are happy.";
	int len = sizeof(s);
	replaceSpace(s, len);
	printf("%s\n", s);
	return 0;
}
