#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��ϰ
//char* GetMemory(void)
//{
//	char p[] = "hello world";//�ֲ�����
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	//����ջ�ռ�ĵ�ַ������
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");//Ұָ��
//		printf(str);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//�����������Լ������С������֮��
//int main()
//{
//	long n = 0;
//	long m = 0;
//
//	while (scanf("%ld %ld", &n, &m) == 2)
//	{
//		//շת�����
//		long i = n;
//		long j = m;
//		long r = 0;
//		while (r = i % j)
//		{
//			i = j;
//			j = r;
//		}
//		//j�����Լ��
//		//n*m/j����С������
//		printf("%ld\n", m * n / j + j);
//	}
//}

//����������
int main()
{
	int n = 0;
	printf("���������δ�С��");
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
		break;
	}
	return 0;
}