#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����ָ�� - ָ��

//int main()
//{
//	/*int *p = NULL;//p������ָ�� - ָ�����ε�ָ�� - ���Դ�����͵ĵ�ַ
//	char *pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ*/
//	//����ָ�� - ָ�������ָ�� - ���Դ������ĵ�ַ
//	int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//����ĵ�ַҪ������
//
//	return 0;
//}

//int main()
//{
//	char *arr[5] = { NULL };
//	char *(*pa)[5] = &arr;//����arrָ������ĵ�ַ��ָ��
//	//arr��ָ������
//	//&arr��ָ������ĵ�ַ
//	//*pa��ʾָ��
//	//[5]��ʾ����
//	return 0;
//}

//int main()
//{
//	//&��������ʾ����ĵ�ַ
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//print1(arr, 3, 5);//arr - ������ - ��Ԫ�ص�ַ
//	print2(arr, 3, 5);
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int i = 0;
//	//int *p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//	//}
//	return 0;
//}

//int arr[5] - arr��һ��5Ԫ�ص���������
//int *parr1[10] - parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*��parr1��ָ������
//int (*parr2)[10] - parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ��
//int (*parr3[10])[5] - parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ������������Ԫ�أ�ÿ��Ԫ����int

//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcedf";//p2ָ�����ַ����׵�ַ
//	//ָ������
//	int* arr[10];
//	char* ch[5];
//	//����ָ��
//	int arr2[5];
//	int (*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ�� - int (*)[5] - ����ָ������
//	int (*parr3[10])[5];
//	return 0;
//}

//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��ά���鴫��
//	test1(arr);
//	test2(arr);
//	return 0;
//}

//
//һ��ָ�봫��
//
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}

//void test1(int* p)
//{
//
//}
//
//void test2(char *p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int *p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = 'w';
//	char *pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}

//void test(int** p)
//{}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//
//����ָ��
//
//void test(int **p)
//{
//
//}
//
//int main()
//{
//	int *ptr;
//	int **pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//ָ�������������
//	return 0;
//}

//����ָ�� - ָ������ָ�� - ��ź�����ַ
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//	//&������ �� ������ - ���Ǻ����ĵ�ַ
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	int(*pa)(int, int) = &Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

void Print(char *str)
{
	printf("%s\n", str);
}

int main()
{
	void(*p)(char*) = Print;
	(*p)("hello bit");//(*p)ָ����Print���ú�������Ϊ("hello bit")
	return 0;
}